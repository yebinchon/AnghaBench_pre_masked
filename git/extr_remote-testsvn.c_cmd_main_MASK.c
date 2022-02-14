
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote {char const** url; int name; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct strbuf*) ;
 int VAR_2 ;
 int FUNC_2 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct remote* FUNC_5 (char const*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int VAR_6 ;
 int FUNC_8 (struct strbuf*,char*,int ,...) ;
 scalar_t__ FUNC_9 (struct strbuf*,int ) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 int VAR_7 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_8, const char **VAR_9)
{
 struct strbuf VAR_10 = VAR_1, VAR_11 = VAR_1,
   VAR_12 = VAR_1, VAR_13 = VAR_1,
   VAR_14 = VAR_1;
 static struct remote *VAR_15;
 const char *VAR_16;

 FUNC_6();
 if (VAR_8 < 2 || VAR_8 > 3) {
  FUNC_13("git-remote-svn <remote-name> [<url>]");
  return 1;
 }

 VAR_15 = FUNC_5(VAR_9[1]);
 VAR_16 = (VAR_8 == 3) ? VAR_9[2] : VAR_15->url[0];

 if (FUNC_7(VAR_16, "file://")) {
  VAR_2 = 1;
  VAR_7 = FUNC_12(VAR_16 + sizeof("file://")-1);
 } else {
  VAR_2 = 0;
  FUNC_2(&VAR_11, VAR_16);
  VAR_7 = VAR_11.buf;
 }

 FUNC_8(&VAR_12, "refs/svn/%s/master", VAR_15->name);
 VAR_5 = VAR_12.buf;

 FUNC_8(&VAR_14, "refs/notes/%s/revs", VAR_15->name);
 VAR_4 = VAR_14.buf;

 FUNC_8(&VAR_13, "%s/info/fast-import/remote-svn/%s.marks",
  FUNC_4(), VAR_15->name);
 VAR_3 = VAR_13.buf;

 while (1) {
  if (FUNC_9(&VAR_10, VAR_6) == VAR_0) {
   if (FUNC_3(VAR_6))
    FUNC_0("Error reading command stream");
   else
    FUNC_0("Unexpected end of command stream");
  }
  if (FUNC_1(&VAR_10))
   break;
  FUNC_11(&VAR_10);
 }

 FUNC_10(&VAR_10);
 FUNC_10(&VAR_11);
 FUNC_10(&VAR_12);
 FUNC_10(&VAR_14);
 FUNC_10(&VAR_13);
 return 0;
}
