
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; } ;
struct TYPE_4__ {TYPE_1__ cik; } ;
struct radeon_device {TYPE_2__ config; struct radeon_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int VAR_12 ;
 int* VAR_13 ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_ring*,int) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_14)
{
 struct radeon_ring *VAR_15 = &VAR_14->ring[VAR_11];
 int VAR_16, VAR_17;


 FUNC_3(VAR_3, VAR_14->config.cik.max_hw_contexts - 1);
 FUNC_3(VAR_2, 0);
 FUNC_3(VAR_1, 1);

 FUNC_4(VAR_14, 1);

 VAR_16 = FUNC_5(VAR_14, VAR_15, VAR_12 + 17);
 if (VAR_16) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_16);
  return VAR_16;
 }


 FUNC_7(VAR_15, FUNC_1(VAR_9, 2));
 FUNC_7(VAR_15, FUNC_2(VAR_0));
 FUNC_7(VAR_15, 0x8000);
 FUNC_7(VAR_15, 0x8000);


 FUNC_7(VAR_15, FUNC_1(VAR_7, 0));
 FUNC_7(VAR_15, VAR_6);

 FUNC_7(VAR_15, FUNC_1(VAR_5, 1));
 FUNC_7(VAR_15, 0x80000000);
 FUNC_7(VAR_15, 0x80000000);

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
  FUNC_7(VAR_15, VAR_13[VAR_17]);

 FUNC_7(VAR_15, FUNC_1(VAR_7, 0));
 FUNC_7(VAR_15, VAR_8);


 FUNC_7(VAR_15, FUNC_1(VAR_4, 0));
 FUNC_7(VAR_15, 0);

 FUNC_7(VAR_15, FUNC_1(VAR_10, 2));
 FUNC_7(VAR_15, 0x00000316);
 FUNC_7(VAR_15, 0x0000000e);
 FUNC_7(VAR_15, 0x00000010);

 FUNC_6(VAR_14, VAR_15, 0);

 return 0;
}
