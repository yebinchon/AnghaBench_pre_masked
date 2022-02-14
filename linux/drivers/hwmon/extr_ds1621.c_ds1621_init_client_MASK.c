
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i2c_client {int dummy; } ;
struct ds1621_data {int kind; int zbits; int update_interval; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;



 int * VAR_9 ;

 size_t FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,size_t) ;
 int FUNC_2 (struct i2c_client*,int ,size_t) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct ds1621_data *VAR_11,
          struct i2c_client *VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_14 = VAR_13 = FUNC_0(VAR_12, VAR_2);

 VAR_14 &= ~VAR_3;


 if (VAR_10 == 0)
  VAR_14 &= ~VAR_4;
 else if (VAR_10 == 1)
  VAR_14 |= VAR_4;

 if (VAR_13 != VAR_14)
  FUNC_2(VAR_12, VAR_2, VAR_14);

 switch (VAR_11->kind) {
 case 131:
  VAR_11->update_interval = VAR_7;
  VAR_11->zbits = 7;
  VAR_15 = VAR_0;
  break;
 case 130:
 case 129:
 case 128:
  VAR_16 = (VAR_14 & VAR_5) >>
    VAR_6;
  VAR_11->update_interval = VAR_9[VAR_16];
  VAR_11->zbits = 7 - VAR_16;
  VAR_15 = VAR_8;
  break;
 default:
  VAR_11->update_interval = VAR_1;
  VAR_11->zbits = 7;
  VAR_15 = VAR_0;
  break;
 }


 FUNC_1(VAR_12, VAR_15);
}
