
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct mq_inflight {unsigned int* inflight; struct hd_struct* part; } ;
struct hd_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int ,struct mq_inflight*) ;

void FUNC_1(struct request_queue *VAR_1, struct hd_struct *VAR_2,
    unsigned int VAR_3[2])
{
 struct mq_inflight VAR_4 = { .part = VAR_2, .inflight = VAR_3, };

 VAR_3[0] = VAR_3[1] = 0;
 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
