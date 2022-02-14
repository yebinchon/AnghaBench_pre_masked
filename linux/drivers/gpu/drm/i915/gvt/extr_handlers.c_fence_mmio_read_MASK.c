
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;
 int FUNC_2 (struct intel_vgpu*,int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_0, unsigned int VAR_1,
  void *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_1),
   VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 return 0;
}
