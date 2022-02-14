
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bus_dmamap {int dmat; } ;
struct bounce_zone {int total_deferred; int active_bpages; int free_bpages; int bounce_page_list; } ;
struct bounce_page {int busaddr; int vaddr; scalar_t__ datacount; scalar_t__ datavaddr; } ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ common; struct bounce_zone* bounce_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bus_dmamap* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bounce_page*,int ) ;
 int FUNC_2 (int *,struct bus_dmamap*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,struct bus_dmamap*,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(bus_dma_tag_t VAR_8, struct bounce_page *VAR_9)
{
 struct bus_dmamap *VAR_10;
 struct bounce_zone *VAR_11;

 VAR_11 = VAR_8->bounce_zone;
 VAR_9->datavaddr = 0;
 VAR_9->datacount = 0;
 if (VAR_8->common.flags & VAR_0) {





  VAR_9->vaddr &= ~VAR_1;
  VAR_9->busaddr &= ~VAR_1;
 }

 FUNC_4(&VAR_2);
 FUNC_1(&VAR_11->bounce_page_list, VAR_9, VAR_6);
 VAR_11->free_bpages++;
 VAR_11->active_bpages--;
 if ((VAR_10 = FUNC_0(&VAR_4)) != ((void*)0)) {
  if (FUNC_6(VAR_10->dmat, VAR_10, 1) == 0) {
   FUNC_3(&VAR_4, VAR_6);
   FUNC_2(&VAR_3,
       VAR_10, VAR_6);
   VAR_5 = 1;
   VAR_11->total_deferred++;
   FUNC_7(VAR_7, 0);
  }
 }
 FUNC_5(&VAR_2);
}
