
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_6,
  unsigned int VAR_7, void *VAR_8, unsigned int VAR_9)
{
 u32 VAR_10 = *(u32 *)VAR_8;

 if ((VAR_7 == VAR_1 || VAR_7 == VAR_4 ||
    VAR_7 == VAR_2 || VAR_7 == VAR_5 ||
    VAR_7 == VAR_3) && (VAR_10 & VAR_0) != 0) {
  FUNC_0(1, "VM(%d): guest is trying to scaling a plane\n",
     VAR_6->id);
  return 0;
 }

 return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
}
