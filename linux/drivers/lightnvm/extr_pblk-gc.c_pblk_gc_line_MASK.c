
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_ws {int ws; struct pblk_line* line; struct pblk* pblk; } ;
struct pblk_line {int id; } ;
struct pblk_gc {int gc_reader_wq; int pipeline_gc; } ;
struct pblk {struct pblk_gc gc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct pblk_line_ws* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pblk*,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct pblk_gc *VAR_5 = &VAR_3->gc;
 struct pblk_line_ws *VAR_6;

 FUNC_3(VAR_3, "line '%d' being reclaimed for GC\n", VAR_4->id);

 VAR_6 = FUNC_2(sizeof(struct pblk_line_ws), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pblk = VAR_3;
 VAR_6->line = VAR_4;

 FUNC_1(&VAR_5->pipeline_gc);
 FUNC_0(&VAR_6->ws, VAR_2);
 FUNC_4(VAR_5->gc_reader_wq, &VAR_6->ws);

 return 0;
}
