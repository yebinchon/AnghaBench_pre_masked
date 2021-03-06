
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
struct TYPE_13__ {int (* clear_color ) (struct gf100_gr*,int) ;} ;
struct TYPE_12__ {int format; int l2; int ds; } ;
struct TYPE_8__ {struct nvkm_ltc* ltc; } ;


 int EINVAL ;
 int ENOSPC ;
 int WARN_ON (int) ;
 scalar_t__ memcmp (int ,int const*,int) ;
 int memcpy (int ,int const*,int) ;
 int nvkm_ltc_zbc_color_get (struct nvkm_ltc*,int,int const*) ;
 int stub1 (struct gf100_gr*,int) ;

__attribute__((used)) static int
gf100_gr_zbc_color_get(struct gf100_gr *gr, int format,
         const u32 ds[4], const u32 l2[4])
{
 struct nvkm_ltc *ltc = gr->base.engine.subdev.device->ltc;
 int zbc = -ENOSPC, i;

 for (i = ltc->zbc_min; i <= ltc->zbc_max; i++) {
  if (gr->zbc_color[i].format) {
   if (gr->zbc_color[i].format != format)
    continue;
   if (memcmp(gr->zbc_color[i].ds, ds, sizeof(
       gr->zbc_color[i].ds)))
    continue;
   if (memcmp(gr->zbc_color[i].l2, l2, sizeof(
       gr->zbc_color[i].l2))) {
    WARN_ON(1);
    return -EINVAL;
   }
   return i;
  } else {
   zbc = (zbc < 0) ? i : zbc;
  }
 }

 if (zbc < 0)
  return zbc;

 memcpy(gr->zbc_color[zbc].ds, ds, sizeof(gr->zbc_color[zbc].ds));
 memcpy(gr->zbc_color[zbc].l2, l2, sizeof(gr->zbc_color[zbc].l2));
 gr->zbc_color[zbc].format = format;
 nvkm_ltc_zbc_color_get(ltc, zbc, l2);
 gr->func->zbc->clear_color(gr, zbc);
 return zbc;
}
