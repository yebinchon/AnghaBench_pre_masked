
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int cmdbuf_mutex; } ;
typedef enum vmw_res_type { ____Placeholder_vmw_res_type } vmw_res_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct vmw_private*,int) ;

void FUNC_3(struct vmw_private *VAR_1)
{
 enum vmw_res_type VAR_2;

 FUNC_0(&VAR_1->cmdbuf_mutex);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_2(VAR_1, VAR_2);

 FUNC_1(&VAR_1->cmdbuf_mutex);
}
