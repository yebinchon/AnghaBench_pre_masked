
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct etnaviv_gem_object {TYPE_1__ base; int lock; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page** FUNC_1 (struct etnaviv_gem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct page**,int,int ,int ) ;

__attribute__((used)) static void *FUNC_5(struct etnaviv_gem_object *VAR_3)
{
 struct page **VAR_4;

 FUNC_2(&VAR_3->lock);

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_4))
  return ((void*)0);

 return FUNC_4(VAR_4, VAR_3->base.size >> VAR_1,
   VAR_2, FUNC_3(VAR_0));
}
