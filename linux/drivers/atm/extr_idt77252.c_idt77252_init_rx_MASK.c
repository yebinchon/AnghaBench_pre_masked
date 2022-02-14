
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rx_pool; } ;
struct vc_map {int index; TYPE_1__ rcv; int flags; struct atm_vcc* rx_vcc; } ;
struct idt77252_dev {int rct_base; int cmd_lock; int name; } ;
struct atm_vcc {int vci; } ;
struct TYPE_4__ {scalar_t__ max_sdu; } ;
struct atm_qos {int aal; TYPE_2__ rxtp; } ;






 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long) ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct idt77252_dev*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct idt77252_dev*) ;
 int FUNC_7 (struct idt77252_dev*,unsigned long,int ) ;
 int FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_9(struct idt77252_dev *VAR_17, struct vc_map *VAR_18,
   struct atm_vcc *VAR_19, struct atm_qos *VAR_20)
{
 unsigned long VAR_21;
 unsigned long VAR_22;
 u32 VAR_23 = 0;

 if (FUNC_5(VAR_16, &VAR_18->flags))
  return -VAR_0;

 VAR_18->rx_vcc = VAR_19;
 FUNC_2(VAR_16, &VAR_18->flags);

 if ((VAR_19->vci == 3) || (VAR_19->vci == 4))
  return 0;

 FUNC_1(VAR_17, &VAR_18->rcv.rx_pool);

 VAR_23 |= VAR_7;
 VAR_23 |= VAR_13;

 switch (VAR_20->aal) {
  case 131:
   VAR_23 |= VAR_14;
   break;
  case 130:
   VAR_23 |= VAR_12;
   break;
  case 129:
   VAR_23 |= VAR_5;
   break;
  case 128:
   VAR_23 |= VAR_6;
   break;
  default:
   VAR_23 |= VAR_14;
   break;
 }

 if (VAR_20->aal != 128)
  VAR_23 |= VAR_9;
 else if (VAR_20->rxtp.max_sdu > VAR_4)
  VAR_23 |= VAR_11;
 else if (VAR_20->rxtp.max_sdu > VAR_3)
  VAR_23 |= VAR_10;
 else if (VAR_20->rxtp.max_sdu > VAR_2)
  VAR_23 |= VAR_9;
 else
  VAR_23 |= VAR_8;

 VAR_22 = VAR_17->rct_base + (VAR_18->index << 2);

 FUNC_0("%s: writing RCT at 0x%lx\n", VAR_17->name, VAR_22);
 FUNC_7(VAR_17, VAR_22, VAR_23);

 FUNC_3(&VAR_17->cmd_lock, VAR_21);
 FUNC_8(VAR_1 | (VAR_22 << 2), VAR_15);
 FUNC_6(VAR_17);
 FUNC_4(&VAR_17->cmd_lock, VAR_21);

 return 0;
}
