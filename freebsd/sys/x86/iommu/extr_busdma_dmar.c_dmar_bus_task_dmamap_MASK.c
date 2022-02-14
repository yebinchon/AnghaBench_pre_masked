
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_unit {int delayed_maps; } ;
struct bus_dmamap_dmar {int cansleep; int locked; int callback_arg; int callback; int mem; struct bus_dma_tag_dmar* tag; } ;
struct TYPE_2__ {int lockfuncarg; int (* lockfunc ) (int ,int ) ;} ;
struct bus_dma_tag_dmar {TYPE_1__ common; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 struct bus_dmamap_dmar* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bus_dmamap_dmar*,int ) ;
 int FUNC_4 (int ,int ,int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, int VAR_4)
{
 struct bus_dma_tag_dmar *VAR_5;
 struct bus_dmamap_dmar *VAR_6;
 struct dmar_unit *VAR_7;

 VAR_7 = VAR_3;
 FUNC_0(VAR_7);
 while ((VAR_6 = FUNC_2(&VAR_7->delayed_maps)) != ((void*)0)) {
  FUNC_3(&VAR_7->delayed_maps, VAR_6, VAR_2);
  FUNC_1(VAR_7);
  VAR_5 = VAR_6->tag;
  VAR_6->cansleep = 1;
  VAR_6->locked = 0;
  FUNC_4((bus_dma_tag_t)VAR_5, (bus_dmamap_t)VAR_6,
      &VAR_6->mem, VAR_6->callback, VAR_6->callback_arg,
      VAR_1);
  VAR_6->cansleep = 0;
  if (VAR_6->locked) {
   (VAR_5->common.lockfunc)(VAR_5->common.lockfuncarg,
       VAR_0);
  } else
   VAR_6->locked = 1;
  VAR_6->cansleep = 0;
  FUNC_0(VAR_7);
 }
 FUNC_1(VAR_7);
}
