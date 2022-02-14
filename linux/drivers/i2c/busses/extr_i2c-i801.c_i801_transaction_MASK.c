
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int timeout; } ;
struct i801_priv {int features; int status; TYPE_1__* pci_dev; int waitq; struct i2c_adapter adapter; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i801_priv*,int) ;
 int FUNC_3 (struct i801_priv*) ;
 int FUNC_4 (struct i801_priv*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i801_priv *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 const struct i2c_adapter *VAR_8 = &VAR_4->adapter;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4->features & VAR_1) {
  FUNC_5(VAR_5 | VAR_2 | VAR_3,
         FUNC_0(VAR_4));
  VAR_7 = FUNC_6(VAR_4->waitq,
         (VAR_6 = VAR_4->status),
         VAR_8->timeout);
  if (!VAR_7) {
   VAR_6 = -VAR_0;
   FUNC_1(&VAR_4->pci_dev->dev,
     "Timeout waiting for interrupt!\n");
  }
  VAR_4->status = 0;
  return FUNC_2(VAR_4, VAR_6);
 }



 FUNC_5(VAR_5 | VAR_3, FUNC_0(VAR_4));

 VAR_6 = FUNC_4(VAR_4);
 return FUNC_2(VAR_4, VAR_6);
}
