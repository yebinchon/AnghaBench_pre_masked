
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short addr; } ;
struct psmouse_smbus_dev {int client; TYPE_1__ board; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_adapter*,TYPE_1__*,unsigned short*,int *) ;
 struct i2c_adapter* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, void *VAR_3)
{
 struct psmouse_smbus_dev *VAR_4 = VAR_3;
 unsigned short VAR_5[] = { VAR_4->board.addr, VAR_0 };
 struct i2c_adapter *VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6)
  return 0;

 if (!FUNC_0(VAR_6, VAR_1))
  return 0;

 VAR_4->client = FUNC_1(VAR_6, &VAR_4->board,
            VAR_5, ((void*)0));
 if (!VAR_4->client)
  return 0;


 return 1;
}
