
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_rdmacg_object {int cg; } ;
struct ib_device {int cg_device; } ;
typedef enum rdmacg_resource_type { ____Placeholder_rdmacg_resource_type } rdmacg_resource_type ;


 int FUNC_0 (int *,int *,int) ;

int FUNC_1(struct ib_rdmacg_object *VAR_0,
    struct ib_device *VAR_1,
    enum rdmacg_resource_type VAR_2)
{
 return FUNC_0(&VAR_0->cg, &VAR_1->cg_device,
     VAR_2);
}
