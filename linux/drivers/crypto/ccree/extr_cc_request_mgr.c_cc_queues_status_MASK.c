
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_req_mgr_handle {int req_queue_tail; unsigned int q_free_slots; unsigned int min_free_hw_slots; int req_queue_head; } ;
struct cc_drvdata {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 (struct device*,char*,unsigned int,int,...) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;

__attribute__((used)) static int FUNC_5(struct cc_drvdata *VAR_4,
       struct cc_req_mgr_handle *VAR_5,
       unsigned int VAR_6)
{
 unsigned long VAR_7;
 struct device *VAR_8 = FUNC_4(VAR_4);





 if (((VAR_5->req_queue_head + 1) & (VAR_3 - 1)) ==
     VAR_5->req_queue_tail) {
  FUNC_3(VAR_8, "SW FIFO is full. req_queue_head=%d sw_fifo_len=%d\n",
   VAR_5->req_queue_head, VAR_3);
  return -VAR_2;
 }

 if (VAR_5->q_free_slots >= VAR_6)
  return 0;


 for (VAR_7 = 0; VAR_7 < VAR_0 ; VAR_7++) {
  VAR_5->q_free_slots =
   FUNC_1(VAR_4, FUNC_0(VAR_1));
  if (VAR_5->q_free_slots < VAR_5->min_free_hw_slots)
   VAR_5->min_free_hw_slots = VAR_5->q_free_slots;

  if (VAR_5->q_free_slots >= VAR_6) {

   return 0;
  }

  FUNC_2(VAR_8, "HW FIFO is full. q_free_slots=%d total_seq_len=%d\n",
   VAR_5->q_free_slots, VAR_6);
 }

 FUNC_2(VAR_8, "HW FIFO full, timeout. req_queue_head=%d sw_fifo_len=%d q_free_slots=%d total_seq_len=%d\n",
  VAR_5->req_queue_head, VAR_3,
  VAR_5->q_free_slots, VAR_6);
 return -VAR_2;
}
