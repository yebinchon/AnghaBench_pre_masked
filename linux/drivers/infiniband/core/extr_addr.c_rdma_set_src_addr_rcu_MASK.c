
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rdma_dev_addr {int dummy; } ;
struct net_device {unsigned int flags; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_dev_addr*,struct sockaddr const*,struct dst_entry const*,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (int ,struct sockaddr const*) ;

__attribute__((used)) static int FUNC_5(struct rdma_dev_addr *VAR_2,
     unsigned int *VAR_3,
     const struct sockaddr *VAR_4,
     const struct dst_entry *VAR_5)
{
 struct net_device *VAR_6 = FUNC_1(VAR_5->dev);

 *VAR_3 = VAR_6->flags;

 if (VAR_6->flags & VAR_1) {






  VAR_6 = FUNC_4(FUNC_3(VAR_6), VAR_4);
  if (FUNC_0(VAR_6))
   return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6);
}
