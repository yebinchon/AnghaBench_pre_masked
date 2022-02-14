
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_cryp {int dev; int gcm_ctr; TYPE_1__* areq; } ;
struct TYPE_2__ {int iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct stm32_cryp*,int*) ;
 int FUNC_4 (struct stm32_cryp*) ;
 int FUNC_5 (struct stm32_cryp*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_cryp *VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7[4];


 FUNC_2(VAR_7, VAR_4->areq->iv, 12);
 VAR_7[3] = FUNC_0(VAR_3);
 VAR_4->gcm_ctr = VAR_3;
 FUNC_3(VAR_4, VAR_7);

 FUNC_5(VAR_4, VAR_0, VAR_5 | VAR_2 | VAR_1);


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  FUNC_1(VAR_4->dev, "Timeout (gcm init)\n");

 return VAR_6;
}
