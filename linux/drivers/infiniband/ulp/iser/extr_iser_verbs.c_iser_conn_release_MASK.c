
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_conn {int * cma_id; } ;
struct iser_conn {scalar_t__ state; int state_mutex; int ep; int conn_list; struct ib_conn ib_conn; } ;
struct TYPE_2__ {int connlist_mutex; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iser_conn*,int) ;
 int FUNC_2 (char*,struct iser_conn*,scalar_t__) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct iser_conn *VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_2->ib_conn;

 FUNC_5(&VAR_1.connlist_mutex);
 FUNC_4(&VAR_2->conn_list);
 FUNC_6(&VAR_1.connlist_mutex);

 FUNC_5(&VAR_2->state_mutex);

 if (VAR_2->state != VAR_0) {
  FUNC_2("iser conn %p state %d, expected state down.\n",
     VAR_2, VAR_2->state);
  FUNC_0(VAR_2->ep);
  VAR_2->state = VAR_0;
 }




 FUNC_1(VAR_2, 1);
 FUNC_6(&VAR_2->state_mutex);

 if (VAR_3->cma_id != ((void*)0)) {
  FUNC_7(VAR_3->cma_id);
  VAR_3->cma_id = ((void*)0);
 }

 FUNC_3(VAR_2);
}
