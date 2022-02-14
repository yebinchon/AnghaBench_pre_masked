
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg; } ;
struct arm_v7s_io_pgtable {TYPE_1__ iop; } ;
typedef int arm_v7s_iopte ;


 int FUNC_0 (int ,int,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static arm_v7s_iopte *FUNC_2(arm_v7s_iopte VAR_0, int VAR_1,
      struct arm_v7s_io_pgtable *VAR_2)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1, &VAR_2->iop.cfg));
}
