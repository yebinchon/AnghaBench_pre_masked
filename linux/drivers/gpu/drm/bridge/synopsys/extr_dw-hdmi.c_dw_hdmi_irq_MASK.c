
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct dw_hdmi {TYPE_1__ bridge; int dev; int cec_notifier_mutex; int cec_notifier; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dw_hdmi*,int,int) ;
 int FUNC_4 (struct dw_hdmi*,int,int,int ) ;
 int FUNC_5 (struct dw_hdmi*,int ) ;
 int FUNC_6 (struct dw_hdmi*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_17, void *VAR_18)
{
 struct dw_hdmi *VAR_19 = VAR_18;
 u8 VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_20 = FUNC_5(VAR_19, VAR_1);
 VAR_21 = FUNC_5(VAR_19, VAR_9);
 VAR_23 = FUNC_5(VAR_19, VAR_15);

 VAR_22 = 0;
 if (VAR_20 & VAR_2)
  VAR_22 |= VAR_8;
 if (VAR_20 & VAR_4)
  VAR_22 |= VAR_11;
 if (VAR_20 & VAR_5)
  VAR_22 |= VAR_12;
 if (VAR_20 & VAR_6)
  VAR_22 |= VAR_13;
 if (VAR_20 & VAR_7)
  VAR_22 |= VAR_14;

 if (VAR_22)
  FUNC_4(VAR_19, ~VAR_21, VAR_22, VAR_9);
 if (VAR_20 &
     (VAR_3 | VAR_2)) {
  FUNC_3(VAR_19,
           VAR_23 & VAR_8,
           VAR_23 & VAR_10);

  if ((VAR_23 & (VAR_10 | VAR_8)) == 0) {
   FUNC_7(&VAR_19->cec_notifier_mutex);
   FUNC_0(VAR_19->cec_notifier);
   FUNC_8(&VAR_19->cec_notifier_mutex);
  }
 }

 if (VAR_20 & VAR_2) {
  FUNC_1(VAR_19->dev, "EVENT=%s\n",
   VAR_21 & VAR_8 ? "plugin" : "plugout");
  if (VAR_19->bridge.dev)
   FUNC_2(VAR_19->bridge.dev);
 }

 FUNC_6(VAR_19, VAR_20, VAR_1);
 FUNC_6(VAR_19, ~(VAR_2 | VAR_3),
      VAR_0);

 return VAR_16;
}
