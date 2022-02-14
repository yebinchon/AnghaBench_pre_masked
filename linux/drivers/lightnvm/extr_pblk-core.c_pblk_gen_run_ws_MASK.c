
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct pblk_line_ws {int ws; void* priv; struct pblk_line* line; struct pblk* pblk; } ;
struct pblk_line {int dummy; } ;
struct pblk {int gen_ws_pool; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 struct pblk_line_ws* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct workqueue_struct*,int *) ;

void FUNC_3(struct pblk *VAR_0, struct pblk_line *VAR_1, void *VAR_2,
        void (*VAR_3)(struct work_struct *), gfp_t VAR_4,
        struct workqueue_struct *VAR_5)
{
 struct pblk_line_ws *VAR_6;

 VAR_6 = FUNC_1(&VAR_0->gen_ws_pool, VAR_4);

 VAR_6->pblk = VAR_0;
 VAR_6->line = VAR_1;
 VAR_6->priv = VAR_2;

 FUNC_0(&VAR_6->ws, VAR_3);
 FUNC_2(VAR_5, &VAR_6->ws);
}
