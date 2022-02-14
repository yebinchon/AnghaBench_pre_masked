
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int long_name; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(const struct option *VAR_3,
        const char *VAR_4, int VAR_5)
{
 if (VAR_5) {
  *(int *)(VAR_3->value) = VAR_2;
  return 0;
 }
 switch (FUNC_1(VAR_4)) {
 case 1:
  *(int *)(VAR_3->value) = VAR_0;
  return 0;
 case 0:
  *(int *)(VAR_3->value) = VAR_2;
  return 0;
 }
 if (!FUNC_2("if-asked", VAR_4)) {
  *(int *)(VAR_3->value) = VAR_1;
  return 0;
 }
 FUNC_0("bad %s argument: %s", VAR_3->long_name, VAR_4);
}
