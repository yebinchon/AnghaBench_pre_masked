
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct flexcop_device {int (* i2c_request ) (int *,int ,int,int,int*,int) ;int * fc_i2c_adap; } ;
typedef int flexcop_access_op_t ;


 int FUNC_0 (int *,int ,int,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct flexcop_device *VAR_0,
 flexcop_access_op_t VAR_1, u16 VAR_2, u8 *VAR_3, u16 VAR_4, int VAR_5)
{
 int VAR_6,VAR_7 = 0;
 u8 VAR_8 = 0x50 | ((VAR_2 >> 8) & 3);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = VAR_0->i2c_request(&VAR_0->fc_i2c_adap[1], VAR_1, VAR_8,
   VAR_2 & 0xff, VAR_3, VAR_4);
  if (VAR_7 == 0)
   break;
 }
 return VAR_7;
}
