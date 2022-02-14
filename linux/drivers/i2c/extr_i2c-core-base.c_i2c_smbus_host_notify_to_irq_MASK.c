
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int host_notify_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct i2c_client *VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_3->adapter;
 unsigned int VAR_5;

 if (!VAR_4->host_notify_domain)
  return -VAR_1;

 if (VAR_3->flags & VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4->host_notify_domain, VAR_3->addr);

 return VAR_5 > 0 ? VAR_5 : -VAR_1;
}
