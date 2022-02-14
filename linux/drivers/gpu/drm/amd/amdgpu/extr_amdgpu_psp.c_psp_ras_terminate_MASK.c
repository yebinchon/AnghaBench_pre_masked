
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ras_shared_buf; int ras_shared_mc_addr; int ras_shared_bo; scalar_t__ ras_initialized; } ;
struct psp_context {TYPE_1__ ras; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct psp_context*) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ras.ras_initialized)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_0->ras.ras_initialized = 0;


 FUNC_0(&VAR_0->ras.ras_shared_bo,
   &VAR_0->ras.ras_shared_mc_addr,
   &VAR_0->ras.ras_shared_buf);

 return 0;
}
