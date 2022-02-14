
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {scalar_t__ dx_query_mob; int dx_query_ctx; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vmw_sw_context *VAR_0)
{
 if (VAR_0->dx_query_mob)
  FUNC_0(VAR_0->dx_query_ctx,
       VAR_0->dx_query_mob);
}
