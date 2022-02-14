
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailinfo {int use_scissors; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,int *) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct mailinfo *VAR_3 = VAR_2;

 if (!FUNC_2(VAR_0, "mailinfo."))
  return FUNC_1(VAR_0, VAR_1, ((void*)0));
 if (!FUNC_3(VAR_0, "mailinfo.scissors")) {
  VAR_3->use_scissors = FUNC_0(VAR_0, VAR_1);
  return 0;
 }

 return 0;
}
