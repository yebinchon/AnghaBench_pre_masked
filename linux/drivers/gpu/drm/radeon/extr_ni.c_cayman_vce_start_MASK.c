
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; int dev; int has_vce; } ;
struct TYPE_2__ {scalar_t__ ring_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,size_t) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2->has_vce)
  return;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "failed VCE resume (%d).\n", VAR_3);
  goto error;
 }
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "failed VCE resume (%d).\n", VAR_3);
  goto error;
 }
 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "failed initializing VCE1 fences (%d).\n", VAR_3);
  goto error;
 }
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "failed initializing VCE2 fences (%d).\n", VAR_3);
  goto error;
 }
 return;

error:
 VAR_2->ring[VAR_0].ring_size = 0;
 VAR_2->ring[VAR_1].ring_size = 0;
}
