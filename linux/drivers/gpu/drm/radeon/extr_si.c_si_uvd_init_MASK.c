
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; scalar_t__ has_uvd; int dev; } ;
struct TYPE_2__ {int * ring_obj; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->has_uvd)
  return;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "failed UVD (%d) init.\n", VAR_2);






  VAR_1->has_uvd = 0;
  return;
 }
 VAR_1->ring[VAR_0].ring_obj = ((void*)0);
 FUNC_1(VAR_1, &VAR_1->ring[VAR_0], 4096);
}
