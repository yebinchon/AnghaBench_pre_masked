
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_req_mgr_handle {int hw_lock; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_drvdata {int hw_queue_avail; struct cc_req_mgr_handle* request_mgr_handle; } ;
struct cc_crypto_req {int seq_compl; int * user_arg; int user_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cc_drvdata*,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct cc_drvdata*,struct cc_req_mgr_handle*,unsigned int) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct device* FUNC_5 (struct cc_drvdata*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct cc_drvdata *VAR_3,
    struct cc_crypto_req *VAR_4, struct cc_hw_desc *VAR_5,
    unsigned int VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = FUNC_5(VAR_3);
 struct cc_req_mgr_handle *VAR_9 = VAR_3->request_mgr_handle;

 FUNC_6(&VAR_4->seq_compl);
 VAR_4->user_cb = VAR_2;
 VAR_4->user_arg = &VAR_4->seq_compl;

 VAR_7 = FUNC_1(VAR_8);
 if (VAR_7) {
  FUNC_4(VAR_8, "ssi_power_mgr_runtime_get returned %x\n", VAR_7);
  return VAR_7;
 }

 while (1) {
  FUNC_8(&VAR_9->hw_lock);
  VAR_7 = FUNC_3(VAR_3, VAR_9, VAR_6 + 1);

  if (!VAR_7)
   break;

  FUNC_9(&VAR_9->hw_lock);
  if (VAR_7 != -VAR_0) {
   FUNC_2(VAR_8);
   return VAR_7;
  }
  FUNC_11(&VAR_3->hw_queue_avail);
  FUNC_7(&VAR_3->hw_queue_avail);
 }

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 1);
 FUNC_9(&VAR_9->hw_lock);

 if (VAR_7 != -VAR_1) {
  FUNC_2(VAR_8);
  return VAR_7;
 }

 FUNC_10(&VAR_4->seq_compl);
 return 0;
}
