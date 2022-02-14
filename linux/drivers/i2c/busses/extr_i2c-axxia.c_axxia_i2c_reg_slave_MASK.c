
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int flags; int addr; int adapter; } ;
struct axxia_i2c_dev {scalar_t__ base; struct i2c_client* slave; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct axxia_i2c_dev* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_20)
{
 struct axxia_i2c_dev *VAR_21 = FUNC_0(VAR_20->adapter);
 u32 VAR_22 = VAR_15;
 u32 VAR_23;

 if (VAR_21->slave)
  return -VAR_0;

 VAR_21->slave = VAR_20;


 FUNC_1(VAR_2 | VAR_3, VAR_21->base + VAR_1);
 FUNC_1(VAR_6 | VAR_7, VAR_21->base + VAR_5);


 VAR_23 = VAR_10;
 if (VAR_20->flags & VAR_4)
  VAR_23 |= VAR_11;

 FUNC_1(VAR_13, VAR_21->base + VAR_14);
 FUNC_1(VAR_23, VAR_21->base + VAR_9);
 FUNC_1(VAR_20->addr, VAR_21->base + VAR_8);


 VAR_22 |= VAR_19 | VAR_18 | VAR_17;
 VAR_22 |= VAR_16;
 FUNC_1(VAR_22, VAR_21->base + VAR_12);

 return 0;
}
