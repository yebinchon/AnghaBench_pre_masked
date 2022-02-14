
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ dev_addr; } ;
struct i40iw_device {struct net_device* netdev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (struct i40iw_device*) ;
 int FUNC_1 (struct i40iw_device*) ;
 int FUNC_2 (struct i40iw_device*,int *) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_device *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 enum i40iw_status_code VAR_2;

 VAR_2 = FUNC_2(VAR_0, (u8 *)VAR_1->dev_addr);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 return 0;
}
