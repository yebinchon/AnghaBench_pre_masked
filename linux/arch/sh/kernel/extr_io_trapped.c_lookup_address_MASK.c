
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapped_io {int num_resources; struct resource* resource; scalar_t__ virt_base; } ;
struct resource {unsigned long start; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*) ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct trapped_io *VAR_1,
        unsigned long VAR_2)
{
 struct resource *VAR_3;
 unsigned long VAR_4 = (unsigned long)VAR_1->virt_base;
 unsigned long VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_resources; VAR_6++) {
  VAR_3 = VAR_1->resource + VAR_6;
  VAR_5 = FUNC_1(FUNC_0(VAR_3), VAR_0);
  if (VAR_2 < (VAR_4 + VAR_5))
   return VAR_3->start + (VAR_2 - VAR_4);
  VAR_4 += VAR_5;
 }
 return 0;
}
