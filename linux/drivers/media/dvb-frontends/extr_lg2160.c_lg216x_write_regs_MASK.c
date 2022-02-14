
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg216x_state {int dummy; } ;
struct lg216x_reg {int val; int reg; } ;


 int FUNC_0 (struct lg216x_state*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0,
        struct lg216x_reg *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2("writing %d registers...\n", VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3].reg, VAR_1[VAR_3].val);
  if (FUNC_1(VAR_4))
   return VAR_4;
 }
 return 0;
}
