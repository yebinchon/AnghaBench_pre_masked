
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_c_alg_cfg {int c_mode; int c_alg; int key_len; int c_width; } ;
struct sec_bd_info {int w0; int w1; int w3; int cipher_key_addr_hi; int cipher_key_addr_lo; } ;
struct sec_alg_tfm_ctx {int pkey; } ;
typedef enum sec_cipher_alg { ____Placeholder_sec_cipher_alg } sec_cipher_alg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sec_bd_info*,int ,int) ;
 struct sec_c_alg_cfg* VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sec_alg_tfm_ctx *VAR_5,
        struct sec_bd_info *VAR_6,
        enum sec_cipher_alg VAR_7)
{
 const struct sec_c_alg_cfg *VAR_8 = &VAR_4[VAR_7];

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->w0 |= VAR_8->c_mode << VAR_0;
 VAR_6->w1 |= VAR_8->c_alg << VAR_2;
 VAR_6->w3 |= VAR_8->key_len << VAR_3;
 VAR_6->w0 |= VAR_8->c_width << VAR_1;

 VAR_6->cipher_key_addr_lo = FUNC_0(VAR_5->pkey);
 VAR_6->cipher_key_addr_hi = FUNC_2(VAR_5->pkey);
}
