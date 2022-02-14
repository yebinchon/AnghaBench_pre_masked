
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pie_status {int lock_mtx; int aqm_pie_callout; } ;
struct fq_pie_flow {struct pie_status pst; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,struct fq_pie_flow*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct fq_pie_flow *VAR_2)
{
 struct pie_status *VAR_3 = &VAR_2->pst;

 FUNC_1(&VAR_3->lock_mtx);
 FUNC_0(&VAR_3->aqm_pie_callout,
  VAR_0, 0, VAR_1, VAR_2, 0);
 FUNC_2(&VAR_3->lock_mtx);
 return 0;
}
