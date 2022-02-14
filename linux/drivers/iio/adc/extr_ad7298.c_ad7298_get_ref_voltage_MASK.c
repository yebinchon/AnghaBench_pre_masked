
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7298_state {int reg; scalar_t__ ext_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ad7298_state *VAR_1)
{
 int VAR_2;

 if (VAR_1->ext_ref) {
  VAR_2 = FUNC_0(VAR_1->reg);
  if (VAR_2 < 0)
   return VAR_2;

  return VAR_2 / 1000;
 } else {
  return VAR_0;
 }
}
