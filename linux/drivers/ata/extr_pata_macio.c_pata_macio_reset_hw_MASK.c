
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pata_macio_priv {scalar_t__ kind; scalar_t__ kauai_fcr; TYPE_2__* pdev; int aapl_bus_id; int node; scalar_t__ mediabay; int dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* feature_call ) (int ,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct pata_macio_priv *VAR_8, int VAR_9)
{
 FUNC_0(VAR_8->dev, "Enabling & resetting... \n");

 if (VAR_8->mediabay)
  return;

 if (VAR_8->kind == VAR_6 && !VAR_9) {




  VAR_7.feature_call(VAR_4, VAR_8->node, 0, 1);
 } else {
  int VAR_10;


  VAR_10 = VAR_7.feature_call(VAR_5,
      VAR_8->node, VAR_8->aapl_bus_id, 1);
  VAR_7.feature_call(VAR_4,
        VAR_8->node, VAR_8->aapl_bus_id, 1);
  FUNC_2(10);

  if (VAR_10 == 0) {
   VAR_7.feature_call(VAR_5,
         VAR_8->node, VAR_8->aapl_bus_id, 0);
   FUNC_2(VAR_0);
  }
 }


 if (VAR_8->pdev && VAR_9) {
  int VAR_11;

  FUNC_3(VAR_8->pdev);
  VAR_11 = FUNC_5(VAR_8->pdev);
  if (VAR_11)
   FUNC_1(&VAR_8->pdev->dev,
    "Failed to enable device after resume (%d)\n",
    VAR_11);
  else
   FUNC_4(VAR_8->pdev);
 }




 if (VAR_8->kauai_fcr)
  FUNC_10(VAR_2 |
         VAR_3 |
         VAR_1, VAR_8->kauai_fcr);
}
