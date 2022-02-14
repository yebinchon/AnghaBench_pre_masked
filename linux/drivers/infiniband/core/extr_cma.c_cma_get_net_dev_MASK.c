
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct ib_cm_event {int dummy; } ;
struct cma_req_info {int pkey; int port; int device; int service_id; union ib_gid local_gid; scalar_t__ has_gid; int src_addr_storage; int listen_addr_storage; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,struct ib_cm_event const*,int ) ;
 struct net_device* FUNC_2 (int ,int ,int ,union ib_gid const*,struct sockaddr*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct net_device* FUNC_4 (struct ib_cm_event const*) ;

__attribute__((used)) static struct net_device *FUNC_5(const struct ib_cm_event *VAR_1,
       struct cma_req_info *VAR_2)
{
 struct sockaddr *VAR_3 =
   (struct sockaddr *)&VAR_2->listen_addr_storage;
 struct sockaddr *VAR_4 = (struct sockaddr *)&VAR_2->src_addr_storage;
 struct net_device *VAR_5;
 const union ib_gid *VAR_6 = VAR_2->has_gid ? &VAR_2->local_gid : ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_1,
          VAR_2->service_id);
 if (VAR_7)
  return FUNC_0(VAR_7);

 if (FUNC_3(VAR_2->device, VAR_2->port))
  VAR_5 = FUNC_4(VAR_1);
 else
  VAR_5 = FUNC_2(VAR_2->device, VAR_2->port,
         VAR_2->pkey,
         VAR_6, VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 return VAR_5;
}
