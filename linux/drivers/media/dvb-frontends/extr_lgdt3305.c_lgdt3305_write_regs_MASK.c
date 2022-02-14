
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3305_state {int dummy; } ;
struct lgdt3305_reg {int val; int reg; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_0,
          struct lgdt3305_reg *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1("writing %d registers...\n", VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
  VAR_4 = FUNC_2(VAR_0, VAR_1[VAR_3].reg, VAR_1[VAR_3].val);
  if (FUNC_0(VAR_4))
   return VAR_4;
 }
 return 0;
}
