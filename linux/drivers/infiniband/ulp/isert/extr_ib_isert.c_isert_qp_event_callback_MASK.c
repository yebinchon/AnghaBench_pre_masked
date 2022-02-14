
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int cm_id; } ;
struct ib_event {int event; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,struct isert_conn*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int const) ;

__attribute__((used)) static void
FUNC_4(struct ib_event *VAR_0, void *VAR_1)
{
 struct isert_conn *VAR_2 = VAR_1;

 FUNC_1("%s (%d): conn %p\n",
    FUNC_0(VAR_0->event), VAR_0->event, VAR_2);

 switch (VAR_0->event) {
 case 129:
  FUNC_3(VAR_2->cm_id, 129);
  break;
 case 128:
  FUNC_2("Reached TX IB_EVENT_QP_LAST_WQE_REACHED\n");
  break;
 default:
  break;
 }
}
