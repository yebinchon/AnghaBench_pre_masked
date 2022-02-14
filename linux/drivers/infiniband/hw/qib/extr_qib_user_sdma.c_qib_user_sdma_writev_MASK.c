
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {scalar_t__ added; int counter; int lock; scalar_t__ num_sending; } ;
struct qib_pportdata {scalar_t__ sdma_descq_removed; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct qib_ctxtdata {struct qib_pportdata* ppd; struct qib_devdata* dd; } ;
struct list_head {int dummy; } ;
struct iovec {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qib_pportdata*) ;
 int FUNC_5 (struct qib_pportdata*) ;
 int FUNC_6 (int *,struct qib_user_sdma_queue*,struct list_head*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (struct qib_pportdata*,struct qib_user_sdma_queue*,struct list_head*,int) ;
 int FUNC_9 (struct qib_pportdata*,struct qib_user_sdma_queue*) ;
 int FUNC_10 (struct qib_devdata*,struct qib_pportdata*,struct qib_user_sdma_queue*,struct iovec const*,unsigned long,struct list_head*,int*,int*) ;

int FUNC_11(struct qib_ctxtdata *VAR_0,
    struct qib_user_sdma_queue *VAR_1,
    const struct iovec *VAR_2,
    unsigned long VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_0->dd;
 struct qib_pportdata *VAR_5 = VAR_0->ppd;
 int VAR_6 = 0;
 struct list_head VAR_7;
 int VAR_8 = 0;

 FUNC_0(&VAR_7);

 FUNC_2(&VAR_1->lock);


 if (!FUNC_5(VAR_5))
  goto done_unlock;


 if (VAR_1->added > VAR_5->sdma_descq_removed)
  FUNC_7(VAR_5);

 if (VAR_1->num_sending)
  FUNC_9(VAR_5, VAR_1);

 while (VAR_3) {
  int VAR_9 = 1;
  int VAR_10 = 0;

  VAR_6 = FUNC_10(VAR_4, VAR_5, VAR_1,
    VAR_2, VAR_3, &VAR_7, &VAR_9, &VAR_10);
  if (VAR_6 < 0)
   goto done_unlock;
  else {
   VAR_3 -= VAR_6;
   VAR_2 += VAR_6;
  }


  if (!FUNC_1(&VAR_7)) {



   if (FUNC_4(VAR_5) < VAR_10) {
    FUNC_7(VAR_5);
    if (VAR_1->num_sending)
     FUNC_9(VAR_5, VAR_1);
   }

   VAR_6 = FUNC_8(VAR_5, VAR_1, &VAR_7, VAR_9);
   if (VAR_6 < 0)
    goto done_unlock;
   else {
    VAR_8 += VAR_9;
    VAR_1->counter += VAR_9;
   }
  }
 }

done_unlock:
 if (!FUNC_1(&VAR_7))
  FUNC_6(&VAR_4->pcidev->dev, VAR_1, &VAR_7);
 FUNC_3(&VAR_1->lock);

 return (VAR_6 < 0) ? VAR_6 : VAR_8;
}
