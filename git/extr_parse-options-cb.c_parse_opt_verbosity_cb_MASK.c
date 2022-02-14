
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; char short_name; } ;


 int FUNC_0 (char const*) ;

int FUNC_1(const struct option *VAR_0, const char *VAR_1,
      int VAR_2)
{
 int *VAR_3 = VAR_0->value;

 FUNC_0(VAR_1);

 if (VAR_2)

  *VAR_3 = 0;
 else if (VAR_0->short_name == 'v') {
  if (*VAR_3 >= 0)
   (*VAR_3)++;
  else
   *VAR_3 = 1;
 } else {
  if (*VAR_3 <= 0)
   (*VAR_3)--;
  else
   *VAR_3 = -1;
 }
 return 0;
}
