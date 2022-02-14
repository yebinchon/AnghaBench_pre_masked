
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct papr_scm_priv {int drc_index; TYPE_1__* pdev; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,unsigned long*,int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct papr_scm_priv *VAR_4)
{
 unsigned long VAR_5[VAR_3];
 uint64_t VAR_6 = 0;
 int64_t VAR_7;

 FUNC_2(&VAR_4->pdev->dev, "unbind drc 0x%x\n", VAR_4->drc_index);


 do {


  VAR_7 = FUNC_6(VAR_1, VAR_5, VAR_2,
     VAR_4->drc_index, VAR_6);
  VAR_6 = VAR_5[0];


  if (FUNC_0(VAR_7)) {
   FUNC_5(FUNC_4(VAR_7));
   VAR_7 = VAR_0;
  } else if (VAR_7 == VAR_0) {
   FUNC_1();
  }

 } while (VAR_7 == VAR_0);

 if (VAR_7)
  FUNC_3(&VAR_4->pdev->dev, "unbind error: %lld\n", VAR_7);
 else
  FUNC_2(&VAR_4->pdev->dev, "unbind drc 0x%x complete\n",
   VAR_4->drc_index);

 return;
}
