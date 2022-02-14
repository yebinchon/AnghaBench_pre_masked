
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 struct dvb_frontend* FUNC_0 (struct dvb_frontend*,struct i2c_adapter*,int ,int ,int,int ) ;

struct dvb_frontend *FUNC_1(struct dvb_frontend *VAR_1,
    struct i2c_adapter *VAR_2, u8 VAR_3,
    u8 VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
       0x08, VAR_0);
}
