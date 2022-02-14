
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; int dev; int has_uvd; } ;
struct TYPE_2__ {scalar_t__ ring_size; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,size_t) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->has_uvd)
  return;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed UVD resume (%d).\n", VAR_2);
  goto error;
 }
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed UVD 4.2 resume (%d).\n", VAR_2);
  goto error;
 }
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed initializing UVD fences (%d).\n", VAR_2);
  goto error;
 }
 return;

error:
 VAR_1->ring[VAR_0].ring_size = 0;
}
