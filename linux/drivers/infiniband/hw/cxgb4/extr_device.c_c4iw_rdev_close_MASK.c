
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_rdev {int resource; int free_workq; int rqt_compl; int pbl_compl; scalar_t__ status_page; int uctx; int wr_log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct c4iw_rdev*) ;
 int FUNC_2 (struct c4iw_rdev*) ;
 int FUNC_3 (struct c4iw_rdev*,int *) ;
 int FUNC_4 (struct c4iw_rdev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct c4iw_rdev *VAR_0)
{
 FUNC_7(VAR_0->wr_log);
 FUNC_3(VAR_0, &VAR_0->uctx);
 FUNC_6((unsigned long)VAR_0->status_page);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_8(&VAR_0->pbl_compl);
 FUNC_8(&VAR_0->rqt_compl);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0->free_workq);
 FUNC_0(&VAR_0->resource);
}
