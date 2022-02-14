
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde {int dev; scalar_t__ regs; scalar_t__ te_sync; int mdsi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mcde*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mcde*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mcde *VAR_3)
{

 if (VAR_3->te_sync)
  FUNC_2(VAR_3->mdsi);


 FUNC_3(VAR_3, VAR_2);

 if (VAR_3->te_sync) {






  FUNC_0(VAR_3->dev, "sent TE0 framebuffer update\n");
  return;
 }


 FUNC_4(VAR_1,
        VAR_3->regs + VAR_0);
 FUNC_1(VAR_3, VAR_2, 1);

 FUNC_0(VAR_3->dev, "sent SW framebuffer update\n");
}
