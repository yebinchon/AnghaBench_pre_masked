
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;
struct isa_ranges {scalar_t__ size; } ;


 scalar_t__ FUNC_0 (struct isa_ranges*) ;
 scalar_t__ FUNC_1 (struct isa_ranges*) ;
 int FUNC_2 (struct isa_ranges*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,...) ;

int
FUNC_4(struct isa_ranges *VAR_0, int VAR_1, u_long *VAR_2,
    u_long *VAR_3, int *VAR_4)
{
 struct isa_ranges *VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_5 = &VAR_0[VAR_9];
  VAR_7 = FUNC_0(VAR_5);
  VAR_8 = VAR_7 + VAR_5->size - 1;
  if (*VAR_2 < VAR_7 || *VAR_2 > VAR_8)
   continue;
  if (*VAR_3 < VAR_7 || *VAR_3 > VAR_8) {
   FUNC_3("ofw_isa_map_iorange: iorange crosses PCI "
       "ranges (%#lx not in %#lx - %#lx)", *VAR_3, VAR_7,
       VAR_8);
  }
  VAR_6 = FUNC_1(VAR_5);
  *VAR_2 = *VAR_2 + VAR_6 - VAR_7;
  *VAR_3 = *VAR_3 + VAR_6 - VAR_7;
  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_9;
  return (FUNC_2(VAR_5));
 }
 FUNC_3("ofw_isa_map_iorange: could not map range %#lx - %#lx",
     *VAR_2, *VAR_3);
}
