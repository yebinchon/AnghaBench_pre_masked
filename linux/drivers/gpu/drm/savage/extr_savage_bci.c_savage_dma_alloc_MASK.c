
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {unsigned int current_dma_page; unsigned int nr_dma_pages; unsigned int first_dma_page; TYPE_2__* dma_pages; TYPE_1__* cmd_dma; int last_dma_age; int (* dma_flush ) (TYPE_3__*) ;} ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_8__ {unsigned int used; scalar_t__ flushed; int age; } ;
struct TYPE_7__ {scalar_t__ handle; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_1 (char*,unsigned int,int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*) ;

uint32_t *FUNC_4(drm_savage_private_t * VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->current_dma_page;
 unsigned int VAR_4 = VAR_0 -
     VAR_1->dma_pages[VAR_3].used;
 unsigned int VAR_5 = (VAR_2 - VAR_4 + VAR_0 - 1) /
     VAR_0;
 uint32_t *VAR_6;
 unsigned int VAR_7;

 FUNC_0("cur=%u, cur->used=%u, n=%u, rest=%u, nr_pages=%u\n",
    VAR_3, VAR_1->dma_pages[VAR_3].used, VAR_2, VAR_4, VAR_5);

 if (VAR_3 + VAR_5 < VAR_1->nr_dma_pages) {
  VAR_6 = (uint32_t *) VAR_1->cmd_dma->handle +
      VAR_3 * VAR_0 + VAR_1->dma_pages[VAR_3].used;
  if (VAR_2 < VAR_4)
   VAR_4 = VAR_2;
  VAR_1->dma_pages[VAR_3].used += VAR_4;
  VAR_2 -= VAR_4;
  VAR_3++;
 } else {
  VAR_1->dma_flush(VAR_1);
  VAR_5 =
      (VAR_2 + VAR_0 - 1) / VAR_0;
  for (VAR_7 = VAR_3; VAR_7 < VAR_1->nr_dma_pages; ++VAR_7) {
   VAR_1->dma_pages[VAR_7].age = VAR_1->last_dma_age;
   VAR_1->dma_pages[VAR_7].used = 0;
   VAR_1->dma_pages[VAR_7].flushed = 0;
  }
  VAR_6 = (uint32_t *) VAR_1->cmd_dma->handle;
  VAR_1->first_dma_page = VAR_3 = 0;
 }
 for (VAR_7 = VAR_3; VAR_5 > 0; ++VAR_7, --VAR_5) {






  if (VAR_2 > VAR_0)
   VAR_1->dma_pages[VAR_7].used = VAR_0;
  else
   VAR_1->dma_pages[VAR_7].used = VAR_2;
  VAR_2 -= VAR_0;
 }
 VAR_1->current_dma_page = --VAR_7;

 FUNC_0("cur=%u, cur->used=%u, n=%u\n",
    VAR_7, VAR_1->dma_pages[VAR_7].used, VAR_2);

 FUNC_2(VAR_1, VAR_1->current_dma_page);

 return VAR_6;
}
