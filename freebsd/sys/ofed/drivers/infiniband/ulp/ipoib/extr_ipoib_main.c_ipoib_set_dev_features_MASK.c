
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipoib_dev_priv {int hca_caps; TYPE_1__* dev; int flags; } ;
struct ib_device_attr {int device_cap_flags; } ;
struct ib_device {struct ib_device_attr attrs; } ;
struct TYPE_2__ {int if_hwassist; int if_capabilities; int features; int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;

int
FUNC_1(struct ipoib_dev_priv *VAR_14, struct ib_device *VAR_15)
{
 struct ib_device_attr *VAR_16 = &VAR_15->attrs;

 VAR_14->hca_caps = VAR_16->device_cap_flags;

 VAR_14->dev->if_hwassist = 0;
 VAR_14->dev->if_capabilities = 0;


 if (VAR_14->hca_caps & VAR_4) {
  FUNC_0(VAR_12, &VAR_14->flags);
  VAR_14->dev->if_hwassist = VAR_0 | VAR_1 | VAR_3;
  VAR_14->dev->if_capabilities = VAR_6 | VAR_9;
 }
 VAR_14->dev->if_capabilities |=
     VAR_10 | VAR_11 | VAR_7;
 VAR_14->dev->if_capenable = VAR_14->dev->if_capabilities;

 return 0;
}
