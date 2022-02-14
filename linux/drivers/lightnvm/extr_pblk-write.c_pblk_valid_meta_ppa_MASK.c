
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {scalar_t__ meta_distance; int blk_bitmap; } ;
struct pblk_c_ctx {int lun_bitmap; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int dummy; } ;


 struct ppa_addr FUNC_0 (struct pblk*,scalar_t__,int ) ;
 struct pblk_c_ctx* FUNC_1 (struct nvm_rq*) ;
 struct pblk_line* FUNC_2 (struct pblk*) ;
 scalar_t__ FUNC_3 (struct pblk*,struct pblk_line*) ;
 int FUNC_4 (struct ppa_addr,struct ppa_addr) ;
 int FUNC_5 (struct nvm_geo*,struct ppa_addr) ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static inline bool FUNC_8(struct pblk *VAR_0,
           struct pblk_line *VAR_1,
           struct nvm_rq *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_0->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct pblk_c_ctx *VAR_5 = FUNC_1(VAR_2);
 struct pblk_line *VAR_6 = FUNC_2(VAR_0);
 struct ppa_addr VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10;
 VAR_9 = FUNC_3(VAR_0, VAR_1);
 VAR_7 = FUNC_0(VAR_0, VAR_9, 0);
 VAR_8 = FUNC_0(VAR_0, VAR_9 + VAR_6->meta_distance, 0);
 VAR_10 = FUNC_5(VAR_4, VAR_8);

 if (FUNC_6(VAR_10, VAR_5->lun_bitmap) ||
    FUNC_6(VAR_10, VAR_6->blk_bitmap))
  return 1;

 if (FUNC_7(FUNC_4(VAR_8, VAR_7)))
  VAR_6->meta_distance--;

 return 0;
}
