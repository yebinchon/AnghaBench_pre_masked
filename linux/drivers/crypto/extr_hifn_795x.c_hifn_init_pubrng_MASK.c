
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_device {int dmareg; int rngtime; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hifn_device*,int ) ;
 int FUNC_3 (struct hifn_device*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct hifn_device *VAR_9)
{
 int VAR_10;

 FUNC_3(VAR_9, VAR_2, FUNC_2(VAR_9, VAR_2) |
   VAR_7);

 for (VAR_10 = 100; VAR_10 > 0; --VAR_10) {
  FUNC_5(1);

  if ((FUNC_2(VAR_9, VAR_2) & VAR_7) == 0)
   break;
 }

 if (!VAR_10) {
  FUNC_1(&VAR_9->pdev->dev, "Failed to initialise public key engine.\n");
 } else {
  FUNC_3(VAR_9, VAR_1, VAR_6);
  VAR_9->dmareg |= VAR_5;
  FUNC_3(VAR_9, VAR_0, VAR_9->dmareg);

  FUNC_0(&VAR_9->pdev->dev, "Public key engine has been successfully initialised.\n");
 }



 FUNC_3(VAR_9, VAR_3,
   FUNC_2(VAR_9, VAR_3) | VAR_8);
 FUNC_0(&VAR_9->pdev->dev, "RNG engine has been successfully initialised.\n");






 return 0;
}
