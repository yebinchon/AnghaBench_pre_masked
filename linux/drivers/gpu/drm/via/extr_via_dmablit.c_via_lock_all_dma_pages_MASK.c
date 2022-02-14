
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_5__ {unsigned long num_pages; scalar_t__ direction; void* state; int * pages; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
struct TYPE_6__ {int mem_addr; int num_lines; int mem_stride; } ;
typedef TYPE_2__ drm_via_dmablit_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long) ;
 void* VAR_4 ;
 int FUNC_3 (unsigned long,unsigned long,int ,int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(drm_via_sg_info_t *VAR_5, drm_via_dmablit_t *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = FUNC_1(VAR_6->mem_addr);
 VAR_5->num_pages = FUNC_1(VAR_6->mem_addr + (VAR_6->num_lines * VAR_6->mem_stride - 1)) -
  VAR_8 + 1;

 VAR_5->pages = FUNC_4(FUNC_2(sizeof(struct page *), VAR_5->num_pages));
 if (((void*)0) == VAR_5->pages)
  return -VAR_2;
 VAR_7 = FUNC_3((unsigned long)VAR_6->mem_addr,
   VAR_5->num_pages,
   VAR_5->direction == VAR_0 ? VAR_3 : 0,
   VAR_5->pages);
 if (VAR_7 != VAR_5->num_pages) {
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->state = VAR_4;
  return -VAR_1;
 }
 VAR_5->state = VAR_4;
 FUNC_0("DMA pages locked\n");
 return 0;
}
