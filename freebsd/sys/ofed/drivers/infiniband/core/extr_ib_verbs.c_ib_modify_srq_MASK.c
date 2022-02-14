
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_srq_attr {int dummy; } ;
struct ib_srq {TYPE_1__* device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;
struct TYPE_2__ {int (* modify_srq ) (struct ib_srq*,struct ib_srq_attr*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_srq*,struct ib_srq_attr*,int,int *) ;

int FUNC_1(struct ib_srq *VAR_1,
    struct ib_srq_attr *VAR_2,
    enum ib_srq_attr_mask VAR_3)
{
 return VAR_1->device->modify_srq ?
  VAR_1->device->modify_srq(VAR_1, VAR_2, VAR_3, ((void*)0)) :
  -VAR_0;
}
