
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i801_priv {int features; } ;
struct i2c_adapter {int dummy; } ;


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
 struct i801_priv* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_14)
{
 struct i801_priv *VAR_15 = FUNC_0(VAR_14);

 return VAR_10 | VAR_6 |
        VAR_7 | VAR_12 |
        VAR_4 | VAR_13 |
        ((VAR_15->features & VAR_3) ? VAR_9 : 0) |
        ((VAR_15->features & VAR_0) ?
  VAR_5 : 0) |
        ((VAR_15->features & VAR_2) ?
  VAR_11 : 0) |
        ((VAR_15->features & VAR_1) ?
  VAR_8 : 0);
}
