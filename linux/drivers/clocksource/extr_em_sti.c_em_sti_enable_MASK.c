
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em_sti_priv {TYPE_1__* pdev; int clk; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct em_sti_priv*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct em_sti_priv *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5->clk);
 if (VAR_6) {
  FUNC_1(&VAR_5->pdev->dev, "cannot enable clock\n");
  return VAR_6;
 }


 FUNC_2(VAR_5, VAR_3, 0x40000000);
 FUNC_2(VAR_5, VAR_4, 0x00000000);


 FUNC_2(VAR_5, VAR_1, 3);
 FUNC_2(VAR_5, VAR_2, 3);


 FUNC_2(VAR_5, VAR_0, 1);

 return 0;
}
