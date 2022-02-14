
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct msm_gem_submit {size_t nr_bos; TYPE_1__* bos; } ;
struct msm_gem_object {int dummy; } ;
struct TYPE_2__ {int flags; int iova; struct msm_gem_object* obj; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct msm_gem_submit *VAR_2, uint32_t VAR_3,
  struct msm_gem_object **VAR_4, uint64_t *VAR_5, bool *VAR_6)
{
 if (VAR_3 >= VAR_2->nr_bos) {
  FUNC_0("invalid buffer index: %u (out of %u)\n",
    VAR_3, VAR_2->nr_bos);
  return -VAR_1;
 }

 if (VAR_4)
  *VAR_4 = VAR_2->bos[VAR_3].obj;
 if (VAR_5)
  *VAR_5 = VAR_2->bos[VAR_3].iova;
 if (VAR_6)
  *VAR_6 = !!(VAR_2->bos[VAR_3].flags & VAR_0);

 return 0;
}
