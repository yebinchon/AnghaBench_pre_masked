
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_domain {int pglvl; TYPE_1__* dmar; } ;
struct TYPE_2__ {int hw_cap; } ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int const*) ;

int
FUNC_2(struct dmar_domain *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 static const int VAR_4[] = {
  129,
  131,
  128,
  130
 };

 VAR_2 = VAR_0->pglvl - VAR_1 - 1;
 VAR_3 = FUNC_0(VAR_0->dmar->hw_cap);
 return (VAR_2 < FUNC_1(VAR_4) && (VAR_4[VAR_2] & VAR_3) != 0);
}
