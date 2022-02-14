
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int pending_timer; int pending_tree; int * queued; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct throtl_service_queue *VAR_2)
{
 FUNC_0(&VAR_2->queued[0]);
 FUNC_0(&VAR_2->queued[1]);
 VAR_2->pending_tree = VAR_0;
 FUNC_1(&VAR_2->pending_timer, VAR_1, 0);
}
