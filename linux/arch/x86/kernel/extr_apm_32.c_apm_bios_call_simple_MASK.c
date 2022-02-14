
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct apm_bios_call {int err; void* eax; void* ecx; void* ebx; void* func; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct apm_bios_call*) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 *VAR_4,
    int *VAR_5)
{
 struct apm_bios_call VAR_6;
 int VAR_7;

 VAR_6.func = VAR_1;
 VAR_6.ebx = VAR_2;
 VAR_6.ecx = VAR_3;

 VAR_7 = FUNC_0(VAR_0, &VAR_6);
 *VAR_4 = VAR_6.eax;
 *VAR_5 = VAR_6.err;
 return VAR_7;
}
