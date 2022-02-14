
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_job {int result; unsigned int reply_payload_rcv_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bsg_job*) ;

void FUNC_2(struct bsg_job *VAR_0, int VAR_1,
    unsigned int VAR_2)
{
 VAR_0->result = VAR_1;
 VAR_0->reply_payload_rcv_len = VAR_2;
 FUNC_0(FUNC_1(VAR_0));
}
