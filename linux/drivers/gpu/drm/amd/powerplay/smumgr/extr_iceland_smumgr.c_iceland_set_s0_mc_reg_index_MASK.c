
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct iceland_mc_reg_table {size_t last; TYPE_1__* mc_reg_address; } ;
struct TYPE_2__ {int s1; int s0; } ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct iceland_mc_reg_table *VAR_0)
{
 uint32_t VAR_1;
 uint16_t VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->last; VAR_1++) {
  VAR_0->mc_reg_address[VAR_1].s0 =
   FUNC_0(VAR_0->mc_reg_address[VAR_1].s1, &VAR_2)
   ? VAR_2 : VAR_0->mc_reg_address[VAR_1].s1;
 }
 return 0;
}
