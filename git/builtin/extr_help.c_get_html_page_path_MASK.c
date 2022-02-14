
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (struct strbuf*,char*,char*,char const*) ;
 int FUNC_6 (struct strbuf*,int ) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct strbuf *VAR_2, const char *VAR_3)
{
 struct stat VAR_4;
 char *VAR_5 = ((void*)0);

 if (!VAR_1)
  VAR_1 = VAR_5 = FUNC_8(VAR_0);


 if (!FUNC_7(VAR_1, "://")) {
  if (FUNC_4(FUNC_3("%s/git.html", VAR_1), &VAR_4)
      || !FUNC_0(VAR_4.st_mode))
   FUNC_1("'%s': not a documentation directory.", VAR_1);
 }

 FUNC_6(VAR_2, 0);
 FUNC_5(VAR_2, "%s/%s.html", VAR_1, VAR_3);
 FUNC_2(VAR_5);
}
