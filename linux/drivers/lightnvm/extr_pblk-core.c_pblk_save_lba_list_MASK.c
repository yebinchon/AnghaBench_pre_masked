
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_err_gc {int lba_list; } ;
struct pblk_line_meta {unsigned int* emeta_len; } ;
struct pblk_line {struct pblk_emeta* emeta; struct pblk_w_err_gc* w_err_gc; } ;
struct pblk_emeta {int buf; } ;
struct pblk {struct pblk_line_meta lm; } ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct pblk_line_meta *VAR_3 = &VAR_1->lm;
 unsigned int VAR_4 = VAR_3->emeta_len[2];
 struct pblk_w_err_gc *VAR_5 = VAR_2->w_err_gc;
 struct pblk_emeta *VAR_6 = VAR_2->emeta;

 VAR_5->lba_list = FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_5->lba_list, FUNC_0(VAR_1, VAR_6->buf),
    VAR_4);
}
