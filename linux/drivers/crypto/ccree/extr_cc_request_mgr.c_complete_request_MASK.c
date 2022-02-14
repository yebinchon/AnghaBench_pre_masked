
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_req_mgr_handle {int comptask; int compwork; int workq; } ;
struct cc_drvdata {int hw_queue_avail; struct cc_req_mgr_handle* request_mgr_handle; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cc_drvdata *VAR_0)
{
 struct cc_req_mgr_handle *VAR_1 =
      VAR_0->request_mgr_handle;

 FUNC_0(&VAR_0->hw_queue_avail);




 FUNC_2(&VAR_1->comptask);

}
