
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct lm90_data *VAR_1, long VAR_2)
{
 if (VAR_1->flags & VAR_0) {
  if (VAR_2 <= -64000)
   return 0;
  if (VAR_2 >= 191000)
   return 0xFF;
  return (VAR_2 + 500 + 64000) / 1000;
 }
 if (VAR_2 <= 0)
  return 0;
 if (VAR_2 >= 127000)
  return 127;
 return (VAR_2 + 500) / 1000;
}
