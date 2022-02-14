
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nforce2_smbus {scalar_t__ blockops; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct i2c_adapter *VAR_6)
{

 return VAR_4 | VAR_1 |
        VAR_2 | VAR_5 |
        VAR_3 |
        (((struct nforce2_smbus *)VAR_6->algo_data)->blockops ?
  VAR_0 : 0);
}
