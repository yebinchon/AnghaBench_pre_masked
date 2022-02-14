
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfi1_devdata {TYPE_3__* cr_base; TYPE_1__* pcidev; } ;
struct credit_return {int dummy; } ;
struct TYPE_6__ {int dma; scalar_t__ va; } ;
struct TYPE_5__ {int num_possible_nodes; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_1 ;

void FUNC_2(struct hfi1_devdata *VAR_2)
{
 int VAR_3;

 if (!VAR_2->cr_base)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1.num_possible_nodes; VAR_3++) {
  if (VAR_2->cr_base[VAR_3].va) {
   FUNC_0(&VAR_2->pcidev->dev,
       VAR_0 *
       sizeof(struct credit_return),
       VAR_2->cr_base[VAR_3].va,
       VAR_2->cr_base[VAR_3].dma);
  }
 }
 FUNC_1(VAR_2->cr_base);
 VAR_2->cr_base = ((void*)0);
}
