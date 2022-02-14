
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gem_submit {unsigned int nr_bos; int ticket; TYPE_1__* bos; } ;
struct msm_gem_object {int base; int submit_entry; } ;
struct TYPE_2__ {struct msm_gem_object* obj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gem_submit*,unsigned int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct msm_gem_submit *VAR_0)
{
 unsigned VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_bos; VAR_1++) {
  struct msm_gem_object *VAR_2 = VAR_0->bos[VAR_1].obj;
  FUNC_2(VAR_0, VAR_1, 0);
  FUNC_1(&VAR_2->submit_entry);
  FUNC_0(&VAR_2->base);
 }

 FUNC_3(&VAR_0->ticket);
}
