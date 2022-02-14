
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_2__ {int route_resolved; } ;
struct sa_path_rec {scalar_t__ rec_type; TYPE_1__ roce; int dgid; int sgid; } ;
struct rdma_dev_addr {scalar_t__ network; struct ib_gid_attr const* sgid_attr; int * net; } ;
struct ib_gid_attr {int ndev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,struct rdma_dev_addr*,int,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sockaddr*,int *) ;

int FUNC_2(struct sa_path_rec *VAR_5,
     const struct ib_gid_attr *VAR_6)
{
 union {
  struct sockaddr _sockaddr;
  struct sockaddr_in _sockaddr_in;
  struct sockaddr_in6 _sockaddr_in6;
 } VAR_7, VAR_8;
 struct rdma_dev_addr VAR_9 = {};
 int VAR_10;

 if (VAR_5->roce.route_resolved)
  return 0;

 FUNC_1((struct sockaddr *)&VAR_7, &VAR_5->sgid);
 FUNC_1((struct sockaddr *)&VAR_8, &VAR_5->dgid);

 if (VAR_7._sockaddr.sa_family != VAR_8._sockaddr.sa_family)
  return -VAR_0;

 if (!VAR_6 || !VAR_6->ndev)
  return -VAR_0;

 VAR_9.net = &VAR_4;
 VAR_9.sgid_attr = VAR_6;

 VAR_10 = FUNC_0((struct sockaddr *)&VAR_7, (struct sockaddr *)&VAR_8,
      &VAR_9, 0, 1, 0);
 if (VAR_10)
  return VAR_10;

 if ((VAR_9.network == VAR_1 ||
      VAR_9.network == VAR_2) &&
     VAR_5->rec_type != VAR_3)
  return -VAR_0;

 VAR_5->roce.route_resolved = 1;
 return 0;
}
