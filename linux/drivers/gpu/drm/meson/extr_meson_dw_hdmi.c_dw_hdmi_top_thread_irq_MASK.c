
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct meson_dw_hdmi {int irq_stat; TYPE_1__ encoder; int hdmi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct meson_dw_hdmi *VAR_5 = VAR_4;
 u32 VAR_6 = VAR_5->irq_stat;


 if (VAR_6 & (VAR_1 | VAR_0)) {
  bool VAR_7 = 0;

  if (VAR_6 & VAR_1)
   VAR_7 = 1;

  FUNC_1(VAR_5->hdmi, VAR_7,
           VAR_7);

  FUNC_0(VAR_5->encoder.dev);
 }

 return VAR_2;
}
