
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct hdmi_wp_data {int dummy; } ;
struct omap_hdmi {TYPE_1__ phy; struct hdmi_wp_data wp; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hdmi_wp_data*) ;
 int FUNC_4 (struct hdmi_wp_data*,int) ;
 int FUNC_5 (struct hdmi_wp_data*,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct omap_hdmi *VAR_9 = VAR_8;
 struct hdmi_wp_data *VAR_10 = &VAR_9->wp;
 u32 VAR_11;

 VAR_11 = FUNC_3(VAR_10);
 FUNC_4(VAR_10, VAR_11);

 if ((VAR_11 & VAR_0) &&
   VAR_11 & VAR_1) {
  u32 VAR_12;







  FUNC_5(VAR_10, VAR_3);






  VAR_12 = FUNC_2(VAR_9->phy.base, VAR_5);
  VAR_12 = FUNC_0(VAR_12, 1, 15, 15);
  VAR_12 = FUNC_0(VAR_12, 0, 14, 7);
  FUNC_6(VAR_9->phy.base, VAR_5, VAR_12);

  FUNC_4(VAR_10, VAR_0 |
    VAR_1);

  FUNC_5(VAR_10, VAR_2);

  FUNC_1(VAR_9->phy.base, VAR_5, 0, 15, 15);

 } else if (VAR_11 & VAR_0) {
  FUNC_5(VAR_10, VAR_4);
 } else if (VAR_11 & VAR_1) {
  FUNC_5(VAR_10, VAR_2);
 }

 return VAR_6;
}
