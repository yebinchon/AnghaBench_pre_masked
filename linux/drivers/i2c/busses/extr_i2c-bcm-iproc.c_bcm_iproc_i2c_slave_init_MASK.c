
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm_iproc_i2c_dev {TYPE_1__* slave; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int ) ;
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
 int VAR_17 ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*,int ) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(
 struct bcm_iproc_i2c_dev *VAR_18, bool VAR_19)
{
 u32 VAR_20;

 if (VAR_19) {

  VAR_20 = FUNC_1(VAR_18, VAR_0);
  VAR_20 |= FUNC_0(VAR_1);
  FUNC_2(VAR_18, VAR_0, VAR_20);


  FUNC_3(100);


  VAR_20 &= ~(FUNC_0(VAR_1));
  FUNC_2(VAR_18, VAR_0, VAR_20);
 }


 VAR_20 = (FUNC_0(VAR_13) | FUNC_0(VAR_14));
 FUNC_2(VAR_18, VAR_12, VAR_20);


 VAR_20 = FUNC_1(VAR_18, VAR_15);
 VAR_20 &= ~(VAR_16 << VAR_17);
 VAR_20 |= (VAR_7 << VAR_17);
 FUNC_2(VAR_18, VAR_15, VAR_20);


 VAR_20 = FUNC_1(VAR_18, VAR_11);
 VAR_20 |= FUNC_0(VAR_8);
 VAR_20 &= ~(VAR_9 << VAR_10);
 VAR_20 |= (VAR_18->slave->addr << VAR_10);
 FUNC_2(VAR_18, VAR_11, VAR_20);


 FUNC_2(VAR_18, VAR_6, VAR_5);


 VAR_20 = FUNC_0(VAR_3);

 VAR_20 |= FUNC_0(VAR_4);
 FUNC_2(VAR_18, VAR_2, VAR_20);
}
