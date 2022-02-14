
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {int dummy; } ;
struct vmw_resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_sw_context*,struct vmw_resource*,int ) ;
 int FUNC_1 (struct vmw_resource*) ;
 struct vmw_resource* FUNC_2 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_3(struct vmw_sw_context *VAR_1,
    struct vmw_resource *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_0(VAR_1, FUNC_2(VAR_2),
         FUNC_1(VAR_2));
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_2,
          VAR_0);
}
