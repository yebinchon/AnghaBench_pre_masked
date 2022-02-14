
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_lun {int wr_sem; int bppa; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ num_lun; int all_luns; int num_ch; } ;
struct nvm_tgt_dev {int * luns; struct nvm_geo geo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pblk_lun* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct pblk*,char*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct pblk *VAR_3)
{
 struct nvm_tgt_dev *VAR_4 = VAR_3->dev;
 struct nvm_geo *VAR_5 = &VAR_4->geo;
 struct pblk_lun *VAR_6;
 int VAR_7;


 if (VAR_5->num_lun < 0) {
  FUNC_1(VAR_3, "unbalanced LUN config.\n");
  return -VAR_0;
 }

 VAR_3->luns = FUNC_0(VAR_5->all_luns, sizeof(struct pblk_lun),
        VAR_2);
 if (!VAR_3->luns)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5->all_luns; VAR_7++) {

  int VAR_8 = VAR_7 % VAR_5->num_ch;
  int VAR_9 = VAR_7 / VAR_5->num_ch;
  int VAR_10 = VAR_9 + VAR_8 * VAR_5->num_lun;

  VAR_6 = &VAR_3->luns[VAR_7];
  VAR_6->bppa = VAR_4->luns[VAR_10];

  FUNC_2(&VAR_6->wr_sem, 1);
 }

 return 0;
}
