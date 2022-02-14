
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
struct gf100_gr {int* tile; int tpc_total; int screen_tile_row_offset; TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

void
FUNC_1(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2[6] = {}, VAR_3[2] = {};
 u8 VAR_4, VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
  VAR_2[VAR_6 / 6] |= (VAR_0->tile[VAR_6] & 0x07) << ((VAR_6 % 6) * 5);


 VAR_4 = 0;
 VAR_5 = VAR_0->tpc_total;
 while (!(VAR_5 & (1 << 4))) {
  VAR_5 <<= 1;
  VAR_4++;
 }

 VAR_3[0] = (VAR_5 << 16);
 VAR_3[0] |= (VAR_4 << 21);
 VAR_3[0] |= (((1 << (0 + 5)) % VAR_5) << 24);
 for (VAR_6 = 1; VAR_6 < 7; VAR_6++)
  VAR_3[1] |= ((1 << (VAR_6 + 5)) % VAR_5) << ((VAR_6 - 1) * 5);


 FUNC_0(VAR_1, 0x418bb8, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_0(VAR_1, 0x418b08 + (VAR_6 * 4), VAR_2[VAR_6]);


 FUNC_0(VAR_1, 0x41bfd0, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset | VAR_3[0]);
 FUNC_0(VAR_1, 0x41bfe4, VAR_3[1]);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_0(VAR_1, 0x41bf00 + (VAR_6 * 4), VAR_2[VAR_6]);


 FUNC_0(VAR_1, 0x4078bc, (VAR_0->tpc_total << 8) |
         VAR_0->screen_tile_row_offset);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_0(VAR_1, 0x40780c + (VAR_6 * 4), VAR_2[VAR_6]);
}
