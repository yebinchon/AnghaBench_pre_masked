
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int end; int start; } ;
struct TYPE_7__ {int end; int start; } ;
struct TYPE_6__ {int start; int end; } ;
struct TYPE_5__ {int start; int end; } ;
struct oxnas_pcie {scalar_t__ base; int pcie_ctrl_offset; int sys_ctrl; TYPE_4__ cfg; scalar_t__ outbound_offset; TYPE_3__ io; TYPE_2__ pre_mem; TYPE_1__ non_mem; scalar_t__ inbound; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct oxnas_pcie *VAR_14)
{





 FUNC_0(VAR_14->inbound + VAR_1,
      VAR_0);
 FUNC_3();
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_2, VAR_14->non_mem.start);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_3, VAR_14->non_mem.end);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_11, VAR_14->non_mem.start);


 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_4, VAR_14->pre_mem.start);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_5, VAR_14->pre_mem.end);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_12, VAR_14->pre_mem.start);


 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_8, VAR_14->io.start);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_9, VAR_14->io.end);



 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_6, VAR_14->cfg.start);
 FUNC_1(VAR_14->sys_ctrl, VAR_14->outbound_offset + VAR_7, VAR_14->cfg.end);
 FUNC_3();


 FUNC_2(VAR_14->sys_ctrl, VAR_14->pcie_ctrl_offset, VAR_10, VAR_10);
 FUNC_3();







 FUNC_4(7, VAR_14->base + VAR_13);

 FUNC_3();
}
