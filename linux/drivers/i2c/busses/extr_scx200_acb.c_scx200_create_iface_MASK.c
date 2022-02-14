
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {int class; TYPE_1__ dev; int * algo; int owner; int name; } ;
struct scx200_acb_iface {int mutex; struct i2c_adapter adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,struct scx200_acb_iface*) ;
 struct scx200_acb_iface* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,char*,char const*,int) ;

__attribute__((used)) static struct scx200_acb_iface *FUNC_4(const char *VAR_5,
  struct device *VAR_6, int VAR_7)
{
 struct scx200_acb_iface *VAR_8;
 struct i2c_adapter *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = &VAR_8->adapter;
 FUNC_0(VAR_9, VAR_8);
 FUNC_3(VAR_9->name, sizeof(VAR_9->name), "%s ACB%d", VAR_5, VAR_7);
 VAR_9->owner = VAR_3;
 VAR_9->algo = &VAR_4;
 VAR_9->class = VAR_1 | VAR_2;
 VAR_9->dev.parent = VAR_6;

 FUNC_2(&VAR_8->mutex);

 return VAR_8;
}
