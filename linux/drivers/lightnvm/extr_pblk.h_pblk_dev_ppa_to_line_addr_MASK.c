
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int sec; scalar_t__ pu; scalar_t__ grp; } ;
struct TYPE_3__ {scalar_t__ sec; scalar_t__ pl; scalar_t__ pg; scalar_t__ lun; scalar_t__ ch; } ;
struct ppa_addr {TYPE_2__ m; TYPE_1__ g; } ;
struct pblk_addrf {int sec_stripe; int sec_lun_stripe; int sec_ws_stripe; } ;
struct pblk {struct pblk_addrf uaddrf; int addrf; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ version; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_addrf_12 {int ch_offset; int lun_offset; int pg_offset; int pln_offset; int sec_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int*) ;

__attribute__((used)) static inline u64 FUNC_1(struct pblk *VAR_1,
       struct ppa_addr VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_1->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 u64 VAR_5;

 if (VAR_4->version == VAR_0) {
  struct nvm_addrf_12 *VAR_6 = (struct nvm_addrf_12 *)&VAR_1->addrf;

  VAR_5 = (u64)VAR_2.g.ch << VAR_6->ch_offset;
  VAR_5 |= (u64)VAR_2.g.lun << VAR_6->lun_offset;
  VAR_5 |= (u64)VAR_2.g.pg << VAR_6->pg_offset;
  VAR_5 |= (u64)VAR_2.g.pl << VAR_6->pln_offset;
  VAR_5 |= (u64)VAR_2.g.sec << VAR_6->sec_offset;
 } else {
  struct pblk_addrf *VAR_7 = &VAR_1->uaddrf;
  u64 VAR_8 = VAR_2.m.sec;
  int VAR_9;

  VAR_5 = (u64)VAR_2.m.grp * VAR_7->sec_stripe;
  VAR_5 += (u64)VAR_2.m.pu * VAR_7->sec_lun_stripe;

  VAR_8 = FUNC_0(VAR_8, VAR_7->sec_stripe, &VAR_9);
  VAR_5 += VAR_8 * VAR_7->sec_ws_stripe;
  VAR_5 += VAR_9;
 }

 return VAR_5;
}
