
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_addrf {int ch_offset; int ch_len; int lun_offset; int lun_len; int chk_offset; int chk_len; int sec_offset; int sec_len; } ;
struct pblk {int addrf_len; struct nvm_addrf addrf; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ version; struct nvm_addrf addrf; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_addrf_12 {int blk_offset; int blk_len; int pg_offset; int pg_len; int lun_offset; int lun_len; int ch_offset; int ch_len; int pln_offset; int pln_len; int sec_offset; int sec_len; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int,int,int,int,int,int,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct pblk *VAR_2, char *VAR_3)
{
 struct nvm_tgt_dev *VAR_4 = VAR_2->dev;
 struct nvm_geo *VAR_5 = &VAR_4->geo;
 ssize_t VAR_6 = 0;

 if (VAR_5->version == VAR_0) {
  struct nvm_addrf_12 *VAR_7 = (struct nvm_addrf_12 *)&VAR_2->addrf;
  struct nvm_addrf_12 *VAR_8 = (struct nvm_addrf_12 *)&VAR_5->addrf;

  VAR_6 = FUNC_0(VAR_3, VAR_1,
   "g:(b:%d)blk:%d/%d,pg:%d/%d,lun:%d/%d,ch:%d/%d,pl:%d/%d,sec:%d/%d\n",
   VAR_2->addrf_len,
   VAR_7->blk_offset, VAR_7->blk_len,
   VAR_7->pg_offset, VAR_7->pg_len,
   VAR_7->lun_offset, VAR_7->lun_len,
   VAR_7->ch_offset, VAR_7->ch_len,
   VAR_7->pln_offset, VAR_7->pln_len,
   VAR_7->sec_offset, VAR_7->sec_len);

  VAR_6 += FUNC_0(VAR_3 + VAR_6, VAR_1 - VAR_6,
   "d:blk:%d/%d,pg:%d/%d,lun:%d/%d,ch:%d/%d,pl:%d/%d,sec:%d/%d\n",
   VAR_8->blk_offset, VAR_8->blk_len,
   VAR_8->pg_offset, VAR_8->pg_len,
   VAR_8->lun_offset, VAR_8->lun_len,
   VAR_8->ch_offset, VAR_8->ch_len,
   VAR_8->pln_offset, VAR_8->pln_len,
   VAR_8->sec_offset, VAR_8->sec_len);
 } else {
  struct nvm_addrf *VAR_9 = &VAR_2->addrf;
  struct nvm_addrf *VAR_10 = &VAR_5->addrf;

  VAR_6 = FUNC_0(VAR_3, VAR_1,
   "pblk:(s:%d)ch:%d/%d,lun:%d/%d,chk:%d/%d/sec:%d/%d\n",
   VAR_2->addrf_len,
   VAR_9->ch_offset, VAR_9->ch_len,
   VAR_9->lun_offset, VAR_9->lun_len,
   VAR_9->chk_offset, VAR_9->chk_len,
   VAR_9->sec_offset, VAR_9->sec_len);

  VAR_6 += FUNC_0(VAR_3 + VAR_6, VAR_1 - VAR_6,
   "device:ch:%d/%d,lun:%d/%d,chk:%d/%d,sec:%d/%d\n",
   VAR_10->ch_offset, VAR_10->ch_len,
   VAR_10->lun_offset, VAR_10->lun_len,
   VAR_10->chk_offset, VAR_10->chk_len,
   VAR_10->sec_offset, VAR_10->sec_len);
 }

 return VAR_6;
}
