
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {int nr_free_lines; } ;
struct pblk_line_meta {int smeta_sec; int* emeta_sec; } ;
struct TYPE_2__ {int total_blocks; int free_user_blocks; int free_blocks; } ;
struct pblk {scalar_t__ op; int op_blks; int min_write_pgs; int min_write_pgs_data; int capacity; TYPE_1__ rl; struct pblk_line_meta lm; struct pblk_line_mgmt l_mg; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ op; int clba; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct pblk*,char*) ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (struct pblk*,char*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct pblk *VAR_3, int VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_3->dev;
 struct pblk_line_mgmt *VAR_6 = &VAR_3->l_mg;
 struct pblk_line_meta *VAR_7 = &VAR_3->lm;
 struct nvm_geo *VAR_8 = &VAR_5->geo;
 sector_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (VAR_8->op == VAR_1)
  VAR_3->op = VAR_2;
 else
  VAR_3->op = VAR_8->op;

 VAR_13 = FUNC_3(VAR_3);
 VAR_9 = VAR_4;
 VAR_9 *= (100 - VAR_3->op);
 FUNC_5(VAR_9, 100);

 if ((VAR_4 - VAR_9) < VAR_13) {
  if (VAR_8->op != VAR_1) {
   FUNC_2(VAR_3, "OP too small to create a sane instance\n");
   return -VAR_0;
  }





  VAR_9 = VAR_4 - VAR_13;
  VAR_3->op = (100 * VAR_13) / VAR_4;
  FUNC_4(VAR_3, "Default OP insufficient, adjusting OP to %d\n",
    VAR_3->op);
 }

 VAR_3->op_blks = VAR_4 - VAR_9;




 VAR_3->rl.total_blocks = VAR_4;


 VAR_10 = (VAR_7->smeta_sec + VAR_7->emeta_sec[0]) * VAR_6->nr_free_lines;
 VAR_11 = FUNC_0(VAR_10, VAR_8->clba);

 VAR_12 = (VAR_8->clba / VAR_3->min_write_pgs) * VAR_3->min_write_pgs_data;
 VAR_3->capacity = (VAR_9 - VAR_11) * VAR_12;

 FUNC_1(&VAR_3->rl.free_blocks, VAR_4);
 FUNC_1(&VAR_3->rl.free_user_blocks, VAR_4);

 return 0;
}
