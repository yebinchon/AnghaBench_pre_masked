
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_req_mgr_handle {int q_free_slots; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_drvdata {struct cc_req_mgr_handle* request_mgr_handle; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 (struct cc_drvdata*,struct cc_req_mgr_handle*,unsigned int) ;
 int FUNC_3 (struct cc_drvdata*,struct cc_hw_desc*,unsigned int) ;
 int FUNC_4 (struct cc_drvdata*,struct cc_hw_desc*) ;
 int FUNC_5 () ;

int FUNC_6(struct cc_drvdata *VAR_1, struct cc_hw_desc *VAR_2,
        unsigned int VAR_3)
{
 struct cc_req_mgr_handle *VAR_4 = VAR_1->request_mgr_handle;
 unsigned int VAR_5 = VAR_3;
 int VAR_6 = 0;



 VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_1, &VAR_2[(VAR_3 - 1)]);






 FUNC_5();
 FUNC_3(VAR_1, VAR_2, VAR_3);


 VAR_4->q_free_slots =
  FUNC_1(VAR_1, FUNC_0(VAR_0));

 return 0;
}
