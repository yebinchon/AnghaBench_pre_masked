
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {struct ni_ps* ps_priv; } ;
struct ni_ps {int dummy; } ;



struct ni_ps *FUNC_0(struct radeon_ps *VAR_0)
{
 struct ni_ps *VAR_1 = VAR_0->ps_priv;

 return VAR_1;
}
