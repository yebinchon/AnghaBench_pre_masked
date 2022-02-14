
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int name; } ;
struct device {int dummy; } ;


 int i2c_unregister_device (struct i2c_client*) ;
 struct i2c_client* i2c_verify_client (struct device*) ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int __unregister_client(struct device *dev, void *dummy)
{
 struct i2c_client *client = i2c_verify_client(dev);
 if (client && strcmp(client->name, "dummy"))
  i2c_unregister_device(client);
 return 0;
}
