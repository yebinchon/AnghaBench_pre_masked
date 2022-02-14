
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int comp; int kref; } ;
struct qib_pportdata {int sdma_sw_clean_up_task; int sdma_activelist; int sdma_userpending; scalar_t__ sdma_intrequest; scalar_t__ sdma_descq_added; scalar_t__ sdma_descq_removed; scalar_t__ sdma_descq_head; scalar_t__ sdma_generation; TYPE_1__ sdma_state; int sdma_lock; struct qib_devdata* dd; } ;
struct qib_devdata {int (* f_init_sdma_regs ) (struct qib_pportdata*) ;int (* f_sdma_init_early ) (struct qib_pportdata*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct qib_pportdata*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct qib_pportdata*) ;
 int FUNC_6 (struct qib_pportdata*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct qib_pportdata*) ;
 int FUNC_10 (struct qib_pportdata*) ;
 int FUNC_11 (int *,int ,unsigned long) ;

int FUNC_12(struct qib_pportdata *VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_3->dd;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  goto bail;


 VAR_3->dd->f_sdma_init_early(VAR_3);
 FUNC_7(&VAR_3->sdma_lock, VAR_5);
 FUNC_6(VAR_3, VAR_1);
 FUNC_8(&VAR_3->sdma_lock, VAR_5);


 FUNC_3(&VAR_3->sdma_state.kref);
 FUNC_2(&VAR_3->sdma_state.comp);

 VAR_3->sdma_generation = 0;
 VAR_3->sdma_descq_head = 0;
 VAR_3->sdma_descq_removed = 0;
 VAR_3->sdma_descq_added = 0;

 VAR_3->sdma_intrequest = 0;
 FUNC_0(&VAR_3->sdma_userpending);

 FUNC_0(&VAR_3->sdma_activelist);

 FUNC_11(&VAR_3->sdma_sw_clean_up_task, VAR_2,
  (unsigned long)VAR_3);

 VAR_6 = VAR_4->f_init_sdma_regs(VAR_3);
 if (VAR_6)
  goto bail_alloc;

 FUNC_4(VAR_3, VAR_0);

 return 0;

bail_alloc:
 FUNC_5(VAR_3);
bail:
 return VAR_6;
}
