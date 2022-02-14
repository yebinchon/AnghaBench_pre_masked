
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int atc; int vmid; int mode; int mask; } ;
union TCP_WATCH_CNTL_BITS {scalar_t__ u32All; TYPE_4__ bitfields; } ;
struct TYPE_9__ {int addr; } ;
union TCP_WATCH_ADDR_L_BITS {scalar_t__ u32All; TYPE_2__ bitfields; } ;
struct TYPE_10__ {int addr; } ;
union TCP_WATCH_ADDR_H_BITS {scalar_t__ u32All; TYPE_3__ bitfields; } ;
struct TYPE_8__ {int vmid; } ;
struct kfd_process_device {TYPE_6__* dev; TYPE_1__ qpd; } ;
struct kfd_dbgdev {TYPE_7__* dev; } ;
struct dbg_address_watch_info {unsigned int num_watch_points; int watch_address; int watch_mode; int process; } ;
struct TYPE_14__ {int kgd; } ;
struct TYPE_13__ {TYPE_5__* kfd2kgd; } ;
struct TYPE_12__ {int (* address_watch_execute ) (int ,unsigned int,scalar_t__,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct dbg_address_watch_info*,union TCP_WATCH_ADDR_H_BITS*,union TCP_WATCH_ADDR_L_BITS*,union TCP_WATCH_CNTL_BITS*,unsigned int,int ) ;
 struct kfd_process_device* FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct kfd_dbgdev *VAR_3,
          struct dbg_address_watch_info *VAR_4)
{
 union TCP_WATCH_ADDR_H_BITS VAR_5;
 union TCP_WATCH_ADDR_L_BITS VAR_6;
 union TCP_WATCH_CNTL_BITS VAR_7;
 struct kfd_process_device *VAR_8;
 unsigned int VAR_9;


 VAR_8 = FUNC_1(VAR_3->dev,
     VAR_4->process);
 if (!VAR_8) {
  FUNC_3("Failed to get pdd for wave control no DIQ\n");
  return -VAR_0;
 }

 VAR_5.u32All = 0;
 VAR_6.u32All = 0;
 VAR_7.u32All = 0;

 if ((VAR_4->num_watch_points > VAR_2) ||
   (VAR_4->num_watch_points == 0)) {
  FUNC_3("num_watch_points is invalid\n");
  return -VAR_1;
 }

 if (!VAR_4->watch_mode || !VAR_4->watch_address) {
  FUNC_3("adw_info fields are not valid\n");
  return -VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->num_watch_points; VAR_9++) {
  FUNC_0(VAR_4, &VAR_5, &VAR_6,
      &VAR_7, VAR_9, VAR_8->qpd.vmid);

  FUNC_2("\t\t%30s\n", "* * * * * * * * * * * * * * * * * *");
  FUNC_2("\t\t%20s %08x\n", "register index :", VAR_9);
  FUNC_2("\t\t%20s %08x\n", "vmid is :", VAR_8->qpd.vmid);
  FUNC_2("\t\t%20s %08x\n", "Address Low is :",
    VAR_6.bitfields.addr);
  FUNC_2("\t\t%20s %08x\n", "Address high is :",
    VAR_5.bitfields.addr);
  FUNC_2("\t\t%20s %08x\n", "Address high is :",
    VAR_5.bitfields.addr);
  FUNC_2("\t\t%20s %08x\n", "Control Mask is :",
    VAR_7.bitfields.mask);
  FUNC_2("\t\t%20s %08x\n", "Control Mode is :",
    VAR_7.bitfields.mode);
  FUNC_2("\t\t%20s %08x\n", "Control Vmid is :",
    VAR_7.bitfields.vmid);
  FUNC_2("\t\t%20s %08x\n", "Control atc  is :",
    VAR_7.bitfields.atc);
  FUNC_2("\t\t%30s\n", "* * * * * * * * * * * * * * * * * *");

  VAR_8->dev->kfd2kgd->address_watch_execute(
      VAR_3->dev->kgd,
      VAR_9,
      VAR_7.u32All,
      VAR_5.u32All,
      VAR_6.u32All);
 }

 return 0;
}
