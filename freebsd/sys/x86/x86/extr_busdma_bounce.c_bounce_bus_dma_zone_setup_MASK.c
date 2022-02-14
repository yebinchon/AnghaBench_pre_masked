
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bounce_zone {int total_bpages; } ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_6__ {scalar_t__ maxsize; } ;
struct TYPE_7__ {int bounce_flags; TYPE_1__ common; struct bounce_zone* bounce_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(bus_dma_tag_t VAR_2)
{
 struct bounce_zone *VAR_3;
 int VAR_4;


 if ((VAR_4 = FUNC_1(VAR_2)) != 0)
  return (VAR_4);
 VAR_3 = VAR_2->bounce_zone;

 if (FUNC_3(VAR_3->total_bpages) < VAR_2->common.maxsize) {
  int VAR_5;

  VAR_5 = FUNC_2(VAR_2->common.maxsize) - VAR_3->total_bpages;


  if (FUNC_0(VAR_2, VAR_5) < VAR_5)
   return (VAR_1);
 }

 VAR_2->bounce_flags |= VAR_0;

 return (0);
}
