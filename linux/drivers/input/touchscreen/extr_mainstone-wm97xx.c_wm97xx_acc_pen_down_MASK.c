
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int) ;
 size_t VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_5(struct wm97xx *VAR_17)
{
 u16 VAR_18, VAR_19, VAR_20 = 0x100 | VAR_9;
 int VAR_21 = 0;






 FUNC_4(1);

 if (VAR_16 > 5) {
  VAR_16 = 0;
  return VAR_7;
 }

 VAR_18 = VAR_4;
 if (VAR_18 == VAR_13) {
  VAR_16++;
  return VAR_5;
 }
 VAR_13 = VAR_18;
 do {
  if (VAR_21)
   VAR_18 = VAR_4;
  VAR_19 = VAR_4;
  if (VAR_14)
   VAR_20 = VAR_4;

  FUNC_0(VAR_17->dev, "Raw coordinates: x=%x, y=%x, p=%x\n",
   VAR_18, VAR_19, VAR_20);


  if ((VAR_18 & VAR_8) != VAR_10 ||
      (VAR_19 & VAR_8) != VAR_11 ||
      (VAR_20 & VAR_8) != VAR_9)
   goto up;


  VAR_16 = 0;
  FUNC_1(VAR_17->input_dev, VAR_1, VAR_18 & 0xfff);
  FUNC_1(VAR_17->input_dev, VAR_2, VAR_19 & 0xfff);
  FUNC_1(VAR_17->input_dev, VAR_0, VAR_20 & 0xfff);
  FUNC_2(VAR_17->input_dev, VAR_3, (VAR_20 != 0));
  FUNC_3(VAR_17->input_dev);
  VAR_21++;
 } while (VAR_21 < VAR_12[VAR_15].reads);
up:
 return VAR_6 | VAR_5;
}
