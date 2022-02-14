
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct rdma_dev_addr {int net; scalar_t__ bound_dev_if; } ;
struct net_device {int if_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ,int ,int ) ;
 struct net_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rdma_dev_addr*,struct net_device*,int *) ;

int FUNC_5(const struct sockaddr *VAR_3,
        struct rdma_dev_addr *VAR_4)
{
 struct net_device *VAR_5;
 int VAR_6;

 if (VAR_4->bound_dev_if) {
  VAR_5 = FUNC_0(VAR_4->net, VAR_4->bound_dev_if);
 } else switch (VAR_3->sa_family) {
 default:
  VAR_5 = ((void*)0);
  break;
 }

 if (VAR_5 != ((void*)0)) {

  if (VAR_5->if_flags & VAR_2)
   VAR_6 = -VAR_0;
  else
   VAR_6 = FUNC_4(VAR_4, VAR_5, ((void*)0));
  FUNC_1(VAR_5);
 } else {
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
