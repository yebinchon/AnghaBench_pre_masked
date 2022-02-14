
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct ib_cm_event {int dummy; } ;
struct cma_req_info {int pkey; int port; int device; int service_id; union ib_gid local_gid; scalar_t__ has_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,struct ib_cm_event*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ,int ,int ,union ib_gid const*,struct sockaddr*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct net_device* FUNC_5 (int ,int ,struct ib_cm_event*) ;
 int FUNC_6 (struct net_device*,struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static struct net_device *FUNC_7(struct ib_cm_event *VAR_2,
       const struct cma_req_info *VAR_3)
{
 struct sockaddr_storage VAR_4, VAR_5;
 struct sockaddr *VAR_6 = (struct sockaddr *)&VAR_4,
   *VAR_7 = (struct sockaddr *)&VAR_5;
 struct net_device *VAR_8;
 const union ib_gid *VAR_9 = VAR_3->has_gid ? &VAR_3->local_gid : ((void*)0);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_2,
          VAR_3->service_id);
 if (VAR_10)
  return FUNC_0(VAR_10);

 if (FUNC_4(VAR_3->device, VAR_3->port)) {
  VAR_8 = FUNC_5(VAR_3->device, VAR_3->port,
             VAR_2);
 } else {
  VAR_8 = FUNC_3(VAR_3->device, VAR_3->port,
         VAR_3->pkey,
         VAR_9, VAR_6);
 }
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 if (!FUNC_6(VAR_8, VAR_6, VAR_7)) {
  FUNC_2(VAR_8);
  return FUNC_0(-VAR_0);
 }

 return VAR_8;
}
