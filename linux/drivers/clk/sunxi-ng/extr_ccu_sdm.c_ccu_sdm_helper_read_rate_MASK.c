
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ccu_sdm_internal {unsigned int table_size; TYPE_1__* table; scalar_t__ tuning_reg; } ;
struct ccu_common {int features; int hw; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ pattern; scalar_t__ m; scalar_t__ n; unsigned long rate; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

unsigned long FUNC_3(struct ccu_common *VAR_1,
           struct ccu_sdm_internal *VAR_2,
           u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;

 FUNC_1("%s: Read sigma-delta modulation setting\n",
   FUNC_0(&VAR_1->hw));

 if (!(VAR_1->features & VAR_0))
  return 0;

 FUNC_1("%s: clock is sigma-delta modulated\n",
   FUNC_0(&VAR_1->hw));

 VAR_6 = FUNC_2(VAR_1->base + VAR_2->tuning_reg);

 FUNC_1("%s: pattern reg is 0x%x",
   FUNC_0(&VAR_1->hw), VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_2->table_size; VAR_5++)
  if (VAR_2->table[VAR_5].pattern == VAR_6 &&
      VAR_2->table[VAR_5].m == VAR_3 && VAR_2->table[VAR_5].n == VAR_4)
   return VAR_2->table[VAR_5].rate;


 return 0;
}
