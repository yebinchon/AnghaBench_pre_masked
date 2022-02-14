
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccu_frac_internal {int* rates; int select; } ;
struct ccu_common {int features; int hw; scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (scalar_t__) ;

unsigned long FUNC_3(struct ccu_common *VAR_1,
     struct ccu_frac_internal *VAR_2)
{
 u32 VAR_3;

 FUNC_1("%s: Read fractional\n", FUNC_0(&VAR_1->hw));

 if (!(VAR_1->features & VAR_0))
  return 0;

 FUNC_1("%s: clock is fractional (rates %lu and %lu)\n",
   FUNC_0(&VAR_1->hw), VAR_2->rates[0], VAR_2->rates[1]);

 VAR_3 = FUNC_2(VAR_1->base + VAR_1->reg);

 FUNC_1("%s: clock reg is 0x%x (select is 0x%x)\n",
   FUNC_0(&VAR_1->hw), VAR_3, VAR_2->select);

 return (VAR_3 & VAR_2->select) ? VAR_2->rates[1] : VAR_2->rates[0];
}
