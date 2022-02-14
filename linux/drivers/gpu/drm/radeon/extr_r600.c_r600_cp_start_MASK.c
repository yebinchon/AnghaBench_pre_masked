
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct TYPE_5__ {int max_hw_contexts; } ;
struct TYPE_4__ {int max_hw_contexts; } ;
struct TYPE_6__ {TYPE_2__ r600; TYPE_1__ rv770; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ config; struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_ring*,int) ;

int FUNC_7(struct radeon_device *VAR_4)
{
 struct radeon_ring *VAR_5 = &VAR_4->ring[VAR_2];
 int VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_4(VAR_4, VAR_5, 7);
 if (VAR_6) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_6);
  return VAR_6;
 }
 FUNC_6(VAR_5, FUNC_1(VAR_1, 5));
 FUNC_6(VAR_5, 0x1);
 if (VAR_4->family >= VAR_0) {
  FUNC_6(VAR_5, 0x0);
  FUNC_6(VAR_5, VAR_4->config.rv770.max_hw_contexts - 1);
 } else {
  FUNC_6(VAR_5, 0x3);
  FUNC_6(VAR_5, VAR_4->config.r600.max_hw_contexts - 1);
 }
 FUNC_6(VAR_5, FUNC_2(1));
 FUNC_6(VAR_5, 0);
 FUNC_6(VAR_5, 0);
 FUNC_5(VAR_4, VAR_5, 0);

 VAR_7 = 0xff;
 FUNC_3(VAR_3, VAR_7);
 return 0;
}
