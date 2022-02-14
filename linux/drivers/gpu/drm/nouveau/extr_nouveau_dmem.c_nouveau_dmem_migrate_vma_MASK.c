
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct migrate_vma {unsigned long start; unsigned long end; int * src; int * dst; scalar_t__ cpages; struct vm_area_struct* vma; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned long,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned long,int,int ) ;
 int FUNC_3 (struct migrate_vma*) ;
 unsigned long FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct nouveau_drm*,struct migrate_vma*,int *) ;

int
FUNC_6(struct nouveau_drm *VAR_4,
    struct vm_area_struct *VAR_5,
    unsigned long VAR_6,
    unsigned long VAR_7)
{
 unsigned long VAR_8 = (VAR_7 - VAR_6) >> VAR_2;
 unsigned long VAR_9 = FUNC_4(VAR_3, VAR_8);
 dma_addr_t *VAR_10;
 struct migrate_vma VAR_11 = {
  .vma = VAR_5,
  .start = VAR_6,
 };
 unsigned long VAR_12, VAR_13;
 int VAR_14 = -VAR_0;

 VAR_11.src = FUNC_0(VAR_9, sizeof(VAR_11.src), VAR_1);
 if (!VAR_11.src)
  goto out;
 VAR_11.dst = FUNC_0(VAR_9, sizeof(VAR_11.dst), VAR_1);
 if (!VAR_11.dst)
  goto out_free_src;

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  goto out_free_dst;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13 += VAR_12) {
  VAR_12 = FUNC_4(VAR_3, VAR_8);
  VAR_11.end = VAR_6 + (VAR_12 << VAR_2);
  VAR_14 = FUNC_3(&VAR_11);
  if (VAR_14)
   goto out_free_dma;

  if (VAR_11.cpages)
   FUNC_5(VAR_4, &VAR_11, VAR_10);
  VAR_11.start = VAR_11.end;
 }

 VAR_14 = 0;
out_free_dma:
 FUNC_1(VAR_10);
out_free_dst:
 FUNC_1(VAR_11.dst);
out_free_src:
 FUNC_1(VAR_11.src);
out:
 return VAR_14;
}
