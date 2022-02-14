
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; struct net_device* dev; } ;
struct net_device {int rx_handler_data; } ;
typedef int rx_handler_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

rx_handler_result_t FUNC_5(struct sk_buff **VAR_4)
{
 struct net_device *VAR_5;
 struct sk_buff *VAR_6 = *VAR_4;

 VAR_5 = FUNC_2(VAR_6->dev->rx_handler_data);
 if (!VAR_5)
  return VAR_3;

 if (VAR_6->protocol == FUNC_1(VAR_1))
  return VAR_3;

 FUNC_4(VAR_6, VAR_0);
 VAR_6->dev = VAR_5;
 FUNC_3(VAR_6);
 FUNC_0(VAR_6);

 return VAR_2;
}
