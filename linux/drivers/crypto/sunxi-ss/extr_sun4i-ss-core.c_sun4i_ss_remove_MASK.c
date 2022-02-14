
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sun4i_ss_ctx {int ssclk; int busclk; scalar_t__ reset; scalar_t__ base; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int rng; int hash; int crypto; } ;
struct TYPE_5__ {int type; TYPE_1__ alg; } ;


 int FUNC_0 (TYPE_2__*) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sun4i_ss_ctx* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 int VAR_3;
 struct sun4i_ss_ctx *VAR_4 = FUNC_5(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  switch (VAR_1[VAR_3].type) {
  case 128:
   FUNC_4(&VAR_1[VAR_3].alg.crypto);
   break;
  case 130:
   FUNC_2(&VAR_1[VAR_3].alg.hash);
   break;
  case 129:
   FUNC_3(&VAR_1[VAR_3].alg.rng);
   break;
  }
 }

 FUNC_7(0, VAR_4->base + VAR_0);
 if (VAR_4->reset)
  FUNC_6(VAR_4->reset);
 FUNC_1(VAR_4->busclk);
 FUNC_1(VAR_4->ssclk);
 return 0;
}
