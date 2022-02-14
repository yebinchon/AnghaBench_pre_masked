
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct ttm_tt {size_t num_pages; int * pages; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; } ;
struct TYPE_2__ {int * dma_address; } ;
struct amdgpu_ttm_tt {scalar_t__ offset; TYPE_1__ ttm; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_2 ;
 int FUNC_1 (char*,size_t,scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_2 (struct amdgpu_device*,scalar_t__,size_t,int *,int *,size_t) ;
 struct amdgpu_bo* FUNC_3 (struct ttm_buffer_object*) ;

int FUNC_4(struct amdgpu_device *VAR_4,
    struct ttm_buffer_object *VAR_5,
    uint64_t VAR_6)
{
 struct amdgpu_bo *VAR_7 = FUNC_3(VAR_5);
 struct ttm_tt *VAR_8 = VAR_5->ttm;
 struct amdgpu_ttm_tt *VAR_9 = (void *)VAR_8;
 int VAR_10;

 if (VAR_7->flags & VAR_0) {
  uint64_t VAR_11 = 1;

  VAR_10 = FUNC_2(VAR_4, VAR_9->offset, VAR_11,
    VAR_8->pages, VAR_9->ttm.dma_address, VAR_6);
  if (VAR_10)
   goto gart_bind_fail;


  VAR_6 &= ~VAR_2;
  VAR_6 |= FUNC_0(VAR_1);

  VAR_10 = FUNC_2(VAR_4,
    VAR_9->offset + (VAR_11 << VAR_3),
    VAR_8->num_pages - VAR_11,
    &VAR_8->pages[VAR_11],
    &(VAR_9->ttm.dma_address[VAR_11]), VAR_6);
 } else {
  VAR_10 = FUNC_2(VAR_4, VAR_9->offset, VAR_8->num_pages,
         VAR_8->pages, VAR_9->ttm.dma_address, VAR_6);
 }

gart_bind_fail:
 if (VAR_10)
  FUNC_1("failed to bind %lu pages at 0x%08llX\n",
     VAR_8->num_pages, VAR_9->offset);

 return VAR_10;
}
