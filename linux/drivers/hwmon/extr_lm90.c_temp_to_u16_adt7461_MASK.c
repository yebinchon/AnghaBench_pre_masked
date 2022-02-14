
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lm90_data {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct lm90_data *VAR_1, long VAR_2)
{
 if (VAR_1->flags & VAR_0) {
  if (VAR_2 <= -64000)
   return 0;
  if (VAR_2 >= 191750)
   return 0xFFC0;
  return (VAR_2 + 64000 + 125) / 250 * 64;
 }
 if (VAR_2 <= 0)
  return 0;
 if (VAR_2 >= 127750)
  return 0x7FC0;
 return (VAR_2 + 125) / 250 * 64;
}
