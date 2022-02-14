
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_vgpu*,int) ;

__attribute__((used)) static int FUNC_1(struct intel_vgpu *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2))
   break;

 return VAR_2;
}
