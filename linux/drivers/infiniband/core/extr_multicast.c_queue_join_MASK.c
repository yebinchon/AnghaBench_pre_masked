
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_member {int list; struct mcast_group* group; } ;
struct mcast_group {scalar_t__ state; int lock; int work; int refcount; int pending_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mcast_member *VAR_3)
{
 struct mcast_group *VAR_4 = VAR_3->group;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);
 FUNC_1(&VAR_3->list, &VAR_4->pending_list);
 if (VAR_4->state == VAR_1) {
  VAR_4->state = VAR_0;
  FUNC_0(&VAR_4->refcount);
  FUNC_2(VAR_2, &VAR_4->work);
 }
 FUNC_4(&VAR_4->lock, VAR_5);
}
