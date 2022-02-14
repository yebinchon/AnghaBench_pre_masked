
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {scalar_t__ caching_state; int num_pages; int pages; } ;
struct ttm_mem_reg {int start; } ;
struct TYPE_2__ {int dma_address; } ;
struct radeon_ttm_tt {unsigned long offset; TYPE_1__ ttm; int rdev; scalar_t__ userptr; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int ,struct ttm_mem_reg*,struct ttm_tt*) ;
 int FUNC_2 (int ,unsigned long,int ,int ,int ,int) ;
 int FUNC_3 (struct ttm_tt*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct ttm_tt *VAR_6,
       struct ttm_mem_reg *VAR_7)
{
 struct radeon_ttm_tt *VAR_8 = (void*)VAR_6;
 uint32_t VAR_9 = VAR_3 | VAR_1 |
  VAR_4;
 int VAR_10;

 if (VAR_8->userptr) {
  FUNC_3(VAR_6);
  VAR_9 &= ~VAR_4;
 }

 VAR_8->offset = (unsigned long)(VAR_7->start << VAR_0);
 if (!VAR_6->num_pages) {
  FUNC_1(1, "nothing to bind %lu pages for mreg %p back %p!\n",
       VAR_6->num_pages, VAR_7, VAR_6);
 }
 if (VAR_6->caching_state == VAR_5)
  VAR_9 |= VAR_2;
 VAR_10 = FUNC_2(VAR_8->rdev, VAR_8->offset, VAR_6->num_pages,
        VAR_6->pages, VAR_8->ttm.dma_address, VAR_9);
 if (VAR_10) {
  FUNC_0("failed to bind %lu pages at 0x%08X\n",
     VAR_6->num_pages, (unsigned)VAR_8->offset);
  return VAR_10;
 }
 return 0;
}
