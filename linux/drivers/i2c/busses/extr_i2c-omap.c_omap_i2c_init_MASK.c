
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {scalar_t__ rev; int flags; int speed; int iestate; int pscstate; int scllstate; int sclhstate; int bb_valid; scalar_t__ fifo_size; int dev; int westate; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct omap_i2c_dev*) ;
 struct clk* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct omap_i2c_dev *VAR_14)
{
 u16 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u16 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 unsigned long VAR_22 = 12000000;
 unsigned long VAR_23 = 0;
 struct clk *VAR_24;
 int VAR_25;

 if (VAR_14->rev >= VAR_10) {





  VAR_14->westate = VAR_13;
 }

 if (VAR_14->flags & VAR_0) {






  VAR_24 = FUNC_3(VAR_14->dev, "fck");
  if (FUNC_0(VAR_24)) {
   VAR_25 = FUNC_1(VAR_24);
   FUNC_6(VAR_14->dev, "could not get fck: %i\n", VAR_25);

   return VAR_25;
  }

  VAR_22 = FUNC_4(VAR_24);
  FUNC_5(VAR_24);
  if (VAR_22 > 12000000)
   VAR_15 = VAR_22 / 12000000;
 }

 if (!(VAR_14->flags & VAR_2)) {







  if (VAR_14->speed > 400 ||
          VAR_14->flags & VAR_1)
   VAR_23 = 19200;
  else if (VAR_14->speed > 100)
   VAR_23 = 9600;
  else
   VAR_23 = 4000;
  VAR_24 = FUNC_3(VAR_14->dev, "fck");
  if (FUNC_0(VAR_24)) {
   VAR_25 = FUNC_1(VAR_24);
   FUNC_6(VAR_14->dev, "could not get fck: %i\n", VAR_25);

   return VAR_25;
  }
  VAR_22 = FUNC_4(VAR_24) / 1000;
  FUNC_5(VAR_24);


  VAR_15 = VAR_22 / VAR_23;
  VAR_15 = VAR_15 - 1;


  if (VAR_14->speed > 400) {
   unsigned long VAR_26;


   VAR_26 = VAR_23 / 400;
   VAR_18 = VAR_26 - (VAR_26 / 3) - 7;
   VAR_19 = (VAR_26 / 3) - 5;


   VAR_26 = VAR_22 / VAR_14->speed;
   VAR_20 = VAR_26 - (VAR_26 / 3) - 7;
   VAR_21 = (VAR_26 / 3) - 5;
  } else if (VAR_14->speed > 100) {
   unsigned long VAR_27;


   VAR_27 = VAR_23 / VAR_14->speed;
   VAR_18 = VAR_27 - (VAR_27 / 3) - 7;
   VAR_19 = (VAR_27 / 3) - 5;
  } else {

   VAR_18 = VAR_23 / (VAR_14->speed * 2) - 7;
   VAR_19 = VAR_23 / (VAR_14->speed * 2) - 5;
  }
  VAR_16 = (VAR_20 << VAR_12) | VAR_18;
  VAR_17 = (VAR_21 << VAR_11) | VAR_19;
 } else {

  VAR_22 /= (VAR_15 + 1) * 1000;
  if (VAR_15 > 2)
   VAR_15 = 2;
  VAR_16 = VAR_22 / (VAR_14->speed * 2) - 7 + VAR_15;
  VAR_17 = VAR_22 / (VAR_14->speed * 2) - 7 + VAR_15;
 }

 VAR_14->iestate = (VAR_9 | VAR_7 |
   VAR_4 | VAR_5 |
   VAR_3) | ((VAR_14->fifo_size) ?
    (VAR_6 | VAR_8) : 0);

 VAR_14->pscstate = VAR_15;
 VAR_14->scllstate = VAR_16;
 VAR_14->sclhstate = VAR_17;

 if (VAR_14->rev <= VAR_10) {

  VAR_14->bb_valid = 1;
 }

 FUNC_2(VAR_14);

 return 0;
}
