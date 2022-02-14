
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_mm {int dummy; } ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (struct intel_vgpu*,unsigned long,void*,unsigned long) ;
 unsigned long FUNC_2 (struct intel_vgpu_mm*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_3, struct intel_vgpu_mm *VAR_4,
  unsigned long VAR_5, unsigned long VAR_6, void *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11;

 while (VAR_5 != VAR_6) {
  VAR_11 = FUNC_2(VAR_4, VAR_5);
  if (VAR_11 == VAR_2) {
   FUNC_0("invalid gma address: %lx\n", VAR_5);
   return -VAR_0;
  }

  VAR_9 = VAR_5 & (VAR_1 - 1);

  VAR_8 = (VAR_6 - VAR_5) >= (VAR_1 - VAR_9) ?
   VAR_1 - VAR_9 : VAR_6 - VAR_5;

  FUNC_1(VAR_3, VAR_11, VAR_7 + VAR_10, VAR_8);

  VAR_10 += VAR_8;
  VAR_5 += VAR_8;
 }
 return VAR_10;
}
