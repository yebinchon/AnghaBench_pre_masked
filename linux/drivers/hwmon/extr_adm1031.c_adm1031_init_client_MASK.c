
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adm1031_data {scalar_t__ chip_type; int update_interval; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int) ;
 struct adm1031_data* FUNC_2 (struct i2c_client*) ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 struct adm1031_data *VAR_16 = FUNC_2(VAR_12);

 VAR_14 = (VAR_1 | VAR_3);
 if (VAR_16->chip_type == VAR_10) {
  VAR_14 |= (VAR_2 |
   VAR_4);
 }

 VAR_13 = FUNC_0(VAR_12, VAR_6);
 if ((VAR_13 | VAR_14) != VAR_13)
  FUNC_1(VAR_12, VAR_6, VAR_13 | VAR_14);

 VAR_13 = FUNC_0(VAR_12, VAR_5);
 if ((VAR_13 | VAR_0) != VAR_13) {
  FUNC_1(VAR_12, VAR_5,
        VAR_13 | VAR_0);
 }


 VAR_14 = VAR_8;
 VAR_13 = FUNC_0(VAR_12, VAR_7);
 VAR_15 = (VAR_13 & VAR_14) >> VAR_9;

 VAR_16->update_interval = VAR_11[VAR_15];
}
