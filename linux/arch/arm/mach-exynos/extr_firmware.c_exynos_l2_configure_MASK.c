
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2x0_regs {int aux_ctrl; int pwr_ctrl; int prefetch_ctrl; int data_latency; int tag_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct l2x0_regs *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->tag_latency, VAR_2->data_latency,
     VAR_2->prefetch_ctrl);
 FUNC_0(VAR_1, VAR_2->pwr_ctrl, VAR_2->aux_ctrl, 0);
}
