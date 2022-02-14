
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_addrf {int sec_stripe; int ch_stripe; int lun_stripe; int sec_lun_stripe; int sec_ws_stripe; } ;
struct nvm_addrf {unsigned long long ch_len; unsigned long long lun_len; unsigned long long chk_len; unsigned long long sec_len; unsigned long long sec_offset; unsigned long long ch_offset; unsigned long long lun_offset; unsigned long long chk_offset; unsigned long long sec_mask; unsigned long long chk_mask; unsigned long long lun_mask; unsigned long long ch_mask; } ;
struct nvm_geo {int num_ch; int num_lun; int ws_opt; struct nvm_addrf addrf; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct nvm_geo *VAR_0, struct nvm_addrf *VAR_1,
        struct pblk_addrf *VAR_2)
{
 struct nvm_addrf *VAR_3 = &VAR_0->addrf;

 VAR_1->ch_len = FUNC_0(VAR_0->num_ch);
 VAR_1->lun_len = FUNC_0(VAR_0->num_lun);
 VAR_1->chk_len = VAR_3->chk_len;
 VAR_1->sec_len = VAR_3->sec_len;

 VAR_1->sec_offset = 0;
 VAR_1->ch_offset = VAR_1->sec_len;
 VAR_1->lun_offset = VAR_1->ch_offset + VAR_1->ch_len;
 VAR_1->chk_offset = VAR_1->lun_offset + VAR_1->lun_len;

 VAR_1->sec_mask = ((1ULL << VAR_1->sec_len) - 1) << VAR_1->sec_offset;
 VAR_1->chk_mask = ((1ULL << VAR_1->chk_len) - 1) << VAR_1->chk_offset;
 VAR_1->lun_mask = ((1ULL << VAR_1->lun_len) - 1) << VAR_1->lun_offset;
 VAR_1->ch_mask = ((1ULL << VAR_1->ch_len) - 1) << VAR_1->ch_offset;

 VAR_2->sec_stripe = VAR_0->ws_opt;
 VAR_2->ch_stripe = VAR_0->num_ch;
 VAR_2->lun_stripe = VAR_0->num_lun;

 VAR_2->sec_lun_stripe = VAR_2->sec_stripe * VAR_2->ch_stripe;
 VAR_2->sec_ws_stripe = VAR_2->sec_lun_stripe * VAR_2->lun_stripe;

 return VAR_1->chk_offset + VAR_1->chk_len;
}
