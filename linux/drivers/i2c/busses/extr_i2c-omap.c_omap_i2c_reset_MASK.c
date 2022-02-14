
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {scalar_t__ rev; scalar_t__ bb_valid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct omap_i2c_dev*,int ) ;
 int FUNC_3 (struct omap_i2c_dev*,int ,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct omap_i2c_dev *VAR_11)
{
 unsigned long VAR_12;
 u16 VAR_13;

 if (VAR_11->rev >= VAR_3) {
  VAR_13 = FUNC_2(VAR_11, VAR_5);


  FUNC_3(VAR_11, VAR_2,
   FUNC_2(VAR_11, VAR_2) &
    ~(VAR_1));

  FUNC_3(VAR_11, VAR_5, VAR_8);


  VAR_12 = VAR_10 + VAR_7;
  FUNC_3(VAR_11, VAR_2, VAR_1);
  while (!(FUNC_2(VAR_11, VAR_6) &
    VAR_9)) {
   if (FUNC_4(VAR_10, VAR_12)) {
    FUNC_0(VAR_11->dev, "timeout waiting "
      "for controller reset\n");
    return -VAR_0;
   }
   FUNC_1(1);
  }


  FUNC_3(VAR_11, VAR_5, VAR_13);

  if (VAR_11->rev > VAR_4) {

   VAR_11->bb_valid = 0;
  }
 }

 return 0;
}
