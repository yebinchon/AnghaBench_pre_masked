
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_buffer_object {scalar_t__* res_prios; } ;


 int FUNC_0 (struct vmw_buffer_object*) ;

__attribute__((used)) static inline void FUNC_1(struct vmw_buffer_object *VAR_0, int VAR_1)
{
 if (--VAR_0->res_prios[VAR_1] == 0)
  FUNC_0(VAR_0);
}
