
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpseci_sec_attr {int ptha_acc_num; int ccha_acc_num; int aes_acc_num; int des_acc_num; int arc4_acc_num; int md_acc_num; int rng_acc_num; int kasumi_acc_num; int pk_acc_num; int crc_acc_num; int snow_f9_acc_num; int snow_f8_acc_num; int zuc_enc_acc_num; int zuc_auth_acc_num; int deco_num; int era; int minor_rev; int major_rev; int ip_id; } ;
struct dpseci_rsp_get_sec_attr {int ptha_acc_num; int ccha_acc_num; int aes_acc_num; int des_acc_num; int arc4_acc_num; int md_acc_num; int rng_acc_num; int kasumi_acc_num; int pk_acc_num; int crc_acc_num; int snow_f9_acc_num; int snow_f8_acc_num; int zuc_enc_acc_num; int zuc_auth_acc_num; int deco_num; int era; int minor_rev; int major_rev; int ip_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1, u32 VAR_2, u16 VAR_3,
   struct dpseci_sec_attr *VAR_4)
{
 struct fsl_mc_command VAR_5 = { 0 };
 struct dpseci_rsp_get_sec_attr *VAR_6;
 int VAR_7;

 VAR_5.header = FUNC_1(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = (struct dpseci_rsp_get_sec_attr *)VAR_5.params;
 VAR_4->ip_id = FUNC_0(VAR_6->ip_id);
 VAR_4->major_rev = VAR_6->major_rev;
 VAR_4->minor_rev = VAR_6->minor_rev;
 VAR_4->era = VAR_6->era;
 VAR_4->deco_num = VAR_6->deco_num;
 VAR_4->zuc_auth_acc_num = VAR_6->zuc_auth_acc_num;
 VAR_4->zuc_enc_acc_num = VAR_6->zuc_enc_acc_num;
 VAR_4->snow_f8_acc_num = VAR_6->snow_f8_acc_num;
 VAR_4->snow_f9_acc_num = VAR_6->snow_f9_acc_num;
 VAR_4->crc_acc_num = VAR_6->crc_acc_num;
 VAR_4->pk_acc_num = VAR_6->pk_acc_num;
 VAR_4->kasumi_acc_num = VAR_6->kasumi_acc_num;
 VAR_4->rng_acc_num = VAR_6->rng_acc_num;
 VAR_4->md_acc_num = VAR_6->md_acc_num;
 VAR_4->arc4_acc_num = VAR_6->arc4_acc_num;
 VAR_4->des_acc_num = VAR_6->des_acc_num;
 VAR_4->aes_acc_num = VAR_6->aes_acc_num;
 VAR_4->ccha_acc_num = VAR_6->ccha_acc_num;
 VAR_4->ptha_acc_num = VAR_6->ptha_acc_num;

 return 0;
}
