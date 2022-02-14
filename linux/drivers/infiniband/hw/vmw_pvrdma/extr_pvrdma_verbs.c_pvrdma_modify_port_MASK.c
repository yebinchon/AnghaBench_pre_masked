
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pvrdma_dev {int ib_active; int port_mutex; int port_cap_mask; TYPE_1__* pdev; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_port_attr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pvrdma_dev* FUNC_4 (struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_2, u8 VAR_3, int VAR_4,
         struct ib_port_modify *VAR_5)
{
 struct ib_port_attr VAR_6;
 struct pvrdma_dev *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 if (VAR_4 & ~VAR_1) {
  FUNC_0(&VAR_7->pdev->dev,
    "unsupported port modify mask %#x\n", VAR_4);
  return -VAR_0;
 }

 FUNC_2(&VAR_7->port_mutex);
 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_6);
 if (VAR_8)
  goto out;

 VAR_7->port_cap_mask |= VAR_5->set_port_cap_mask;
 VAR_7->port_cap_mask &= ~VAR_5->clr_port_cap_mask;

 if (VAR_4 & VAR_1)
  VAR_7->ib_active = 0;

out:
 FUNC_3(&VAR_7->port_mutex);
 return VAR_8;
}
