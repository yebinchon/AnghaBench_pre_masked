
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct intel_vgpu*) ;

__attribute__((used)) static inline void FUNC_3(struct intel_vgpu *VAR_0,
         u32 VAR_1, u32 VAR_2, bool VAR_3)
{
 u32 *VAR_4;


 VAR_1 = FUNC_1(VAR_1, 4);
 VAR_4 = (u32 *)(FUNC_2(VAR_0) + VAR_1);

 if (VAR_3) {




  *VAR_4 = (VAR_2 & FUNC_0(31, 4)) | (*VAR_4 & FUNC_0(3, 0));
 } else {
  *VAR_4 = VAR_2;
 }
}
