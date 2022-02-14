
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef size_t u8 ;
struct amdgpu_afmt_acr {scalar_t__ clock; int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;


 size_t FUNC_0 (struct amdgpu_afmt_acr*) ;
 int FUNC_1 (scalar_t__,int *,int *,int) ;
 struct amdgpu_afmt_acr* VAR_0 ;

struct amdgpu_afmt_acr FUNC_2(uint32_t VAR_1)
{
 struct amdgpu_afmt_acr VAR_2;
 u8 VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].clock == VAR_1)
   return VAR_0[VAR_3];
 }


 FUNC_1(VAR_1, &VAR_2.cts_32khz, &VAR_2.n_32khz, 32000);
 FUNC_1(VAR_1, &VAR_2.cts_44_1khz, &VAR_2.n_44_1khz, 44100);
 FUNC_1(VAR_1, &VAR_2.cts_48khz, &VAR_2.n_48khz, 48000);

 return VAR_2;
}
