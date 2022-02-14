
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnxt_re_dev {int num_msix; int * nq; TYPE_2__* msix_entries; TYPE_1__* en_dev; int qplib_res; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct bnxt_re_dev*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct bnxt_re_dev*) ;

__attribute__((used)) static int FUNC_6(struct bnxt_re_dev *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0, VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_2->qplib_res);

 for (VAR_5 = 1; VAR_5 < VAR_2->num_msix ; VAR_5++) {
  VAR_6 = FUNC_3(VAR_2, VAR_5);
  VAR_4 = FUNC_1(VAR_2->en_dev->pdev, &VAR_2->nq[VAR_5 - 1],
       VAR_5 - 1, VAR_2->msix_entries[VAR_5].vector,
       VAR_6, &VAR_0,
       &VAR_1);
  if (VAR_4) {
   FUNC_4(FUNC_5(VAR_2),
    "Failed to enable NQ with rc = 0x%x", VAR_4);
   goto fail;
  }
  VAR_3++;
 }
 return 0;
fail:
 for (VAR_5 = VAR_3; VAR_5 >= 0; VAR_5--)
  FUNC_0(&VAR_2->nq[VAR_5]);
 return VAR_4;
}
