
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line {int left_seblks; struct nvm_chk_meta* chks; } ;
struct pblk {int inflight_io; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int ppa_addr; scalar_t__ error; } ;
struct nvm_chk_meta {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*,struct pblk_line*,int ) ;
 struct pblk_line* FUNC_3 (struct pblk*,int ) ;
 int FUNC_4 (struct nvm_geo*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct pblk *VAR_4, struct nvm_rq *VAR_5)
{
 struct nvm_tgt_dev *VAR_6 = VAR_4->dev;
 struct nvm_geo *VAR_7 = &VAR_6->geo;
 struct nvm_chk_meta *VAR_8;
 struct pblk_line *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_4, VAR_5->ppa_addr);
 VAR_10 = FUNC_4(VAR_7, VAR_5->ppa_addr);
 VAR_8 = &VAR_9->chks[VAR_10];

 FUNC_0(&VAR_9->left_seblks);

 if (VAR_5->error) {
  FUNC_5(FUNC_1(VAR_4),
    &VAR_5->ppa_addr, VAR_3);

  VAR_8->state = VAR_1;
  FUNC_2(VAR_4, VAR_9, VAR_5->ppa_addr);
 } else {
  FUNC_5(FUNC_1(VAR_4),
    &VAR_5->ppa_addr, VAR_2);

  VAR_8->state = VAR_0;
 }

 FUNC_6(FUNC_1(VAR_4), &VAR_5->ppa_addr,
    VAR_8->state);

 FUNC_0(&VAR_4->inflight_io);
}
