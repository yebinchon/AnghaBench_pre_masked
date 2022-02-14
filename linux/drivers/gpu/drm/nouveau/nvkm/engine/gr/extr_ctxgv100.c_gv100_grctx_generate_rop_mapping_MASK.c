
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {int tpc_total; int screen_tile_row_offset; int* tile; TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2;
 int VAR_3, VAR_4;


 FUNC_0(VAR_1, 0x418bb8, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset);
 for (VAR_3 = 0; VAR_3 < 11; VAR_3++) {
  for (VAR_2 = 0, VAR_4 = 0; VAR_4 < 6; VAR_4++)
   VAR_2 |= (VAR_0->tile[VAR_3 * 6 + VAR_4] & 0x1f) << (VAR_4 * 5);
  FUNC_0(VAR_1, 0x418b08 + (VAR_3 * 4), VAR_2);
  FUNC_0(VAR_1, 0x41bf00 + (VAR_3 * 4), VAR_2);
  FUNC_0(VAR_1, 0x40780c + (VAR_3 * 4), VAR_2);
 }


 FUNC_0(VAR_1, 0x41bfd0, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset);
 for (VAR_3 = 0, VAR_4 = 1; VAR_3 < 5; VAR_3++, VAR_4 += 4) {
  u8 VAR_5 = (1 << (VAR_4 + 0)) % VAR_0->tpc_total;
  u8 VAR_6 = (1 << (VAR_4 + 1)) % VAR_0->tpc_total;
  u8 VAR_7 = (1 << (VAR_4 + 2)) % VAR_0->tpc_total;
  u8 VAR_8 = (1 << (VAR_4 + 3)) % VAR_0->tpc_total;
  FUNC_0(VAR_1, 0x41bfb0 + (VAR_3 * 4), (VAR_8 << 24) |
            (VAR_7 << 16) |
            (VAR_6 << 8) |
             VAR_5);
 }


 FUNC_0(VAR_1, 0x4078bc, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset);
}
