
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_hook {size_t got; size_t argc; int * argv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_5(void *VAR_2, char *VAR_3)
{
 struct get_hook *VAR_4 = (struct get_hook *)VAR_2;
 int VAR_5;

 if (VAR_4->got >= VAR_4->argc)
 {
  FUNC_1(VAR_0, "Expecting an integer argument.\n");
  FUNC_4(0);
  FUNC_0(1);
 }
 VAR_5 = FUNC_3(VAR_4->argv[VAR_4->got], 0, 0);
 VAR_4->got++;

 if (VAR_1 && VAR_3 && *VAR_3)
  FUNC_2("%s: %d\n", VAR_3, VAR_5);

 return VAR_5;
}
