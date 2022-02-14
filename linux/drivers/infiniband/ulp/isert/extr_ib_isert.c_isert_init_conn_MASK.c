
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int release_work; int mutex; int kref; int rem_wait; int login_req_comp; int login_comp; int node; int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct isert_conn *VAR_2)
{
 VAR_2->state = VAR_0;
 FUNC_0(&VAR_2->node);
 FUNC_2(&VAR_2->login_comp);
 FUNC_2(&VAR_2->login_req_comp);
 FUNC_3(&VAR_2->rem_wait);
 FUNC_4(&VAR_2->kref);
 FUNC_5(&VAR_2->mutex);
 FUNC_1(&VAR_2->release_work, VAR_1);
}
