
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rdma_ah_attr {int type; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int usecnt; struct ib_device* device; } ;
struct TYPE_2__ {int (* create_ah ) (struct ib_ah*,struct rdma_ah_attr*,int,struct ib_udata*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
struct ib_ah {int sgid_attr; int type; struct ib_pd* pd; struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (struct ib_ah*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rdma_ah_attr*,int *) ;
 struct ib_ah* FUNC_5 (struct ib_device*,int ,int ) ;
 int FUNC_6 (struct ib_ah*,struct rdma_ah_attr*,int,struct ib_udata*) ;

__attribute__((used)) static struct ib_ah *FUNC_7(struct ib_pd *VAR_6,
         struct rdma_ah_attr *VAR_7,
         u32 VAR_8,
         struct ib_udata *VAR_9)
{
 struct ib_device *VAR_10 = VAR_6->device;
 struct ib_ah *VAR_11;
 int VAR_12;

 FUNC_3(VAR_8 & VAR_4);

 if (!VAR_10->ops.create_ah)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_5(
  VAR_10, VAR_5,
  (VAR_8 & VAR_4) ? VAR_3 : VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_11->device = VAR_10;
 VAR_11->pd = VAR_6;
 VAR_11->type = VAR_7->type;
 VAR_11->sgid_attr = FUNC_4(VAR_7, ((void*)0));

 VAR_12 = VAR_10->ops.create_ah(VAR_11, VAR_7, VAR_8, VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_11);
  return FUNC_0(VAR_12);
 }

 FUNC_1(&VAR_6->usecnt);
 return VAR_11;
}
