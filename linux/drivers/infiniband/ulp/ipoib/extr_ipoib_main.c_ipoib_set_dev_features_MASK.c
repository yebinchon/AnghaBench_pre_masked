
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipoib_dev_priv {int hca_caps; TYPE_3__* dev; TYPE_2__* ca; } ;
struct TYPE_6__ {int hw_features; int features; } ;
struct TYPE_4__ {int device_cap_flags; } ;
struct TYPE_5__ {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ipoib_dev_priv *VAR_5)
{
 VAR_5->hca_caps = VAR_5->ca->attrs.device_cap_flags;

 if (VAR_5->hca_caps & VAR_0) {
  VAR_5->dev->hw_features |= VAR_2 | VAR_3;

  if (VAR_5->hca_caps & VAR_1)
   VAR_5->dev->hw_features |= VAR_4;

  VAR_5->dev->features |= VAR_5->dev->hw_features;
 }
}
