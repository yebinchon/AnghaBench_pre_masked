
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_cmd_queue {long total_ops; long total_aes_ops; long total_xts_aes_ops; long total_3des_ops; long total_sha_ops; long total_rsa_ops; long total_pt_ops; long total_ecc_ops; } ;



__attribute__((used)) static void FUNC_0(struct ccp_cmd_queue *VAR_0)
{
 VAR_0->total_ops = 0L;
 VAR_0->total_aes_ops = 0L;
 VAR_0->total_xts_aes_ops = 0L;
 VAR_0->total_3des_ops = 0L;
 VAR_0->total_sha_ops = 0L;
 VAR_0->total_rsa_ops = 0L;
 VAR_0->total_pt_ops = 0L;
 VAR_0->total_ecc_ops = 0L;
}
