
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cycle_count_down; int cycle_count_reg_offset; int mapping_base; } ;
struct TYPE_3__ {int cycle_count_down; int cycle_count_offset; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 VAR_1 = VAR_0.mapping_base;
 VAR_2->cycle_count_offset =
  VAR_0.cycle_count_reg_offset;
 VAR_2->cycle_count_down =
  VAR_0.cycle_count_down;
}
