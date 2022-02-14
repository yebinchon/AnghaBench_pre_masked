
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch; int lun; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct pblk_lun {TYPE_2__ bppa; int wr_sem; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int all_luns; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct pblk *VAR_1, char *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_1->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct pblk_lun *VAR_5;
 ssize_t VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->all_luns; VAR_7++) {
  int VAR_8 = 1;

  VAR_5 = &VAR_1->luns[VAR_7];
  if (!FUNC_0(&VAR_5->wr_sem)) {
   VAR_8 = 0;
   FUNC_2(&VAR_5->wr_sem);
  }
  VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_0 - VAR_6,
    "pblk: pos:%d, ch:%d, lun:%d - %d\n",
     VAR_7,
     VAR_5->bppa.a.ch,
     VAR_5->bppa.a.lun,
     VAR_8);
 }

 return VAR_6;
}
