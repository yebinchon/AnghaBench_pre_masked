
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_set_info_map {scalar_t__ region_offset; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct nfit_set_info_map *VAR_2 = VAR_0;
 const struct nfit_set_info_map *VAR_3 = VAR_1;

 if (VAR_2->region_offset < VAR_3->region_offset)
  return -1;
 else if (VAR_2->region_offset > VAR_3->region_offset)
  return 1;
 return 0;
}
