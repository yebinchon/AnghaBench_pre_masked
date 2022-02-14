
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int host_notify_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned short) ;

int FUNC_2(struct i2c_adapter *VAR_2, unsigned short VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2->host_notify_domain, VAR_3);
 if (VAR_4 <= 0)
  return -VAR_1;

 FUNC_0(VAR_4);

 return 0;
}
