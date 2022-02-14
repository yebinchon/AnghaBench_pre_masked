
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct hdmi_wp_data {int dummy; } ;
struct omap_hdmi {TYPE_1__ core; struct hdmi_wp_data wp; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hdmi_wp_data*) ;
 int FUNC_3 (struct hdmi_wp_data*,int) ;
 int FUNC_4 (struct hdmi_wp_data*,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct omap_hdmi *VAR_10 = VAR_9;
 struct hdmi_wp_data *VAR_11 = &VAR_10->wp;
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_11);
 FUNC_3(VAR_11, VAR_12);

 if ((VAR_12 & VAR_2) &&
   VAR_12 & VAR_3) {






  FUNC_4(VAR_11, VAR_5);

  FUNC_3(VAR_11, VAR_2 |
    VAR_3);

  FUNC_4(VAR_11, VAR_4);
 } else if (VAR_12 & VAR_2) {
  FUNC_4(VAR_11, VAR_6);
 } else if (VAR_12 & VAR_3) {
  FUNC_4(VAR_11, VAR_4);
 }
 if (VAR_12 & VAR_1) {
  u32 VAR_13 = FUNC_1(VAR_10->core.base, VAR_0);

  FUNC_5(VAR_10->core.base, VAR_0, VAR_13);
  if (VAR_13 & 8)
   FUNC_0(&VAR_10->core);
 }

 return VAR_7;
}
