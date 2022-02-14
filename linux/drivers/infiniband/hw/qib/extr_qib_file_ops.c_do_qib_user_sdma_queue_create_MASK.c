
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_filedata {int pq; int subctxt; struct qib_ctxtdata* rcd; } ;
struct qib_devdata {int flags; int unit; TYPE_1__* pcidev; } ;
struct qib_ctxtdata {int ctxt; struct qib_devdata* dd; } ;
struct file {struct qib_filedata* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2)
{
 struct qib_filedata *VAR_3 = VAR_2->private_data;
 struct qib_ctxtdata *VAR_4 = VAR_3->rcd;
 struct qib_devdata *VAR_5 = VAR_4->dd;

 if (VAR_5->flags & VAR_1) {

  VAR_3->pq = FUNC_0(&VAR_5->pcidev->dev,
          VAR_5->unit,
          VAR_4->ctxt,
          VAR_3->subctxt);
  if (!VAR_3->pq)
   return -VAR_0;
 }

 return 0;
}
