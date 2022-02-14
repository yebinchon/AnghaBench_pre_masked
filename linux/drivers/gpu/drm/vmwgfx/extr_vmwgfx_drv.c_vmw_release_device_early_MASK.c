
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int bdev; scalar_t__ has_mob; scalar_t__ cman; int dummy_query_bo; int * pinned_bo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct vmw_private*) ;

__attribute__((used)) static void FUNC_5(struct vmw_private *VAR_1)
{





 FUNC_0(VAR_1->pinned_bo != ((void*)0));

 FUNC_2(&VAR_1->dummy_query_bo);
 if (VAR_1->cman)
  FUNC_3(VAR_1->cman);

 if (VAR_1->has_mob) {
  FUNC_1(&VAR_1->bdev, VAR_0);
  FUNC_4(VAR_1);
 }
}
