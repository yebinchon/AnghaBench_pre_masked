
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osif_priv {int usb_dev; } ;
struct i2c_adapter {struct osif_priv* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int,int,void*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_3, int VAR_4,
    int VAR_5, int VAR_6, void *VAR_7, int VAR_8)
{
 struct osif_priv *VAR_9 = VAR_3->algo_data;

 return FUNC_0(VAR_9->usb_dev, FUNC_1(VAR_9->usb_dev, 0),
          VAR_4, VAR_2 | VAR_1 |
          VAR_0, VAR_5, VAR_6, VAR_7, VAR_8, 2000);
}
