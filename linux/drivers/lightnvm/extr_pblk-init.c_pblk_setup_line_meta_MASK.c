
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int nr_free_lines; int free_list; int bad_list; int * vsc_list; } ;
struct pblk_line_meta {long blk_per_line; long min_blk_line; } ;
struct pblk_line {int id; int list; int blk_in_line; int state; int lock; int * vsc; int gc_group; int type; struct pblk* pblk; } ;
struct pblk {struct pblk_line_meta lm; struct pblk_line_mgmt l_mg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *,int *) ;
 long FUNC_2 (struct pblk*,struct pblk_line*,void*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long FUNC_4(struct pblk *VAR_4, struct pblk_line *VAR_5,
     void *VAR_6, int VAR_7)
{
 struct pblk_line_mgmt *VAR_8 = &VAR_4->l_mg;
 struct pblk_line_meta *VAR_9 = &VAR_4->lm;
 long VAR_10, VAR_11;

 VAR_5->pblk = VAR_4;
 VAR_5->id = VAR_7;
 VAR_5->type = VAR_3;
 VAR_5->state = VAR_2;
 VAR_5->gc_group = VAR_0;
 VAR_5->vsc = &VAR_8->vsc_list[VAR_7];
 FUNC_3(&VAR_5->lock);

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_11 = VAR_9->blk_per_line - VAR_10;
 if (VAR_10 < 0 || VAR_10 > VAR_9->blk_per_line ||
     VAR_11 < VAR_9->min_blk_line) {
  VAR_5->state = VAR_1;
  FUNC_1(&VAR_5->list, &VAR_8->bad_list);
  return 0;
 }

 FUNC_0(&VAR_5->blk_in_line, VAR_11);
 FUNC_1(&VAR_5->list, &VAR_8->free_list);
 VAR_8->nr_free_lines++;

 return VAR_11;
}
