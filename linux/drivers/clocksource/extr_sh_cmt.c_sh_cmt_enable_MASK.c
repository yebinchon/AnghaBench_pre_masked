
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_cmt_channel {TYPE_3__* cmt; int index; } ;
struct TYPE_6__ {int clk; TYPE_2__* pdev; TYPE_1__* info; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sh_cmt_channel*) ;
 int FUNC_6 (struct sh_cmt_channel*,int) ;
 int FUNC_7 (struct sh_cmt_channel*,int ) ;
 int FUNC_8 (struct sh_cmt_channel*,int) ;
 int FUNC_9 (struct sh_cmt_channel*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sh_cmt_channel *VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_4(&VAR_7->cmt->pdev->dev);
 FUNC_3(&VAR_7->cmt->pdev->dev, 1);


 VAR_9 = FUNC_1(VAR_7->cmt->clk);
 if (VAR_9) {
  FUNC_2(&VAR_7->cmt->pdev->dev, "ch%u: cannot enable clock\n",
   VAR_7->index);
  goto err0;
 }


 FUNC_6(VAR_7, 0);


 if (VAR_7->cmt->info->width == 16) {
  FUNC_9(VAR_7, VAR_2 |
       VAR_1);
 } else {
  FUNC_9(VAR_7, VAR_4 |
       VAR_6 |
       VAR_5 |
       VAR_3);
 }

 FUNC_8(VAR_7, 0xffffffff);
 FUNC_7(VAR_7, 0);
 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  if (!FUNC_5(VAR_7))
   break;
  FUNC_10(1);
 }

 if (FUNC_5(VAR_7)) {
  FUNC_2(&VAR_7->cmt->pdev->dev, "ch%u: cannot clear CMCNT\n",
   VAR_7->index);
  VAR_9 = -VAR_0;
  goto err1;
 }


 FUNC_6(VAR_7, 1);
 return 0;
 err1:

 FUNC_0(VAR_7->cmt->clk);

 err0:
 return VAR_9;
}
