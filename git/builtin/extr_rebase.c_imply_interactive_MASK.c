
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rebase_options {int type; } ;






 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct rebase_options *VAR_0, const char *VAR_1)
{
 switch (VAR_0->type) {
 case 131:
  FUNC_1(FUNC_0("%s requires an interactive rebase"), VAR_1);
  break;
 case 130:
 case 128:
  break;
 case 129:

 default:
  VAR_0->type = 130;
  break;
 }
}
