
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {unsigned int first_dma_page; unsigned int current_dma_page; unsigned long dma_type; unsigned int event_wrap; unsigned int nr_dma_pages; TYPE_2__* dma_pages; int last_dma_age; TYPE_1__* cmd_dma; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_7__ {unsigned int used; unsigned int flushed; int age; } ;
struct TYPE_6__ {unsigned int offset; scalar_t__ handle; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,unsigned int,unsigned int,...) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_8(drm_savage_private_t * VAR_4)
{
 unsigned int VAR_5 = VAR_4->first_dma_page;
 unsigned int VAR_6 = VAR_4->current_dma_page;
 uint16_t VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 VAR_1;

 if (VAR_5 == VAR_6 &&
     VAR_4->dma_pages[VAR_6].used == VAR_4->dma_pages[VAR_6].flushed)
  return;



 VAR_9 = -VAR_4->dma_pages[VAR_6].used & 1;
 VAR_10 = -(VAR_4->dma_pages[VAR_6].used + VAR_9) & 7;

 FUNC_4("first=%u, cur=%u, first->flushed=%u, cur->used=%u, "
    "pad=%u, align=%u\n",
    VAR_5, VAR_6, VAR_4->dma_pages[VAR_5].flushed,
    VAR_4->dma_pages[VAR_6].used, VAR_9, VAR_10);


 if (VAR_9) {
  uint32_t *VAR_14 = (uint32_t *) VAR_4->cmd_dma->handle +
      VAR_6 * VAR_3 + VAR_4->dma_pages[VAR_6].used;
  VAR_4->dma_pages[VAR_6].used += VAR_9;
  while (VAR_9 != 0) {
   *VAR_14++ = VAR_0;
   VAR_9--;
  }
 }

 FUNC_6();


 VAR_13 = VAR_4->cmd_dma->offset +
     (VAR_5 * VAR_3 +
      VAR_4->dma_pages[VAR_5].flushed) * 4;
 VAR_11 = (VAR_6 - VAR_5) * VAR_3 +
     VAR_4->dma_pages[VAR_6].used - VAR_4->dma_pages[VAR_5].flushed;

 FUNC_4("phys_addr=%lx, len=%u\n",
    VAR_13 | VAR_4->dma_type, VAR_11);

 FUNC_3(3);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_13 | VAR_4->dma_type);
 FUNC_0(VAR_11);


 VAR_4->dma_pages[VAR_6].used += VAR_10;


 VAR_7 = FUNC_7(VAR_4, 0);
 VAR_8 = VAR_4->event_wrap;
 for (VAR_12 = VAR_5; VAR_12 < VAR_6; ++VAR_12) {
  FUNC_5(&VAR_4->dma_pages[VAR_12].age, VAR_7, VAR_8);
  VAR_4->dma_pages[VAR_12].used = 0;
  VAR_4->dma_pages[VAR_12].flushed = 0;
 }

 if (VAR_4->dma_pages[VAR_6].used == VAR_3) {
  FUNC_5(&VAR_4->dma_pages[VAR_6].age, VAR_7, VAR_8);
  VAR_4->dma_pages[VAR_6].used = 0;
  VAR_4->dma_pages[VAR_6].flushed = 0;

  VAR_6++;
  if (VAR_6 == VAR_4->nr_dma_pages)
   VAR_6 = 0;
  VAR_4->first_dma_page = VAR_4->current_dma_page = VAR_6;
 } else {
  VAR_4->first_dma_page = VAR_6;
  VAR_4->dma_pages[VAR_6].flushed = VAR_4->dma_pages[VAR_12].used;
 }
 FUNC_5(&VAR_4->last_dma_age, VAR_7, VAR_8);

 FUNC_4("first=cur=%u, cur->used=%u, cur->flushed=%u\n", VAR_6,
    VAR_4->dma_pages[VAR_6].used,
    VAR_4->dma_pages[VAR_6].flushed);
}
