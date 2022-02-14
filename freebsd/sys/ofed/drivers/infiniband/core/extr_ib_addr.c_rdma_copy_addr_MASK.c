
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {int bound_dev_if; int dst_dev_addr; int broadcast; int src_dev_addr; void* dev_type; } ;
struct net_device {int if_flags; scalar_t__ if_type; unsigned char const* if_broadcastaddr; int if_index; int if_addrlen; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char const* FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,unsigned char const*,int ,int ) ;

int FUNC_3(struct rdma_dev_addr *VAR_6, struct net_device *VAR_7,
       const unsigned char *VAR_8)
{

 if (VAR_7->if_flags & VAR_2) {
  VAR_6->dev_type = VAR_0;
  FUNC_1(VAR_6->src_dev_addr, 0, VAR_5);
  FUNC_1(VAR_6->broadcast, 0, VAR_5);
  FUNC_1(VAR_6->dst_dev_addr, 0, VAR_5);
  VAR_6->bound_dev_if = VAR_7->if_index;
  return (0);
 } else if (VAR_7->if_type == VAR_4)
  VAR_6->dev_type = VAR_1;
 else if (VAR_7->if_type == VAR_3)
  VAR_6->dev_type = VAR_0;
 else
  VAR_6->dev_type = 0;
 FUNC_2(VAR_6->src_dev_addr, FUNC_0(VAR_7),
      VAR_7->if_addrlen, VAR_5);
 FUNC_2(VAR_6->broadcast, VAR_7->if_broadcastaddr,
      VAR_7->if_addrlen, VAR_5);
 if (VAR_8 != ((void*)0)) {
  FUNC_2(VAR_6->dst_dev_addr, VAR_8,
       VAR_7->if_addrlen, VAR_5);
 }
 VAR_6->bound_dev_if = VAR_7->if_index;
 return 0;
}
