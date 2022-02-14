
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct omap_i2c_dev*,int) ;
 int FUNC_2 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct omap_i2c_dev *VAR_3, u16 VAR_4)
{







 if (VAR_4 & VAR_1) {

  FUNC_1(VAR_3, VAR_1);


  if (!(FUNC_2(VAR_3, VAR_2)
      & VAR_0)) {


   if (FUNC_2(VAR_3, VAR_2)
      & VAR_1) {
    FUNC_1(VAR_3, VAR_1);
    FUNC_0(VAR_3->dev, "RDR when bus is busy.\n");
   }

  }
 }
}
