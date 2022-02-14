
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hdp_cntl; } ;
struct TYPE_6__ {TYPE_2__ r300; } ;
struct TYPE_4__ {int installed; } ;
struct radeon_device {int flags; scalar_t__ family; int dev; TYPE_3__ config; TYPE_1__ irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int ) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_15(struct radeon_device *VAR_7)
{
 int VAR_8;


 FUNC_6(VAR_7);

 FUNC_9(VAR_7);

 FUNC_7(VAR_7);

 FUNC_8(VAR_7);


 if (VAR_7->flags & VAR_5) {
  VAR_8 = FUNC_14(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_7->family == VAR_0 ||
     VAR_7->family == VAR_1 ||
     VAR_7->family == VAR_2)
  FUNC_3(VAR_7);

 if (VAR_7->flags & VAR_4) {
  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8)
   return VAR_8;
 }


 VAR_8 = FUNC_13(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "failed initializing CP fences (%d).\n", VAR_8);
  return VAR_8;
 }


 if (!VAR_7->irq.installed) {
  VAR_8 = FUNC_12(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_4(VAR_7);
 VAR_7->config.r300.hdp_cntl = FUNC_0(VAR_3);

 VAR_8 = FUNC_2(VAR_7, 1024 * 1024);
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "failed initializing CP (%d).\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_11(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "IB initialization failed (%d).\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
