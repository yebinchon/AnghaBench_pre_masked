
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_softc {int mr_ndesc; struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {scalar_t__ mr_base; scalar_t__ mr_len; } ;



__attribute__((used)) static struct mem_range_desc *
FUNC_0(struct mem_range_softc *VAR_0, struct mem_range_desc *VAR_1)
{
 struct mem_range_desc *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_0->mr_desc; VAR_3 < VAR_0->mr_ndesc; VAR_3++, VAR_2++)
  if ((VAR_2->mr_base == VAR_1->mr_base) &&
      (VAR_2->mr_len == VAR_1->mr_len))
   return (VAR_2);
 return (((void*)0));
}
