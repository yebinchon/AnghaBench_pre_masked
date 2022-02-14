
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vz89x_data {int buffer; struct i2c_client* client; struct vz89x_chip_data* chip; } ;
struct vz89x_chip_data {int read_size; int write_size; } ;
struct i2c_msg {int flags; char* buf; int len; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct vz89x_data *VAR_1, u8 VAR_2)
{
 const struct vz89x_chip_data *VAR_3 = VAR_1->chip;
 struct i2c_client *VAR_4 = VAR_1->client;
 struct i2c_msg VAR_5[2];
 int VAR_6;
 u8 VAR_7[6] = { VAR_2, 0, 0, 0, 0, 0xf3 };

 VAR_5[0].addr = VAR_4->addr;
 VAR_5[0].flags = VAR_4->flags;
 VAR_5[0].len = VAR_3->write_size;
 VAR_5[0].buf = (char *) &VAR_7;

 VAR_5[1].addr = VAR_4->addr;
 VAR_5[1].flags = VAR_4->flags | VAR_0;
 VAR_5[1].len = VAR_3->read_size;
 VAR_5[1].buf = (char *) &VAR_1->buffer;

 VAR_6 = FUNC_0(VAR_4->adapter, VAR_5, 2);

 return (VAR_6 == 2) ? 0 : VAR_6;
}
