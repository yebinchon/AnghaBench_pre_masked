
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ib_sa_mcmember_rec {int mgid; } ;
struct ib_sa_multicast {int (* callback ) (int,struct ib_sa_multicast*) ;void* context; int comp_mask; struct ib_sa_mcmember_rec rec; } ;
struct mcast_member {struct ib_sa_multicast multicast; int group; int state; int refcount; int comp; struct ib_sa_client* client; } ;
struct mcast_device {size_t start_port; int * port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_sa_multicast* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int) ;
 struct mcast_device* FUNC_3 (struct ib_device*,int *) ;
 int FUNC_4 (struct ib_sa_client*) ;
 int FUNC_5 (struct ib_sa_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mcast_member*) ;
 struct mcast_member* FUNC_8 (int,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct mcast_member*) ;

struct ib_sa_multicast *
FUNC_10(struct ib_sa_client *VAR_4,
       struct ib_device *VAR_5, u8 VAR_6,
       struct ib_sa_mcmember_rec *VAR_7,
       ib_sa_comp_mask VAR_8, gfp_t VAR_9,
       int (*VAR_10)(int VAR_11,
         struct ib_sa_multicast *VAR_12),
       void *VAR_13)
{
 struct mcast_device *VAR_14;
 struct mcast_member *VAR_15;
 struct ib_sa_multicast *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_3(VAR_5, &VAR_3);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_15 = FUNC_8(sizeof *VAR_15, VAR_9);
 if (!VAR_15)
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_4);
 VAR_15->client = VAR_4;
 VAR_15->multicast.rec = *VAR_7;
 VAR_15->multicast.comp_mask = VAR_8;
 VAR_15->multicast.callback = VAR_10;
 VAR_15->multicast.context = VAR_13;
 FUNC_6(&VAR_15->comp);
 FUNC_2(&VAR_15->refcount, 1);
 VAR_15->state = VAR_2;

 VAR_15->group = FUNC_1(&VAR_14->port[VAR_6 - VAR_14->start_port],
          &VAR_7->mgid, VAR_9);
 if (!VAR_15->group) {
  VAR_17 = -VAR_1;
  goto err;
 }







 VAR_16 = &VAR_15->multicast;
 FUNC_9(VAR_15);
 return VAR_16;

err:
 FUNC_5(VAR_4);
 FUNC_7(VAR_15);
 return FUNC_0(VAR_17);
}
