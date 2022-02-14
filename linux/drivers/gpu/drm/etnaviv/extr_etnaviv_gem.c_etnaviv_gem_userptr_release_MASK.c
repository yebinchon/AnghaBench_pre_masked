
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct etnaviv_gem_object {scalar_t__ pages; TYPE_1__ base; scalar_t__ sgt; } ;


 int VAR_0 ;
 int FUNC_0 (struct etnaviv_gem_object*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct etnaviv_gem_object *VAR_1)
{
 if (VAR_1->sgt) {
  FUNC_0(VAR_1);
  FUNC_4(VAR_1->sgt);
  FUNC_1(VAR_1->sgt);
 }
 if (VAR_1->pages) {
  int VAR_2 = VAR_1->base.size >> VAR_0;

  FUNC_3(VAR_1->pages, VAR_2);
  FUNC_2(VAR_1->pages);
 }
}
