
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct ref {char* name; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char const*,char*,char const**) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (struct strbuf*,char*,char const*,...) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_6,
  const struct ref *VAR_7,
  const struct ref *VAR_8,
  struct strbuf *VAR_9)
{
 struct strbuf VAR_10 = VAR_0;
 struct strbuf VAR_11 = VAR_0;

 if (VAR_3 || !VAR_1) {
  if (VAR_5 && !VAR_3) {
   if (VAR_2) {
    if (FUNC_4(VAR_7->name, "refs/tags/"))
     FUNC_5(&VAR_11, "+%s:%s", VAR_7->name,
      VAR_7->name);
    else
     FUNC_5(&VAR_11, "+%s:%s%s", VAR_7->name,
      VAR_9->buf, VAR_2);
   } else if (VAR_8) {
    const char *VAR_12 = VAR_8->name;
    if (!FUNC_3(VAR_12, "refs/heads/", &VAR_12))
     FUNC_0("remote HEAD points at non-head?");

    FUNC_5(&VAR_11, "+%s:%s%s", VAR_8->name,
      VAR_9->buf, VAR_12);
   }






  } else {
   FUNC_5(&VAR_11, "+%s*:%s*", VAR_6, VAR_9->buf);
  }

  if (VAR_11.len) {
   FUNC_5(&VAR_10, "remote.%s.fetch", VAR_4);
   FUNC_2(VAR_10.buf, VAR_11.buf, "^$", 0);
   FUNC_7(&VAR_10);

   if (VAR_3) {
    FUNC_5(&VAR_10, "remote.%s.mirror", VAR_4);
    FUNC_1(VAR_10.buf, "true");
    FUNC_7(&VAR_10);
   }
  }
 }

 FUNC_6(&VAR_10);
 FUNC_6(&VAR_11);
}
