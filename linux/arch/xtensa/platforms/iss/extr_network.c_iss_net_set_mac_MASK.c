
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct iss_net_private {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct iss_net_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct iss_net_private *VAR_4 = FUNC_2(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;
 FUNC_3(&VAR_4->lock);
 FUNC_1(VAR_2->dev_addr, VAR_5->sa_data, VAR_1);
 FUNC_4(&VAR_4->lock);
 return 0;
}
