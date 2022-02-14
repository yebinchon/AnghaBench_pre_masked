
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;
struct nvm_geo {int num_ch; int num_lun; int addrf; } ;
struct nvm_addrf_12 {int ch_len; int lun_len; unsigned long long blk_len; unsigned long long pg_len; unsigned long long pln_len; unsigned long long sec_len; unsigned long long sec_offset; unsigned long long pln_offset; int ch_offset; int lun_offset; int pg_offset; unsigned long long blk_offset; unsigned long long sec_mask; unsigned long long pln_mask; unsigned long long ch_mask; unsigned long long lun_mask; unsigned long long pg_mask; unsigned long long blk_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pblk*,char*) ;

__attribute__((used)) static int FUNC_2(struct pblk *VAR_1, struct nvm_geo *VAR_2,
        struct nvm_addrf_12 *VAR_3)
{
 struct nvm_addrf_12 *VAR_4 = (struct nvm_addrf_12 *)&VAR_2->addrf;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_2->num_ch);
 if (1 << VAR_5 != VAR_2->num_ch) {
  FUNC_1(VAR_1, "supports only power-of-two channel config.\n");
  return -VAR_0;
 }
 VAR_3->ch_len = VAR_5;

 VAR_5 = FUNC_0(VAR_2->num_lun);
 if (1 << VAR_5 != VAR_2->num_lun) {
  FUNC_1(VAR_1, "supports only power-of-two LUN config.\n");
  return -VAR_0;
 }
 VAR_3->lun_len = VAR_5;

 VAR_3->blk_len = VAR_4->blk_len;
 VAR_3->pg_len = VAR_4->pg_len;
 VAR_3->pln_len = VAR_4->pln_len;
 VAR_3->sec_len = VAR_4->sec_len;

 VAR_3->sec_offset = 0;
 VAR_3->pln_offset = VAR_3->sec_len;
 VAR_3->ch_offset = VAR_3->pln_offset + VAR_3->pln_len;
 VAR_3->lun_offset = VAR_3->ch_offset + VAR_3->ch_len;
 VAR_3->pg_offset = VAR_3->lun_offset + VAR_3->lun_len;
 VAR_3->blk_offset = VAR_3->pg_offset + VAR_3->pg_len;

 VAR_3->sec_mask = ((1ULL << VAR_3->sec_len) - 1) << VAR_3->sec_offset;
 VAR_3->pln_mask = ((1ULL << VAR_3->pln_len) - 1) << VAR_3->pln_offset;
 VAR_3->ch_mask = ((1ULL << VAR_3->ch_len) - 1) << VAR_3->ch_offset;
 VAR_3->lun_mask = ((1ULL << VAR_3->lun_len) - 1) << VAR_3->lun_offset;
 VAR_3->pg_mask = ((1ULL << VAR_3->pg_len) - 1) << VAR_3->pg_offset;
 VAR_3->blk_mask = ((1ULL << VAR_3->blk_len) - 1) << VAR_3->blk_offset;

 return VAR_3->blk_offset + VAR_4->blk_len;
}
