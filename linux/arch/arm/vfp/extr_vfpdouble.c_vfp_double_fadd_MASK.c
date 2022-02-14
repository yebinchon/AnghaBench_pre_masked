
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {scalar_t__ exponent; scalar_t__ significand; } ;


 int FUNC_0 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int ) ;
 int FUNC_1 (struct vfp_double*) ;
 int FUNC_2 (int,struct vfp_double*,int ,int ,char*) ;
 int FUNC_3 (struct vfp_double*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(int VAR_0, int VAR_1, int VAR_2, u32 VAR_3)
{
 struct vfp_double VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_3(&VAR_5, FUNC_4(VAR_1));
 if (VAR_5.exponent == 0 && VAR_5.significand)
  FUNC_1(&VAR_5);

 FUNC_3(&VAR_6, FUNC_4(VAR_2));
 if (VAR_6.exponent == 0 && VAR_6.significand)
  FUNC_1(&VAR_6);

 VAR_7 = FUNC_0(&VAR_4, &VAR_5, &VAR_6, VAR_3);

 return FUNC_2(VAR_0, &VAR_4, VAR_3, VAR_7, "fadd");
}
