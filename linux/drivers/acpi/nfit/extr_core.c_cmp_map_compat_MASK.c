
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfit_set_info_map {int region_offset; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct nfit_set_info_map *VAR_2 = VAR_0;
 const struct nfit_set_info_map *VAR_3 = VAR_1;

 return FUNC_0(&VAR_2->region_offset, &VAR_3->region_offset,
   sizeof(u64));
}
