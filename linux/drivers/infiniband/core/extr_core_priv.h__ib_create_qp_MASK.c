
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_uobject {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_init_attr {int qp_type; } ;
struct TYPE_5__ {int valid; int type; } ;
struct ib_qp {TYPE_2__ res; struct ib_qp* real_qp; struct ib_uobject* uobject; struct ib_pd* pd; struct ib_device* device; } ;
struct ib_pd {int dummy; } ;
struct TYPE_4__ {struct ib_qp* (* create_qp ) (struct ib_pd*,struct ib_qp_init_attr*,struct ib_udata*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 struct ib_qp* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ib_qp*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct ib_qp* FUNC_4 (struct ib_pd*,struct ib_qp_init_attr*,struct ib_udata*) ;

__attribute__((used)) static inline struct ib_qp *FUNC_5(struct ib_device *VAR_6,
       struct ib_pd *VAR_7,
       struct ib_qp_init_attr *VAR_8,
       struct ib_udata *VAR_9,
       struct ib_uobject *VAR_10)
{
 enum ib_qp_type VAR_11 = VAR_8->qp_type;
 struct ib_qp *VAR_12;
 bool VAR_13;

 if (!VAR_6->ops.create_qp)
  return FUNC_0(-VAR_0);

 VAR_12 = VAR_6->ops.create_qp(VAR_7, VAR_8, VAR_9);
 if (FUNC_1(VAR_12))
  return VAR_12;

 VAR_12->device = VAR_6;
 VAR_12->pd = VAR_7;
 VAR_12->uobject = VAR_10;
 VAR_12->real_qp = VAR_12;





 VAR_13 = VAR_11 == VAR_3 || VAR_11 == VAR_4;
 if ((VAR_11 < VAR_2 && !VAR_13) || VAR_11 == VAR_1) {
  VAR_12->res.type = VAR_5;
  if (VAR_10)
   FUNC_3(&VAR_12->res);
  else
   FUNC_2(&VAR_12->res);
 } else
  VAR_12->res.valid = 0;

 return VAR_12;
}
