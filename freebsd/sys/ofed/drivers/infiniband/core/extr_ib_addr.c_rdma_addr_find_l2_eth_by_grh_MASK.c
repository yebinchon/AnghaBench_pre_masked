
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct resolve_cb_context {int status; int comp; struct rdma_dev_addr* addr; } ;
struct rdma_dev_addr {int hoplimit; int dst_dev_addr; int net; int bound_dev_if; } ;
struct net_device {int if_index; } ;
typedef int dev_addr ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct rdma_dev_addr*,int ,int) ;
 int FUNC_4 (struct sockaddr*,union ib_gid const*) ;
 int FUNC_5 (int *,struct sockaddr*,struct sockaddr*,struct rdma_dev_addr*,int,int ,struct resolve_cb_context*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

int FUNC_7(const union ib_gid *VAR_3,
     const union ib_gid *VAR_4,
     u8 *VAR_5, struct net_device *VAR_6,
     int *VAR_7)
{
 int VAR_8 = 0;
 struct rdma_dev_addr VAR_9;
 struct resolve_cb_context VAR_10;

 union {
  struct sockaddr _sockaddr;
  struct sockaddr_in _sockaddr_in;
  struct sockaddr_in6 _sockaddr_in6;
 } VAR_11, VAR_12;

 FUNC_4(&VAR_11._sockaddr, VAR_3);
 FUNC_4(&VAR_12._sockaddr, VAR_4);

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.bound_dev_if = VAR_6->if_index;
 VAR_9.net = FUNC_0(VAR_6);

 VAR_10.addr = &VAR_9;
 FUNC_1(&VAR_10.comp);
 VAR_8 = FUNC_5(&VAR_2, &VAR_11._sockaddr, &VAR_12._sockaddr,
   &VAR_9, 1000, VAR_1, &VAR_10);
 if (VAR_8)
  return VAR_8;

 FUNC_6(&VAR_10.comp);

 VAR_8 = VAR_10.status;
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_5, VAR_9.dst_dev_addr, VAR_0);
 if (VAR_7)
  *VAR_7 = VAR_9.hoplimit;
 return VAR_8;
}
