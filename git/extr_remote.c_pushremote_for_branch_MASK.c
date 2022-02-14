
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {char const* pushremote_name; } ;


 char const* VAR_0 ;
 char const* FUNC_0 (struct branch*,int*) ;

const char *FUNC_1(struct branch *VAR_1, int *VAR_2)
{
 if (VAR_1 && VAR_1->pushremote_name) {
  if (VAR_2)
   *VAR_2 = 1;
  return VAR_1->pushremote_name;
 }
 if (VAR_0) {
  if (VAR_2)
   *VAR_2 = 1;
  return VAR_0;
 }
 return FUNC_0(VAR_1, VAR_2);
}
