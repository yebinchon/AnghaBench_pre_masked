
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_context {int tmr_mc_addr; int tmr_bo; int adev; scalar_t__ fw_pri_buf; scalar_t__ toc_bin_size; scalar_t__ toc_start_addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int ,int *,int *,void**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct psp_context*,int*) ;

__attribute__((used)) static int FUNC_4(struct psp_context *VAR_2)
{
 int VAR_3;
 int VAR_4;
 void *VAR_5;
 void **VAR_6;
 VAR_4 = VAR_1;



 if (VAR_2->toc_start_addr &&
     VAR_2->toc_bin_size &&
     VAR_2->fw_pri_buf) {
  VAR_3 = FUNC_3(VAR_2, &VAR_4);
  if (VAR_3) {
   FUNC_0("Failed to load toc\n");
   return VAR_3;
  }
 }

 VAR_6 = FUNC_2(VAR_2->adev) ? &VAR_5 : ((void*)0);
 VAR_3 = FUNC_1(VAR_2->adev, VAR_4, VAR_1,
          VAR_0,
          &VAR_2->tmr_bo, &VAR_2->tmr_mc_addr, VAR_6);

 return VAR_3;
}
