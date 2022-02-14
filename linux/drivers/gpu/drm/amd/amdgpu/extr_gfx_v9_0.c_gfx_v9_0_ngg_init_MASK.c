
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int init; int * buf; scalar_t__ gds_reserve_addr; scalar_t__ gds_reserve_size; } ;
struct TYPE_6__ {TYPE_2__ ngg; } ;
struct TYPE_4__ {int gds_size; } ;
struct amdgpu_device {TYPE_3__ gfx; int dev; TYPE_1__ gds; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct amdgpu_device*,int *,scalar_t__,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_12)
{
 int VAR_13;

 if (!VAR_6 || VAR_12->gfx.ngg.init == 1)
  return 0;


 VAR_12->gfx.ngg.gds_reserve_size = FUNC_0(5 * 4, 0x40);
 VAR_12->gds.gds_size -= VAR_12->gfx.ngg.gds_reserve_size;
 VAR_12->gfx.ngg.gds_reserve_addr = FUNC_1(VAR_0, 0, VAR_10);
 VAR_12->gfx.ngg.gds_reserve_addr += FUNC_1(VAR_0, 0, VAR_11);


 VAR_13 = FUNC_3(VAR_12, &VAR_12->gfx.ngg.buf[VAR_4],
        VAR_9,
        64 * 1024);
 if (VAR_13) {
  FUNC_2(VAR_12->dev, "Failed to create Primitive Buffer\n");
  goto err;
 }


 VAR_13 = FUNC_3(VAR_12, &VAR_12->gfx.ngg.buf[VAR_3],
        VAR_8,
        256 * 1024);
 if (VAR_13) {
  FUNC_2(VAR_12->dev, "Failed to create Position Buffer\n");
  goto err;
 }


 VAR_13 = FUNC_3(VAR_12, &VAR_12->gfx.ngg.buf[VAR_1],
        VAR_5,
        256);
 if (VAR_13) {
  FUNC_2(VAR_12->dev, "Failed to create Control Sideband Buffer\n");
  goto err;
 }


 if (VAR_7 <= 0)
  goto out;

 VAR_13 = FUNC_3(VAR_12, &VAR_12->gfx.ngg.buf[VAR_2],
        VAR_7,
        512 * 1024);
 if (VAR_13) {
  FUNC_2(VAR_12->dev, "Failed to create Parameter Cache\n");
  goto err;
 }

out:
 VAR_12->gfx.ngg.init = 1;
 return 0;
err:
 FUNC_4(VAR_12);
 return VAR_13;
}
