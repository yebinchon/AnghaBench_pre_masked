
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_desc {size_t es; unsigned int sglen; TYPE_1__* sg; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ addr; } ;


 size_t* VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1(struct omap_desc *VAR_1, dma_addr_t VAR_2)
{
 unsigned VAR_3;
 size_t VAR_4, VAR_5 = VAR_0[VAR_1->es];

 for (VAR_4 = VAR_3 = 0; VAR_3 < VAR_1->sglen; VAR_3++) {
  size_t VAR_6 = FUNC_0(&VAR_1->sg[VAR_3]) * VAR_5;

  if (VAR_4)
   VAR_4 += VAR_6;
  else if (VAR_2 >= VAR_1->sg[VAR_3].addr &&
    VAR_2 < VAR_1->sg[VAR_3].addr + VAR_6)
   VAR_4 += VAR_1->sg[VAR_3].addr + VAR_6 - VAR_2;
 }
 return VAR_4;
}
