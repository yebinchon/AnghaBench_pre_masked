
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct repository*,int ,char,char const*,int) ;
 scalar_t__ FUNC_2 (struct strbuf*,char*,int) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_1,
     const char *VAR_2,
     int VAR_3)
{
 char *VAR_4;
 struct strbuf VAR_5 = VAR_0;

 VAR_4 = FUNC_5("%s/info/alternates", VAR_2);
 if (FUNC_2(&VAR_5, VAR_4, 1024) < 0) {
  FUNC_4(VAR_4);
  FUNC_0(VAR_4);
  return;
 }

 FUNC_1(VAR_1, VAR_5.buf, '\n', VAR_2, VAR_3);
 FUNC_3(&VAR_5);
 FUNC_0(VAR_4);
}
