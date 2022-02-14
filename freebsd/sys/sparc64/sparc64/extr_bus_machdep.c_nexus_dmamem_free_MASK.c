
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {scalar_t__ dt_maxsize; scalar_t__ dt_alignment; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,scalar_t__,int ) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void
FUNC_2(bus_dma_tag_t VAR_2, void *VAR_3, bus_dmamap_t VAR_4)
{

 if (VAR_2->dt_maxsize <= VAR_1 &&
     VAR_2->dt_alignment < VAR_2->dt_maxsize)
  FUNC_1(VAR_3, VAR_0);
 else
  FUNC_0(VAR_3, VAR_2->dt_maxsize, VAR_0);
}
