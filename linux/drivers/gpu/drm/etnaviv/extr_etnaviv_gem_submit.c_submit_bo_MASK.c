
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct etnaviv_gem_submit_bo {int dummy; } ;
struct etnaviv_gem_submit {size_t nr_bos; struct etnaviv_gem_submit_bo* bos; } ;


 int FUNC_0 (char*,size_t,size_t) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct etnaviv_gem_submit *VAR_1, u32 VAR_2,
 struct etnaviv_gem_submit_bo **VAR_3)
{
 if (VAR_2 >= VAR_1->nr_bos) {
  FUNC_0("invalid buffer index: %u (out of %u)\n",
    VAR_2, VAR_1->nr_bos);
  return -VAR_0;
 }

 *VAR_3 = &VAR_1->bos[VAR_2];

 return 0;
}
