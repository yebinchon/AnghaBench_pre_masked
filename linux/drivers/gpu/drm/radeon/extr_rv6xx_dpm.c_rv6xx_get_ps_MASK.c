
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_ps {int dummy; } ;
struct radeon_ps {struct rv6xx_ps* ps_priv; } ;



__attribute__((used)) static struct rv6xx_ps *FUNC_0(struct radeon_ps *VAR_0)
{
 struct rv6xx_ps *VAR_1 = VAR_0->ps_priv;

 return VAR_1;
}
