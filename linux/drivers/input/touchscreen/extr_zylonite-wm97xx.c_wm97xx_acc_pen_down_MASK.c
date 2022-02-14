
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int input_dev; int dev; } ;
struct TYPE_2__ {int reads; } ;


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
 TYPE_1__* VAR_12 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static int FUNC_5(struct wm97xx *VAR_15)
{
 u16 VAR_16, VAR_17, VAR_18 = 0x100 | VAR_9;
 int VAR_19 = 0;
 static u16 VAR_20, VAR_21;






 FUNC_4(1);

 if (VAR_21 > 5) {
  VAR_21 = 0;
  return VAR_7;
 }

 VAR_16 = VAR_4;
 if (VAR_16 == VAR_20) {
  VAR_21++;
  return VAR_5;
 }
 VAR_20 = VAR_16;
 do {
  if (VAR_19)
   VAR_16 = VAR_4;
  VAR_17 = VAR_4;
  if (VAR_13)
   VAR_18 = VAR_4;

  FUNC_0(VAR_15->dev, "Raw coordinates: x=%x, y=%x, p=%x\n",
   VAR_16, VAR_17, VAR_18);


  if ((VAR_16 & VAR_8) != VAR_10 ||
      (VAR_17 & VAR_8) != VAR_11 ||
      (VAR_18 & VAR_8) != VAR_9)
   goto up;


  VAR_21 = 0;
  FUNC_1(VAR_15->input_dev, VAR_1, VAR_16 & 0xfff);
  FUNC_1(VAR_15->input_dev, VAR_2, VAR_17 & 0xfff);
  FUNC_1(VAR_15->input_dev, VAR_0, VAR_18 & 0xfff);
  FUNC_2(VAR_15->input_dev, VAR_3, (VAR_18 != 0));
  FUNC_3(VAR_15->input_dev);
  VAR_19++;
 } while (VAR_19 < VAR_12[VAR_14].reads);
up:
 return VAR_6 | VAR_5;
}
