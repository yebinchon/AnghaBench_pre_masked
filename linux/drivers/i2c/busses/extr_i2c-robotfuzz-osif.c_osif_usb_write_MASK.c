
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osif_priv {int usb_dev; } ;
struct i2c_adapter {struct osif_priv* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int,void*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2, int VAR_3,
     int VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{

 struct osif_priv *VAR_8 = VAR_2->algo_data;

 return FUNC_0(VAR_8->usb_dev, FUNC_1(VAR_8->usb_dev, 0),
          VAR_3, VAR_1 | VAR_0,
          VAR_4, VAR_5, VAR_6, VAR_7, 2000);
}
