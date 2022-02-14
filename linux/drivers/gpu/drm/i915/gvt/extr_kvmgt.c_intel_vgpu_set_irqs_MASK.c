
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;



 int FUNC_0 (struct intel_vgpu*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_2 (struct intel_vgpu*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_3 (struct intel_vgpu*,unsigned int,unsigned int,unsigned int,int,void*) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_2, u32 VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6,
  void *VAR_7)
{
 int (*VAR_8)(struct intel_vgpu *VAR_9, unsigned int VAR_10,
   unsigned int VAR_11, unsigned int VAR_12, u32 VAR_13,
   void *VAR_14) = ((void*)0);

 switch (VAR_4) {
 case 129:
  switch (VAR_3 & VAR_1) {
  case 132:
   VAR_8 = FUNC_0;
   break;
  case 130:
   VAR_8 = FUNC_2;
   break;
  case 131:
   VAR_8 = FUNC_1;
   break;
  }
  break;
 case 128:
  switch (VAR_3 & VAR_1) {
  case 132:
  case 130:

   break;
  case 131:
   VAR_8 = FUNC_3;
   break;
  }
  break;
 }

 if (!VAR_8)
  return -VAR_0;

 return VAR_8(VAR_2, VAR_4, VAR_5, VAR_6, VAR_3, VAR_7);
}
