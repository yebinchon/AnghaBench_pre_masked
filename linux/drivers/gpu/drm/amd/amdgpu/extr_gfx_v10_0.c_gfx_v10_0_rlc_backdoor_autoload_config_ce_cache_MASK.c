
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ rlc_autoload_gpu_addr; } ;
struct TYPE_5__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; int dev; } ;
struct TYPE_6__ {scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_10)
{
 uint32_t VAR_11 = 50000;
 uint32_t VAR_12;
 int VAR_13;
 uint64_t VAR_14;


 VAR_12 = FUNC_2(VAR_3, 0, VAR_8);
 VAR_12 = FUNC_1(VAR_12, VAR_0, VAR_4, 1);
 FUNC_3(VAR_3, 0, VAR_8, VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_12 = FUNC_2(VAR_3, 0, VAR_8);
  if (1 == FUNC_0(VAR_12, VAR_0,
   VAR_5))
   break;
  FUNC_6(1);
 }

 if (VAR_13 >= VAR_11) {
  FUNC_4(VAR_10->dev, "failed to invalidate instruction cache\n");
  return -VAR_1;
 }


 VAR_14 = VAR_10->gfx.rlc.rlc_autoload_gpu_addr +
  VAR_9[VAR_2].offset;
 FUNC_3(VAR_3, 0, VAR_7,
   FUNC_5(VAR_14) & 0xFFFFF000);
 FUNC_3(VAR_3, 0, VAR_6,
   FUNC_7(VAR_14));

 return 0;
}
