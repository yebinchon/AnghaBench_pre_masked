
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5592r_state {scalar_t__ reg; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ad5592r_state *VAR_0)
{
 int VAR_1;

 if (VAR_0->reg) {
  VAR_1 = FUNC_0(VAR_0->reg);
  if (VAR_1 < 0)
   return VAR_1;

  return VAR_1 / 1000;
 } else {
  return 2500;
 }
}
