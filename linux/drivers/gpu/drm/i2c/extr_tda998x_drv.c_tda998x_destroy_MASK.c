
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda998x_priv {scalar_t__ cec_notify; int cec; int detect_work; int edid_delay_timer; TYPE_1__* hdmi; scalar_t__ audio_pdev; int bridge; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tda998x_priv*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct tda998x_priv* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,struct tda998x_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct tda998x_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_3)
{
 struct tda998x_priv *VAR_4 = FUNC_4(VAR_3);

 FUNC_5(&VAR_4->bridge);


 FUNC_2(VAR_4, VAR_1, 0);
 FUNC_9(VAR_4, VAR_2, VAR_0);

 if (VAR_4->audio_pdev)
  FUNC_8(VAR_4->audio_pdev);

 if (VAR_4->hdmi->irq)
  FUNC_6(VAR_4->hdmi->irq, VAR_4);

 FUNC_3(&VAR_4->edid_delay_timer);
 FUNC_0(&VAR_4->detect_work);

 FUNC_7(VAR_4->cec);

 if (VAR_4->cec_notify)
  FUNC_1(VAR_4->cec_notify);
}
