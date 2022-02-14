
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct rdma_dev_addr {int net; } ;
struct net_device {int dummy; } ;
struct epoch_tracker {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct sockaddr_in*,struct sockaddr_in const*,struct rdma_dev_addr*,int *,struct net_device**) ;
 int FUNC_3 (struct sockaddr_in6*,struct sockaddr_in6 const*,struct rdma_dev_addr*,int *,struct net_device**) ;
 int FUNC_4 (struct net_device*,struct sockaddr const*,int *,struct rdma_dev_addr*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct sockaddr *VAR_3,
   const struct sockaddr *VAR_4,
   struct rdma_dev_addr *VAR_5)
{
 struct epoch_tracker VAR_6;
 struct net_device *VAR_7 = ((void*)0);
 u8 VAR_8[VAR_2];
 int VAR_9;

 if (VAR_4->sa_family != VAR_3->sa_family)
  return -VAR_1;

 FUNC_0(VAR_6);
 switch (VAR_3->sa_family) {
 case 129:
  VAR_9 = FUNC_2((struct sockaddr_in *)VAR_3,
        (const struct sockaddr_in *)VAR_4,
        VAR_5, VAR_8, &VAR_7);
  break;
 case 128:
  VAR_9 = FUNC_3((struct sockaddr_in6 *)VAR_3,
        (const struct sockaddr_in6 *)VAR_4, VAR_5,
        VAR_8, &VAR_7);
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 FUNC_1(VAR_6);


 if (VAR_9 != 0)
  return VAR_9;


 VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_8, VAR_5);


 VAR_5->net = FUNC_5(VAR_7);
 FUNC_6(VAR_7);

 return VAR_9;
}
