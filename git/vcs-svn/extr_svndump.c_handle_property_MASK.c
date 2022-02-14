
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct strbuf {char* buf; size_t len; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int timestamp; int author; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (char*,int *,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct strbuf*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(const struct strbuf *VAR_4,
    struct strbuf *VAR_5,
    uint32_t *VAR_6)
{
 const char *VAR_7 = VAR_4->buf;
 size_t VAR_8 = VAR_4->len;

 switch (VAR_8 + 1) {
 case sizeof("svn:log"):
  if (FUNC_0(VAR_7, "svn:log"))
   break;
  if (!VAR_5)
   FUNC_1("invalid dump: unsets svn:log");
  FUNC_4(&VAR_3.log, VAR_5);
  break;
 case sizeof("svn:author"):
  if (FUNC_0(VAR_7, "svn:author"))
   break;
  if (!VAR_5)
   FUNC_3(&VAR_3.author);
  else
   FUNC_4(&VAR_3.author, VAR_5);
  break;
 case sizeof("svn:date"):
  if (FUNC_0(VAR_7, "svn:date"))
   break;
  if (!VAR_5)
   FUNC_1("invalid dump: unsets svn:date");
  if (FUNC_2(VAR_5->buf, &VAR_3.timestamp, ((void*)0)))
   FUNC_6("invalid timestamp: %s", VAR_5->buf);
  break;
 case sizeof("svn:executable"):
 case sizeof("svn:special"):
  if (VAR_8 == FUNC_5("svn:executable") &&
      FUNC_0(VAR_7, "svn:executable"))
   break;
  if (VAR_8 == FUNC_5("svn:special") &&
      FUNC_0(VAR_7, "svn:special"))
   break;
  if (*VAR_6) {
   if (!VAR_5)
    return;
   FUNC_1("invalid dump: sets type twice");
  }
  if (!VAR_5) {
   VAR_2.type = VAR_1 | 0644;
   return;
  }
  *VAR_6 = 1;
  VAR_2.type = VAR_8 == FUNC_5("svn:executable") ?
    (VAR_1 | 0755) :
    VAR_0;
 }
}
