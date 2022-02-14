
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ras_shared_buf; int ras_shared_mc_addr; int ras_shared_bo; } ;
struct psp_context {TYPE_1__ ras; int adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct psp_context *VAR_3)
{
 int VAR_4;





 VAR_4 = FUNC_0(VAR_3->adev, VAR_2,
   VAR_1, VAR_0,
   &VAR_3->ras.ras_shared_bo,
   &VAR_3->ras.ras_shared_mc_addr,
   &VAR_3->ras.ras_shared_buf);

 return VAR_4;
}
