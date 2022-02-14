
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_np {int * cm_id; } ;
typedef enum rdma_cm_event_type { ____Placeholder_rdma_cm_event_type } rdma_cm_event_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;


 int FUNC_2 (char*,int ,int,struct isert_np*) ;
 int FUNC_3 (char*,struct isert_np*,int) ;
 int * FUNC_4 (struct isert_np*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct isert_np *VAR_0,
       enum rdma_cm_event_type VAR_1)
{
 FUNC_2("%s (%d): isert np %p\n",
    FUNC_5(VAR_1), VAR_1, VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_0->cm_id = ((void*)0);
  break;
 case 129:
  VAR_0->cm_id = FUNC_4(VAR_0);
  if (FUNC_0(VAR_0->cm_id)) {
   FUNC_3("isert np %p setup id failed: %ld\n",
      VAR_0, FUNC_1(VAR_0->cm_id));
   VAR_0->cm_id = ((void*)0);
  }
  break;
 default:
  FUNC_3("isert np %p Unexpected event %d\n",
     VAR_0, VAR_1);
 }

 return -1;
}
