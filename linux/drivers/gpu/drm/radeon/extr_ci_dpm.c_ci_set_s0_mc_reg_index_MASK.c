
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct ci_mc_reg_table {size_t last; TYPE_1__* mc_reg_address; } ;
struct TYPE_2__ {int s1; int s0; } ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ci_mc_reg_table *VAR_0)
{
 u32 VAR_1;
 u16 VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->last; VAR_1++) {
  VAR_0->mc_reg_address[VAR_1].s0 =
   FUNC_0(VAR_0->mc_reg_address[VAR_1].s1, &VAR_2) ?
   VAR_2 : VAR_0->mc_reg_address[VAR_1].s1;
 }
}
