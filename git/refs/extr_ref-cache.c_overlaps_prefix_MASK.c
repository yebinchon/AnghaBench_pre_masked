
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum prefix_state { ____Placeholder_prefix_state } prefix_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum prefix_state FUNC_0(const char *VAR_3,
      const char *VAR_4)
{
 while (*VAR_4 && *VAR_3 == *VAR_4) {
  VAR_3++;
  VAR_4++;
 }
 if (!*VAR_4)
  return VAR_0;
 else if (!*VAR_3)
  return VAR_2;
 else
  return VAR_1;
}
