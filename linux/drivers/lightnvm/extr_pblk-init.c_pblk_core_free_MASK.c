
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int pad_dist; int w_rq_pool; int e_rq_pool; int r_rq_pool; int rec_pool; int gen_ws_pool; int page_bio_pool; scalar_t__ bb_wq; scalar_t__ r_end_wq; scalar_t__ close_wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pblk *VAR_0)
{
 if (VAR_0->close_wq)
  FUNC_0(VAR_0->close_wq);

 if (VAR_0->r_end_wq)
  FUNC_0(VAR_0->r_end_wq);

 if (VAR_0->bb_wq)
  FUNC_0(VAR_0->bb_wq);

 FUNC_2(&VAR_0->page_bio_pool);
 FUNC_2(&VAR_0->gen_ws_pool);
 FUNC_2(&VAR_0->rec_pool);
 FUNC_2(&VAR_0->r_rq_pool);
 FUNC_2(&VAR_0->e_rq_pool);
 FUNC_2(&VAR_0->w_rq_pool);

 FUNC_3();
 FUNC_1(VAR_0->pad_dist);
}
