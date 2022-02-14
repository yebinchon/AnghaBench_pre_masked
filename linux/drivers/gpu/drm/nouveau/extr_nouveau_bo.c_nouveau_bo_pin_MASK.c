
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int mem_type; int size; } ;
struct ttm_buffer_object {TYPE_5__ mem; int bdev; } ;
struct TYPE_9__ {int gart_available; int vram_available; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_4__ gem; TYPE_3__ client; } ;
struct nouveau_bo {int contig; scalar_t__ pin_refcnt; struct ttm_buffer_object bo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,struct ttm_buffer_object*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;


 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_bo*,int,int ) ;
 int FUNC_3 (struct nouveau_bo*,int,int) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_5 (struct ttm_buffer_object*) ;

int
FUNC_6(struct nouveau_bo *VAR_4, uint32_t VAR_5, bool VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_1(VAR_4->bo.bdev);
 struct ttm_buffer_object *VAR_8 = &VAR_4->bo;
 bool VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8, 0, 0, ((void*)0));
 if (VAR_11)
  return VAR_11;

 if (VAR_7->client.device.info.family >= VAR_1 &&
     VAR_5 == VAR_3 && VAR_6) {
  if (!VAR_4->contig) {
   VAR_4->contig = 1;
   VAR_9 = 1;
   VAR_10 = 1;
  }
 }

 if (VAR_4->pin_refcnt) {
  if (!(VAR_5 & (1 << VAR_8->mem.mem_type)) || VAR_10) {
   FUNC_0(VAR_7, "bo %p pinned elsewhere: "
          "0x%08x vs 0x%08x\n", VAR_8,
     1 << VAR_8->mem.mem_type, VAR_5);
   VAR_11 = -VAR_0;
  }
  VAR_4->pin_refcnt++;
  goto out;
 }

 if (VAR_10) {
  FUNC_2(VAR_4, VAR_2, 0);
  VAR_11 = FUNC_3(VAR_4, 0, 0);
  if (VAR_11)
   goto out;
 }

 VAR_4->pin_refcnt++;
 FUNC_2(VAR_4, VAR_5, 0);





 VAR_4->pin_refcnt--;
 VAR_11 = FUNC_3(VAR_4, 0, 0);
 if (VAR_11)
  goto out;
 VAR_4->pin_refcnt++;

 switch (VAR_8->mem.mem_type) {
 case 128:
  VAR_7->gem.vram_available -= VAR_8->mem.size;
  break;
 case 129:
  VAR_7->gem.gart_available -= VAR_8->mem.size;
  break;
 default:
  break;
 }

out:
 if (VAR_9 && VAR_11)
  VAR_4->contig = 0;
 FUNC_5(VAR_8);
 return VAR_11;
}
