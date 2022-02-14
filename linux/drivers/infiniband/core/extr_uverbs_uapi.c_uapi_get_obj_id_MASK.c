
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int obj_type; } ;
struct TYPE_8__ {TYPE_3__ objs_arr; } ;
struct TYPE_5__ {int obj_type; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;
struct uverbs_attr_spec {scalar_t__ type; TYPE_4__ u2; TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct uverbs_attr_spec *VAR_4)
{
 if (VAR_4->type == VAR_2 ||
     VAR_4->type == VAR_1)
  return VAR_4->u.obj.obj_type;
 if (VAR_4->type == VAR_3)
  return VAR_4->u2.objs_arr.obj_type;
 return VAR_0;
}
