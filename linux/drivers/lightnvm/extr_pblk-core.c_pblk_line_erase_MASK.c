
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int blk; } ;
struct ppa_addr {TYPE_2__ a; } ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int id; int lock; int erase_bitmap; int left_eblks; } ;
struct pblk {TYPE_1__* luns; struct pblk_line_meta lm; } ;
struct TYPE_3__ {struct ppa_addr bppa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct pblk*,struct ppa_addr) ;
 int FUNC_4 (struct pblk*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 struct pblk_line_meta *VAR_2 = &VAR_0->lm;
 struct ppa_addr VAR_3;
 int VAR_4, VAR_5 = -1;


 do {
  FUNC_5(&VAR_1->lock);
  VAR_5 = FUNC_2(VAR_1->erase_bitmap, VAR_2->blk_per_line,
        VAR_5 + 1);
  if (VAR_5 >= VAR_2->blk_per_line) {
   FUNC_6(&VAR_1->lock);
   break;
  }

  VAR_3 = VAR_0->luns[VAR_5].bppa;
  VAR_3.a.blk = VAR_1->id;

  FUNC_1(&VAR_1->left_eblks);
  FUNC_0(FUNC_7(VAR_5, VAR_1->erase_bitmap));
  FUNC_6(&VAR_1->lock);

  VAR_4 = FUNC_3(VAR_0, VAR_3);
  if (VAR_4) {
   FUNC_4(VAR_0, "failed to erase line %d\n", VAR_1->id);
   return VAR_4;
  }
 } while (1);

 return 0;
}
