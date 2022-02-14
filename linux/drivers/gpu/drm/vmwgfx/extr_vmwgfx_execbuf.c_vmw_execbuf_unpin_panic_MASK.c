
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dummy_query_bo_pinned; int dummy_query_bo; int pinned_bo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct vmw_private*,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct vmw_private *VAR_1)
{
 FUNC_0("Can't unpin query buffer. Trying to recover.\n");

 (void) FUNC_2(VAR_1, 0, 1, 0, 0, 10*VAR_0);
 FUNC_1(VAR_1->pinned_bo, 0);
 if (VAR_1->dummy_query_bo_pinned) {
  FUNC_1(VAR_1->dummy_query_bo, 0);
  VAR_1->dummy_query_bo_pinned = 0;
 }
}
