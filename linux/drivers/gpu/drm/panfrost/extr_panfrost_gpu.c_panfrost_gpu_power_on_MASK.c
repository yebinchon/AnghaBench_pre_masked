
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ l2_present; scalar_t__ stack_present; scalar_t__ shader_present; scalar_t__ tiler_present; } ;
struct panfrost_device {int dev; TYPE_1__ features; scalar_t__ iomem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct panfrost_device*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,int) ;

void FUNC_3(struct panfrost_device *VAR_8)
{
 int VAR_9;
 u32 VAR_10;


 FUNC_1(VAR_8, VAR_0, VAR_8->features.l2_present);
 VAR_9 = FUNC_2(VAR_8->iomem + VAR_1,
  VAR_10, VAR_10 == VAR_8->features.l2_present, 100, 1000);

 FUNC_1(VAR_8, VAR_4, VAR_8->features.stack_present);
 VAR_9 |= FUNC_2(VAR_8->iomem + VAR_5,
  VAR_10, VAR_10 == VAR_8->features.stack_present, 100, 1000);

 FUNC_1(VAR_8, VAR_2, VAR_8->features.shader_present);
 VAR_9 |= FUNC_2(VAR_8->iomem + VAR_3,
  VAR_10, VAR_10 == VAR_8->features.shader_present, 100, 1000);

 FUNC_1(VAR_8, VAR_6, VAR_8->features.tiler_present);
 VAR_9 |= FUNC_2(VAR_8->iomem + VAR_7,
  VAR_10, VAR_10 == VAR_8->features.tiler_present, 100, 1000);

 if (VAR_9)
  FUNC_0(VAR_8->dev, "error powering up gpu");
}
