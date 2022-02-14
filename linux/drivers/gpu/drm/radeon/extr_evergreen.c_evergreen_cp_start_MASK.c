
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; } ;
struct TYPE_4__ {TYPE_1__ evergreen; } ;
struct radeon_device {TYPE_2__ config; struct radeon_ring* ring; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_ring*,int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_9)
{
 struct radeon_ring *VAR_10 = &VAR_9->ring[VAR_6];
 int VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_11 = FUNC_4(VAR_9, VAR_10, 7);
 if (VAR_11) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_11);
  return VAR_11;
 }
 FUNC_6(VAR_10, FUNC_1(VAR_2, 5));
 FUNC_6(VAR_10, 0x1);
 FUNC_6(VAR_10, 0x0);
 FUNC_6(VAR_10, VAR_9->config.evergreen.max_hw_contexts - 1);
 FUNC_6(VAR_10, FUNC_2(1));
 FUNC_6(VAR_10, 0);
 FUNC_6(VAR_10, 0);
 FUNC_5(VAR_9, VAR_10, 0);

 VAR_13 = 0xff;
 FUNC_3(VAR_0, VAR_13);

 VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_7 + 19);
 if (VAR_11) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_11);
  return VAR_11;
 }


 FUNC_6(VAR_10, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_10, VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_6(VAR_10, VAR_8[VAR_12]);

 FUNC_6(VAR_10, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_10, VAR_5);


 FUNC_6(VAR_10, FUNC_1(VAR_1, 0));
 FUNC_6(VAR_10, 0);


 FUNC_6(VAR_10, 0xc0026f00);
 FUNC_6(VAR_10, 0x00000000);
 FUNC_6(VAR_10, 0x00000000);
 FUNC_6(VAR_10, 0x00000000);


 FUNC_6(VAR_10, 0xc0036f00);
 FUNC_6(VAR_10, 0x00000bc4);
 FUNC_6(VAR_10, 0xffffffff);
 FUNC_6(VAR_10, 0xffffffff);
 FUNC_6(VAR_10, 0xffffffff);

 FUNC_6(VAR_10, 0xc0026900);
 FUNC_6(VAR_10, 0x00000316);
 FUNC_6(VAR_10, 0x0000000e);
 FUNC_6(VAR_10, 0x00000010);

 FUNC_5(VAR_9, VAR_10, 0);

 return 0;
}
