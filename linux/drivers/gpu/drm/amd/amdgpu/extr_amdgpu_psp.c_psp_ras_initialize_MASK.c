
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ras_initialized; } ;
struct psp_context {TYPE_1__ ras; } ;


 int FUNC_0 (struct psp_context*) ;
 int FUNC_1 (struct psp_context*) ;

__attribute__((used)) static int FUNC_2(struct psp_context *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ras.ras_initialized) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1)
   return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
