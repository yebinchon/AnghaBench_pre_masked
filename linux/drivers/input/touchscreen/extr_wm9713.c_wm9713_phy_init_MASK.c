
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm97xx {int misc; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct wm97xx*,int) ;
 int FUNC_6 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct wm97xx *VAR_15)
{
 u16 VAR_16 = 0, VAR_17, VAR_18;


 VAR_17 = FUNC_1(4) | FUNC_2(5);
 VAR_18 = FUNC_0(1);


 if (VAR_14) {
  VAR_18 &= 0xffc0;
  VAR_18 |= FUNC_0(VAR_14);
  FUNC_3(VAR_15->dev, "setting pen detect pull-up to %d Ohms\n",
    64000 / VAR_14);
 }


 if (VAR_10) {
  VAR_18 |= VAR_5;
  FUNC_3(VAR_15->dev, "setting 5-wire touchscreen mode.");

  if (VAR_12) {
   FUNC_4(VAR_15->dev,
     "Pressure measurement not supported in 5 "
     "wire mode, disabling\n");
   VAR_12 = 0;
  }
 }


 if (VAR_12 == 2) {
  VAR_18 |= VAR_4;
  FUNC_3(VAR_15->dev,
    "setting pressure measurement current to 400uA.");
 } else if (VAR_12)
  FUNC_3(VAR_15->dev,
    "setting pressure measurement current to 200uA.");
 if (!VAR_12)
  VAR_13 = 0;


 if (VAR_8 < 0 || VAR_8 > 15) {
  FUNC_3(VAR_15->dev, "supplied delay out of range.");
  VAR_8 = 4;
  FUNC_3(VAR_15->dev, "setting adc sample delay to %d u Secs.",
    VAR_9[VAR_8]);
 }
 VAR_17 &= 0xff0f;
 VAR_17 |= FUNC_1(VAR_8);


 VAR_18 |= ((VAR_11 & 0x3) << 4);
 if (VAR_7)
  VAR_18 |= VAR_6;

 VAR_15->misc = FUNC_5(VAR_15, 0x5a);

 FUNC_6(VAR_15, VAR_1, VAR_16);
 FUNC_6(VAR_15, VAR_2, VAR_17);
 FUNC_6(VAR_15, VAR_3, VAR_18);
 FUNC_6(VAR_15, VAR_0, 0x0);
}
