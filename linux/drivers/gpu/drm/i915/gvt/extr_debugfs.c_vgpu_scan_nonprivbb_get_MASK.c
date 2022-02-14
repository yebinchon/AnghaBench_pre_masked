
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu {int scan_nonprivbb; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct intel_vgpu *VAR_2 = (struct intel_vgpu *)VAR_0;
 *VAR_1 = VAR_2->scan_nonprivbb;
 return 0;
}
