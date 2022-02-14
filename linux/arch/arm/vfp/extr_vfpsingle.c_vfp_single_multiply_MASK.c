
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_single {int exponent; int sign; int significand; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vfp_single*,struct vfp_single*,struct vfp_single*,int ) ;
 struct vfp_single VAR_1 ;
 int FUNC_3 (char*,struct vfp_single*) ;

__attribute__((used)) static u32
FUNC_4(struct vfp_single *VAR_2, struct vfp_single *VAR_3, struct vfp_single *VAR_4, u32 VAR_5)
{
 FUNC_3("VSN", VAR_3);
 FUNC_3("VSM", VAR_4);






 if (VAR_3->exponent < VAR_4->exponent) {
  struct vfp_single *VAR_6 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = VAR_6;
  FUNC_0("VFP: swapping M <-> N\n");
 }

 VAR_2->sign = VAR_3->sign ^ VAR_4->sign;




 if (VAR_3->exponent == 255) {
  if (VAR_3->significand || (VAR_4->exponent == 255 && VAR_4->significand))
   return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  if ((VAR_4->exponent | VAR_4->significand) == 0) {
   *VAR_2 = VAR_1;
   return VAR_0;
  }
  VAR_2->exponent = VAR_3->exponent;
  VAR_2->significand = 0;
  return 0;
 }





 if ((VAR_4->exponent | VAR_4->significand) == 0) {
  VAR_2->exponent = 0;
  VAR_2->significand = 0;
  return 0;
 }






 VAR_2->exponent = VAR_3->exponent + VAR_4->exponent - 127 + 2;
 VAR_2->significand = FUNC_1((u64)VAR_3->significand * VAR_4->significand);

 FUNC_3("VSD", VAR_2);
 return 0;
}
