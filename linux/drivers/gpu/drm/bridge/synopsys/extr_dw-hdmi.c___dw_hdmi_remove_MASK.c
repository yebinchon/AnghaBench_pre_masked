
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_hdmi {int ddc; TYPE_1__* i2c; scalar_t__ cec_clk; scalar_t__ isfr_clk; scalar_t__ iahb_clk; scalar_t__ cec; scalar_t__ audio; } ;
struct TYPE_2__ {int adap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dw_hdmi*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dw_hdmi *VAR_1)
{
 if (VAR_1->audio && !FUNC_0(VAR_1->audio))
  FUNC_5(VAR_1->audio);
 if (!FUNC_0(VAR_1->cec))
  FUNC_5(VAR_1->cec);


 FUNC_2(VAR_1, ~0, VAR_0);

 FUNC_1(VAR_1->iahb_clk);
 FUNC_1(VAR_1->isfr_clk);
 if (VAR_1->cec_clk)
  FUNC_1(VAR_1->cec_clk);

 if (VAR_1->i2c)
  FUNC_3(&VAR_1->i2c->adap);
 else
  FUNC_4(VAR_1->ddc);
}
