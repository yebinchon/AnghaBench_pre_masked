
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct ref {int status; int forced_update; char* remote_status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct strbuf VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 struct ref* FUNC_3 (struct ref*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct strbuf*,char*,char const**) ;
 int FUNC_10 (int ,char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct strbuf *VAR_10,
       struct ref **VAR_11,
       struct ref *VAR_12)
{
 char *VAR_13, *VAR_14;
 int VAR_15, VAR_16 = 0;

 if (FUNC_4(VAR_10->buf, "ok ")) {
  VAR_15 = VAR_1;
  VAR_13 = VAR_10->buf + 3;
 } else if (FUNC_4(VAR_10->buf, "error ")) {
  VAR_15 = VAR_7;
  VAR_13 = VAR_10->buf + 6;
 } else
  FUNC_2(FUNC_1("expected ok/error, helper said '%s'"), VAR_10->buf);

 VAR_14 = FUNC_7(VAR_13, ' ');
 if (VAR_14) {
  struct strbuf VAR_17 = VAR_9;
  const char *VAR_18;

  *VAR_14++ = '\0';
  if (!FUNC_9(&VAR_17, VAR_14, &VAR_18))
   VAR_14 = FUNC_5(&VAR_17, ((void*)0));
  else
   VAR_14 = FUNC_11(VAR_14);
  FUNC_6(&VAR_17);

  if (!FUNC_8(VAR_14, "no match")) {
   VAR_15 = VAR_0;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "up to date")) {
   VAR_15 = VAR_8;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "non-fast forward")) {
   VAR_15 = VAR_5;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "already exists")) {
   VAR_15 = VAR_2;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "fetch first")) {
   VAR_15 = VAR_3;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "needs force")) {
   VAR_15 = VAR_4;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "stale info")) {
   VAR_15 = VAR_6;
   FUNC_0(VAR_14);
  }
  else if (!FUNC_8(VAR_14, "forced update")) {
   VAR_16 = 1;
   FUNC_0(VAR_14);
  }
 }

 if (*VAR_11)
  *VAR_11 = FUNC_3(*VAR_11, VAR_13);
 if (!*VAR_11)
  *VAR_11 = FUNC_3(VAR_12, VAR_13);
 if (!*VAR_11) {
  FUNC_10(FUNC_1("helper reported unexpected status of %s"), VAR_13);
  return 1;
 }

 if ((*VAR_11)->status != VAR_0) {




  if (VAR_15 == VAR_0)
   return 1;
 }

 (*VAR_11)->status = VAR_15;
 (*VAR_11)->forced_update |= VAR_16;
 (*VAR_11)->remote_status = VAR_14;
 return !(VAR_15 == VAR_1);
}
