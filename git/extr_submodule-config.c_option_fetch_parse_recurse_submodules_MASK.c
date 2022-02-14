
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; int long_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;

int FUNC_1(const struct option *VAR_2,
       const char *VAR_3, int VAR_4)
{
 int *VAR_5;

 if (!VAR_2->value)
  return -1;

 VAR_5 = VAR_2->value;

 if (VAR_4) {
  *VAR_5 = VAR_0;
 } else {
  if (VAR_3)
   *VAR_5 = FUNC_0(VAR_2->long_name, VAR_3);
  else
   *VAR_5 = VAR_1;
 }
 return 0;
}
