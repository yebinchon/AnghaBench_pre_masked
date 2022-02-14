
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {int clk; } ;
struct navpoint {int gpio; int dev; struct ssp_device* ssp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ssp_device*,int ) ;
 int FUNC_6 (struct ssp_device*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(struct navpoint *VAR_8)
{
 struct ssp_device *VAR_9 = VAR_8->ssp;
 int VAR_10;

 FUNC_0(VAR_9->clk);

 FUNC_6(VAR_9, VAR_1, VAR_6);
 FUNC_6(VAR_9, VAR_2, VAR_7);
 FUNC_6(VAR_9, VAR_4, 0);
 FUNC_6(VAR_9, VAR_0, VAR_5);


 for (VAR_10 = 100; VAR_10 != 0; --VAR_10) {
  if (!(FUNC_5(VAR_9, VAR_2) & VAR_3))
   break;
  FUNC_4(1);
 }

 if (VAR_10 == 0)
  FUNC_1(VAR_8->dev,
   "timeout waiting for SSSR[CSS] to clear\n");

 if (FUNC_2(VAR_8->gpio))
  FUNC_3(VAR_8->gpio, 1);
}
