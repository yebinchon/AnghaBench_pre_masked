
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {struct ci_ps* ps_priv; } ;
struct ci_ps {int dummy; } ;



__attribute__((used)) static struct ci_ps *FUNC_0(struct radeon_ps *VAR_0)
{
 struct ci_ps *VAR_1 = VAR_0->ps_priv;

 return VAR_1;
}
