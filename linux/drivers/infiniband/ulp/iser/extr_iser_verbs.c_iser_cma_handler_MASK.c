
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_cm_id {scalar_t__ context; } ;
struct TYPE_4__ {int private_data; } ;
struct TYPE_5__ {TYPE_1__ conn; } ;
struct rdma_cm_event {int event; int status; TYPE_2__ param; } ;
struct TYPE_6__ {int * cma_id; } ;
struct iser_conn {int state_mutex; TYPE_3__ ib_conn; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*,int) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct rdma_cm_id*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct rdma_cm_id*,int ) ;

__attribute__((used)) static int FUNC_11(struct rdma_cm_id *VAR_1, struct rdma_cm_event *VAR_2)
{
 struct iser_conn *VAR_3;
 int VAR_4 = 0;

 VAR_3 = (struct iser_conn *)VAR_1->context;
 FUNC_5("%s (%d): status %d conn %p id %p\n",
    FUNC_9(VAR_2->event), VAR_2->event,
    VAR_2->status, VAR_1->context, VAR_1);

 FUNC_7(&VAR_3->state_mutex);
 switch (VAR_2->event) {
 case 137:
  FUNC_0(VAR_1);
  break;
 case 130:
  FUNC_6(VAR_1);
  break;
 case 133:
  FUNC_3(VAR_1, VAR_2->param.conn.private_data);
  break;
 case 132:
  FUNC_5("Connection rejected: %s\n",
    FUNC_10(VAR_1, VAR_2->status));

 case 138:
 case 131:
 case 136:
 case 128:
  FUNC_2(VAR_1);
  break;
 case 134:
 case 139:
 case 129:
  FUNC_1(VAR_1, 0);
  break;
 case 135:






  FUNC_1(VAR_1, 1);
  if (VAR_3->state != VAR_0) {
   VAR_3->ib_conn.cma_id = ((void*)0);
   VAR_4 = 1;
  }
  break;
 default:
  FUNC_4("Unexpected RDMA CM event: %s (%d)\n",
    FUNC_9(VAR_2->event), VAR_2->event);
  break;
 }
 FUNC_8(&VAR_3->state_mutex);

 return VAR_4;
}
