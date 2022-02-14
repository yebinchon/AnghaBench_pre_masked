
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_flow_spec {int dummy; } ib_flow_spec ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_flow_spec {scalar_t__ type; scalar_t__ reserved; } ;
struct ib_uflow_resources {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uverbs_attr_bundle*,struct ib_uverbs_flow_spec*,union ib_flow_spec*,struct ib_uflow_resources*) ;
 int FUNC_1 (struct ib_uverbs_flow_spec*,union ib_flow_spec*) ;

__attribute__((used)) static int FUNC_2(struct uverbs_attr_bundle *VAR_2,
    struct ib_uverbs_flow_spec *VAR_3,
    union ib_flow_spec *VAR_4,
    struct ib_uflow_resources *VAR_5)
{
 if (VAR_3->reserved)
  return -VAR_0;

 if (VAR_3->type >= VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_5);
 else
  return FUNC_1(VAR_3, VAR_4);
}
