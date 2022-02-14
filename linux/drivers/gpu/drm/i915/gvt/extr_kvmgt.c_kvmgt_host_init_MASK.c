
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct attribute_group {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_5__ {int (* get_gvt_attrs ) (struct attribute***,struct attribute_group***) ;} ;
struct TYPE_4__ {struct attribute_group** supported_type_groups; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct device*,TYPE_1__*) ;
 int FUNC_1 (struct attribute***,struct attribute_group***) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, void *VAR_4, const void *VAR_5)
{
 struct attribute **VAR_6;
 struct attribute_group **VAR_7;

 VAR_1 = VAR_5;
 if (!VAR_1->get_gvt_attrs(&VAR_6,
   &VAR_7))
  return -VAR_0;
 VAR_2.supported_type_groups = VAR_7;

 return FUNC_0(VAR_3, &VAR_2);
}
