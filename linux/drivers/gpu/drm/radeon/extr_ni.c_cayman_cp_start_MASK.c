
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; } ;
struct TYPE_4__ {TYPE_1__ cayman; } ;
struct radeon_device {TYPE_2__ config; struct radeon_ring* ring; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (struct radeon_device*,int) ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_ring*,int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_8->ring[VAR_5];
 int VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_8, VAR_9, 7);
 if (VAR_10) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_10);
  return VAR_10;
 }
 FUNC_6(VAR_9, FUNC_1(VAR_1, 5));
 FUNC_6(VAR_9, 0x1);
 FUNC_6(VAR_9, 0x0);
 FUNC_6(VAR_9, VAR_8->config.cayman.max_hw_contexts - 1);
 FUNC_6(VAR_9, FUNC_2(1));
 FUNC_6(VAR_9, 0);
 FUNC_6(VAR_9, 0);
 FUNC_5(VAR_8, VAR_9, 0);

 FUNC_3(VAR_8, 1);

 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_6 + 19);
 if (VAR_10) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_10);
  return VAR_10;
 }


 FUNC_6(VAR_9, FUNC_1(VAR_3, 0));
 FUNC_6(VAR_9, VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  FUNC_6(VAR_9, VAR_7[VAR_11]);

 FUNC_6(VAR_9, FUNC_1(VAR_3, 0));
 FUNC_6(VAR_9, VAR_4);


 FUNC_6(VAR_9, FUNC_1(VAR_0, 0));
 FUNC_6(VAR_9, 0);


 FUNC_6(VAR_9, 0xc0026f00);
 FUNC_6(VAR_9, 0x00000000);
 FUNC_6(VAR_9, 0x00000000);
 FUNC_6(VAR_9, 0x00000000);


 FUNC_6(VAR_9, 0xc0036f00);
 FUNC_6(VAR_9, 0x00000bc4);
 FUNC_6(VAR_9, 0xffffffff);
 FUNC_6(VAR_9, 0xffffffff);
 FUNC_6(VAR_9, 0xffffffff);

 FUNC_6(VAR_9, 0xc0026900);
 FUNC_6(VAR_9, 0x00000316);
 FUNC_6(VAR_9, 0x0000000e);
 FUNC_6(VAR_9, 0x00000010);

 FUNC_5(VAR_8, VAR_9, 0);



 return 0;
}
