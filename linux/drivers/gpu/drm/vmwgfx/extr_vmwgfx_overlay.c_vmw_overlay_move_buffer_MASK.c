
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ active_display_unit; } ;
struct vmw_buffer_object {int dummy; } ;


 int FUNC_0 (struct vmw_private*,struct vmw_buffer_object*,int) ;
 int FUNC_1 (struct vmw_private*,struct vmw_buffer_object*,int) ;
 int FUNC_2 (struct vmw_private*,struct vmw_buffer_object*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_1,
       struct vmw_buffer_object *VAR_2,
       bool VAR_3, bool VAR_4)
{
 if (!VAR_3)
  return FUNC_2(VAR_1, VAR_2, VAR_4);

 if (VAR_1->active_display_unit == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_4);

 return FUNC_1(VAR_1, VAR_2, VAR_4);
}
