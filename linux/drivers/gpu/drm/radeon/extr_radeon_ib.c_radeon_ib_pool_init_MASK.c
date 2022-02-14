
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int ib_pool_ready; scalar_t__ family; int dev; int ring_tmp_bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int *,int,int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int *) ;

int FUNC_4(struct radeon_device *VAR_5)
{
 int VAR_6;

 if (VAR_5->ib_pool_ready) {
  return 0;
 }

 if (VAR_5->family >= VAR_0) {
  VAR_6 = FUNC_2(VAR_5, &VAR_5->ring_tmp_bo,
           VAR_4*64*1024,
           VAR_3,
           VAR_1,
           VAR_2);
 } else {



  VAR_6 = FUNC_2(VAR_5, &VAR_5->ring_tmp_bo,
           VAR_4*64*1024,
           VAR_3,
           VAR_1, 0);
 }
 if (VAR_6) {
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5, &VAR_5->ring_tmp_bo);
 if (VAR_6) {
  return VAR_6;
 }

 VAR_5->ib_pool_ready = 1;
 if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_5->dev, "failed to register debugfs file for SA\n");
 }
 return 0;
}
