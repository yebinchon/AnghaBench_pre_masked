
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int irq; scalar_t__ kauai_fcr; int aapl_bus_id; int node; } ;
typedef TYPE_1__ pmac_ide_hwif_t ;
struct TYPE_7__ {int (* feature_call ) (int ,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(pmac_ide_hwif_t *VAR_6)
{

 if (!FUNC_3(VAR_6)) {
  VAR_5.feature_call(VAR_4, VAR_6->node, VAR_6->aapl_bus_id, 1);
  VAR_5.feature_call(VAR_3, VAR_6->node, VAR_6->aapl_bus_id, 1);
  FUNC_2(10);
  VAR_5.feature_call(VAR_4, VAR_6->node, VAR_6->aapl_bus_id, 0);


  if (VAR_6->kauai_fcr) {
   u32 VAR_7 = FUNC_4(VAR_6->kauai_fcr);
   VAR_7 |= VAR_2 | VAR_1;
   FUNC_9(VAR_7, VAR_6->kauai_fcr);
  }

  FUNC_2(FUNC_1(VAR_0));
 }


 FUNC_5(VAR_6);

 FUNC_0(VAR_6->irq);

 return 0;
}
