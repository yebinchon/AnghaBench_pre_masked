
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_fw_msg {int msg_len; int resp_max_len; int timeout; void* resp; void* msg; } ;



__attribute__((used)) static void FUNC_0(struct bnxt_fw_msg *VAR_0, void *VAR_1,
    int VAR_2, void *VAR_3, int VAR_4,
    int VAR_5)
{
 VAR_0->msg = VAR_1;
 VAR_0->msg_len = VAR_2;
 VAR_0->resp = VAR_3;
 VAR_0->resp_max_len = VAR_4;
 VAR_0->timeout = VAR_5;
}
