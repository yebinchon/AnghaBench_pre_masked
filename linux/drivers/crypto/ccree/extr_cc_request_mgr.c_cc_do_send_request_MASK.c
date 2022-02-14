
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_req_mgr_handle {size_t req_queue_head; int req_queue_tail; unsigned int max_used_sw_slots; unsigned int q_free_slots; struct cc_hw_desc compl_desc; struct cc_crypto_req* req_queue; } ;
struct cc_drvdata {struct cc_req_mgr_handle* request_mgr_handle; } ;
struct cc_crypto_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct cc_drvdata*) ;
 int FUNC_3 (struct cc_drvdata*,struct cc_hw_desc*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct cc_drvdata *VAR_2,
         struct cc_crypto_req *VAR_3,
         struct cc_hw_desc *VAR_4, unsigned int VAR_5,
    bool VAR_6)
{
 struct cc_req_mgr_handle *VAR_7 = VAR_2->request_mgr_handle;
 unsigned int VAR_8;
 unsigned int VAR_9 = VAR_5;
 struct device *VAR_10 = FUNC_2(VAR_2);

 VAR_8 = ((VAR_7->req_queue_head -
     VAR_7->req_queue_tail) &
    (VAR_1 - 1));
 if (VAR_8 > VAR_7->max_used_sw_slots)
  VAR_7->max_used_sw_slots = VAR_8;


 VAR_7->req_queue[VAR_7->req_queue_head] = *VAR_3;
 VAR_7->req_queue_head = (VAR_7->req_queue_head + 1) &
        (VAR_1 - 1);


 FUNC_0(VAR_10, "Enqueue request head=%u\n", VAR_7->req_queue_head);






 FUNC_4();



 FUNC_3(VAR_2, VAR_4, VAR_5);

 if (VAR_6) {
  FUNC_3(VAR_2, &VAR_7->compl_desc, 1);
  VAR_9++;
 }

 if (VAR_7->q_free_slots < VAR_9) {




  FUNC_1(VAR_10, "HW free slot count mismatch.");
  VAR_7->q_free_slots = 0;
 } else {

  VAR_7->q_free_slots -= VAR_9;
 }


 return -VAR_0;
}
