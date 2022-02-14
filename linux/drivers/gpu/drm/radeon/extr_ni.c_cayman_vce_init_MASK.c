
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; scalar_t__ has_vce; int dev; } ;
struct TYPE_2__ {int * ring_obj; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2)
{
 int VAR_3;


 if (!VAR_2->has_vce)
  return;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "failed VCE (%d) init.\n", VAR_3);






  VAR_2->has_vce = 0;
  return;
 }
 VAR_2->ring[VAR_0].ring_obj = ((void*)0);
 FUNC_1(VAR_2, &VAR_2->ring[VAR_0], 4096);
 VAR_2->ring[VAR_1].ring_obj = ((void*)0);
 FUNC_1(VAR_2, &VAR_2->ring[VAR_1], 4096);
}
