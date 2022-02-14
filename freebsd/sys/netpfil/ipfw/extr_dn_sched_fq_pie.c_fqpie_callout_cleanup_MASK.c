
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pie_status {int lock_mtx; } ;
struct fq_pie_si_extra {struct fq_pie_si_extra* flows; int nr_active_q; } ;
struct fq_pie_flow {struct fq_pie_si_extra* psi_extra; struct pie_status pst; } ;
struct TYPE_2__ {int ref_count; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct fq_pie_si_extra*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct fq_pie_flow *VAR_3 = VAR_2;
 struct pie_status *VAR_4 = &VAR_3->pst;
 struct fq_pie_si_extra *VAR_5;

 FUNC_4(&VAR_4->lock_mtx);
 FUNC_3(&VAR_4->lock_mtx);
 VAR_5 = VAR_3->psi_extra;

 FUNC_0();
 VAR_5->nr_active_q--;


 if (!VAR_5->nr_active_q) {
  FUNC_2(VAR_5->flows, VAR_0);
  FUNC_2(VAR_5, VAR_0);
  VAR_1.ref_count--;
 }
 FUNC_1();
}
