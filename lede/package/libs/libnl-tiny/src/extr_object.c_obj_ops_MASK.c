
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object_ops {int dummy; } ;
struct nl_object {struct nl_object_ops* ce_ops; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline struct nl_object_ops *FUNC_1(struct nl_object *VAR_0)
{
 if (!VAR_0->ce_ops)
  FUNC_0();

 return VAR_0->ce_ops;
}
