
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct meson_dw_hdmi {int irq_stat; TYPE_1__* data; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* top_read ) (struct meson_dw_hdmi*,int ) ;int (* top_write ) (struct meson_dw_hdmi*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct meson_dw_hdmi*,int ) ;
 int FUNC_1 (struct meson_dw_hdmi*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_7, void *VAR_8)
{
 struct meson_dw_hdmi *VAR_9 = VAR_8;
 u32 VAR_10;

 VAR_10 = VAR_9->data->top_read(VAR_9, VAR_2);
 VAR_9->data->top_write(VAR_9, VAR_3, VAR_10);


 if (VAR_10 & (VAR_1 | VAR_0)) {
  VAR_9->irq_stat = VAR_10;
  return VAR_6;
 }


 if (VAR_10 & 1)
  return VAR_5;



 return VAR_4;
}
