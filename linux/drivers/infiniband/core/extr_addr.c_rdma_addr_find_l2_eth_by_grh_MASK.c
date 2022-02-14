
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct resolve_cb_context {int status; int comp; } ;
struct rdma_dev_addr {int hoplimit; int dst_dev_addr; struct ib_gid_attr const* sgid_attr; int * net; } ;
struct ib_gid_attr {int dummy; } ;
typedef int dev_addr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct rdma_dev_addr*,int ,int) ;
 int FUNC_3 (struct sockaddr*,union ib_gid const*) ;
 int FUNC_4 (struct sockaddr*,struct sockaddr*,struct rdma_dev_addr*,int,int ,int,struct resolve_cb_context*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

int FUNC_6(const union ib_gid *VAR_3,
     const union ib_gid *VAR_4,
     u8 *VAR_5, const struct ib_gid_attr *VAR_6,
     int *VAR_7)
{
 struct rdma_dev_addr VAR_8;
 struct resolve_cb_context VAR_9;
 union {
  struct sockaddr_in _sockaddr_in;
  struct sockaddr_in6 _sockaddr_in6;
 } VAR_10, VAR_11;
 int VAR_12;

 FUNC_3((struct sockaddr *)&VAR_10, VAR_3);
 FUNC_3((struct sockaddr *)&VAR_11, VAR_4);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.net = &VAR_1;
 VAR_8.sgid_attr = VAR_6;

 FUNC_0(&VAR_9.comp);
 VAR_12 = FUNC_4((struct sockaddr *)&VAR_10,
         (struct sockaddr *)&VAR_11, &VAR_8, 1000,
         VAR_2, 1, &VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_5(&VAR_9.comp);

 VAR_12 = VAR_9.status;
 if (VAR_12)
  return VAR_12;

 FUNC_1(VAR_5, VAR_8.dst_dev_addr, VAR_0);
 *VAR_7 = VAR_8.hoplimit;
 return 0;
}
