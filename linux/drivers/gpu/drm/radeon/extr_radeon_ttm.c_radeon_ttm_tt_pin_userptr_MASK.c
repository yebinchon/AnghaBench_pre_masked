
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct vm_area_struct {unsigned long vm_end; scalar_t__ vm_file; } ;
struct ttm_tt {unsigned int num_pages; struct page** pages; TYPE_2__* sg; int bdev; } ;
struct TYPE_6__ {int dma_address; } ;
struct radeon_ttm_tt {int userflags; scalar_t__ usermm; unsigned int userptr; TYPE_1__ ttm; } ;
struct radeon_device {int dev; } ;
struct page {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {scalar_t__ mm; } ;
struct TYPE_7__ {unsigned int nents; int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 unsigned int FUNC_0 (int ,int ,unsigned int,int) ;
 int FUNC_1 (TYPE_2__*,struct page**,int ,int) ;
 struct vm_area_struct* FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,int ,struct page**,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 struct radeon_device* FUNC_5 (int ) ;
 int FUNC_6 (struct page**,unsigned int) ;
 int FUNC_7 (TYPE_2__*,struct page**,unsigned int,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct ttm_tt *VAR_11)
{
 struct radeon_device *VAR_12 = FUNC_5(VAR_11->bdev);
 struct radeon_ttm_tt *VAR_13 = (void *)VAR_11;
 unsigned VAR_14 = 0, VAR_15;
 int VAR_16;

 int VAR_17 = !(VAR_13->userflags & VAR_9);
 enum dma_data_direction VAR_18 = VAR_17 ?
  VAR_0 : VAR_1;

 if (VAR_10->mm != VAR_13->usermm)
  return -VAR_3;

 if (VAR_13->userflags & VAR_8) {


  unsigned long VAR_19 = VAR_13->userptr + VAR_11->num_pages * VAR_7;
  struct vm_area_struct *VAR_20;
  VAR_20 = FUNC_2(VAR_13->usermm, VAR_13->userptr);
  if (!VAR_20 || VAR_20->vm_file || VAR_20->vm_end < VAR_19)
   return -VAR_3;
 }

 do {
  unsigned VAR_21 = VAR_11->num_pages - VAR_14;
  uint64_t VAR_22 = VAR_13->userptr + VAR_14 * VAR_7;
  struct page **VAR_23 = VAR_11->pages + VAR_14;

  VAR_16 = FUNC_3(VAR_22, VAR_21, VAR_17 ? VAR_4 : 0,
       VAR_23, ((void*)0));
  if (VAR_16 < 0)
   goto release_pages;

  VAR_14 += VAR_16;

 } while (VAR_14 < VAR_11->num_pages);

 VAR_16 = FUNC_7(VAR_11->sg, VAR_11->pages, VAR_11->num_pages, 0,
          VAR_11->num_pages << VAR_6,
          VAR_5);
 if (VAR_16)
  goto release_sg;

 VAR_16 = -VAR_2;
 VAR_15 = FUNC_0(VAR_12->dev, VAR_11->sg->sgl, VAR_11->sg->nents, VAR_18);
 if (VAR_15 != VAR_11->sg->nents)
  goto release_sg;

 FUNC_1(VAR_11->sg, VAR_11->pages,
      VAR_13->ttm.dma_address, VAR_11->num_pages);

 return 0;

release_sg:
 FUNC_4(VAR_11->sg);

release_pages:
 FUNC_6(VAR_11->pages, VAR_14);
 return VAR_16;
}
