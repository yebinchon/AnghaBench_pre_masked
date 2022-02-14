
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ltc {int zbc_min; int zbc_max; } ;
struct TYPE_9__ {TYPE_1__* device; } ;
struct TYPE_10__ {TYPE_2__ subdev; } ;
struct TYPE_11__ {TYPE_3__ engine; } ;
struct gf100_gr {TYPE_7__* func; TYPE_5__* zbc_color; TYPE_4__ base; } ;
struct TYPE_14__ {TYPE_6__* zbc; } ;
struct TYPE_13__ {int (* clear_stencil ) (struct gf100_gr*,int) ;int (* clear_depth ) (struct gf100_gr*,int) ;int (* clear_color ) (struct gf100_gr*,int) ;int (* stencil_get ) (struct gf100_gr*,int,int,int) ;} ;
struct TYPE_12__ {int format; } ;
struct TYPE_8__ {struct nvkm_ltc* ltc; } ;


 int FUNC_0 (struct gf100_gr*,int,int const*,int const*) ;
 int FUNC_1 (struct gf100_gr*,int,int,int) ;
 int FUNC_2 (struct gf100_gr*,int,int,int) ;
 int FUNC_3 (struct gf100_gr*,int,int,int) ;
 int FUNC_4 (struct gf100_gr*,int,int,int) ;
 int FUNC_5 (struct gf100_gr*,int) ;
 int FUNC_6 (struct gf100_gr*,int) ;
 int FUNC_7 (struct gf100_gr*,int) ;

void
FUNC_8(struct gf100_gr *VAR_0)
{
 const u32 VAR_1[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000,
         0x00000000, 0x00000000, 0x00000000, 0x00000000 };
 const u32 VAR_2[] = { 0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000,
         0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff };
 const u32 VAR_3[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000,
         0x00000000, 0x00000000, 0x00000000, 0x00000000 };
 const u32 VAR_4[] = { 0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000,
         0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000 };
 struct nvkm_ltc *VAR_5 = VAR_0->base.engine.subdev.device->ltc;
 int VAR_6, VAR_7 = VAR_5->zbc_min, VAR_8 = VAR_5->zbc_min, VAR_9 = VAR_5->zbc_min;

 if (!VAR_0->zbc_color[0].format) {
  FUNC_0(VAR_0, 1, & VAR_1[0], &VAR_1[4]); VAR_7++;
  FUNC_0(VAR_0, 2, & VAR_2[0], &VAR_2[4]); VAR_7++;
  FUNC_0(VAR_0, 4, &VAR_3[0], &VAR_3[4]); VAR_7++;
  FUNC_0(VAR_0, 4, &VAR_4[0], &VAR_4[4]); VAR_7++;
  FUNC_1(VAR_0, 1, 0x00000000, 0x00000000); VAR_8++;
  FUNC_1(VAR_0, 1, 0x3f800000, 0x3f800000); VAR_8++;
  if (VAR_0->func->zbc->stencil_get) {
   VAR_0->func->zbc->stencil_get(VAR_0, 1, 0x00, 0x00); VAR_9++;
   VAR_0->func->zbc->stencil_get(VAR_0, 1, 0x01, 0x01); VAR_9++;
   VAR_0->func->zbc->stencil_get(VAR_0, 1, 0xff, 0xff); VAR_9++;
  }
 }

 for (VAR_6 = VAR_7; VAR_6 <= VAR_5->zbc_max; VAR_6++)
  VAR_0->func->zbc->clear_color(VAR_0, VAR_6);
 for (VAR_6 = VAR_8; VAR_6 <= VAR_5->zbc_max; VAR_6++)
  VAR_0->func->zbc->clear_depth(VAR_0, VAR_6);

 if (VAR_0->func->zbc->clear_stencil) {
  for (VAR_6 = VAR_9; VAR_6 <= VAR_5->zbc_max; VAR_6++)
   VAR_0->func->zbc->clear_stencil(VAR_0, VAR_6);
 }
}
