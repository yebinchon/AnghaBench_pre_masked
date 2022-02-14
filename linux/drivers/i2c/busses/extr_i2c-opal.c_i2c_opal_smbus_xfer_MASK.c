
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct opal_i2c_request {int subaddr_sz; void* type; void* subaddr; void* size; void* buffer_ra; int addr; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;
typedef int req ;


 int VAR_0 ;




 char VAR_1 ;

 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,struct opal_i2c_request*) ;
 int FUNC_5 (struct opal_i2c_request*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_6, u16 VAR_7,
          unsigned short VAR_8, char VAR_9,
          u8 VAR_10, int VAR_11, union i2c_smbus_data *VAR_12)
{
 unsigned long VAR_13 = (unsigned long)VAR_6->algo_data;
 struct opal_i2c_request VAR_14;
 u8 VAR_15[2];
 int VAR_16;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));

 VAR_14.addr = FUNC_1(VAR_7);
 switch (VAR_11) {
 case 132:
  VAR_14.buffer_ra = FUNC_3(FUNC_0(&VAR_12->byte));
  VAR_14.size = FUNC_2(1);

 case 129:
  VAR_14.type = (VAR_9 == VAR_1) ?
   VAR_2 : VAR_3;
  break;
 case 131:
  VAR_14.buffer_ra = FUNC_3(FUNC_0(&VAR_12->byte));
  VAR_14.size = FUNC_2(1);
  VAR_14.subaddr = FUNC_2(VAR_10);
  VAR_14.subaddr_sz = 1;
  VAR_14.type = (VAR_9 == VAR_1) ?
   VAR_4 : VAR_5;
  break;
 case 128:
  if (!VAR_9) {
   VAR_15[0] = VAR_12->word & 0xff;
   VAR_15[1] = (VAR_12->word >> 8) & 0xff;
  }
  VAR_14.buffer_ra = FUNC_3(FUNC_0(VAR_15));
  VAR_14.size = FUNC_2(2);
  VAR_14.subaddr = FUNC_2(VAR_10);
  VAR_14.subaddr_sz = 1;
  VAR_14.type = (VAR_9 == VAR_1) ?
   VAR_4 : VAR_5;
  break;
 case 130:
  VAR_14.buffer_ra = FUNC_3(FUNC_0(&VAR_12->block[1]));
  VAR_14.size = FUNC_2(VAR_12->block[0]);
  VAR_14.subaddr = FUNC_2(VAR_10);
  VAR_14.subaddr_sz = 1;
  VAR_14.type = (VAR_9 == VAR_1) ?
   VAR_4 : VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = FUNC_4(VAR_13, &VAR_14);
 if (!VAR_16 && VAR_9 && VAR_11 == 128) {
  VAR_12->word = ((u16)VAR_15[1]) << 8;
  VAR_12->word |= VAR_15[0];
 }

 return VAR_16;
}
