
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_single {scalar_t__ exponent; void* sign; scalar_t__ significand; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct vfp_single*,struct vfp_single*,struct vfp_single*,int) ;
 int FUNC_4 (struct vfp_single*,struct vfp_single*,struct vfp_single*,int) ;
 int FUNC_5 (struct vfp_single*) ;
 int FUNC_6 (int,struct vfp_single*,int,int,char*) ;
 int FUNC_7 (struct vfp_single*,int ) ;

__attribute__((used)) static u32
FUNC_8(int VAR_2, int VAR_3, s32 VAR_4, u32 VAR_5, u32 VAR_6, char *VAR_7)
{
 struct vfp_single VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;
 s32 VAR_13;

 VAR_13 = FUNC_1(VAR_3);
 FUNC_0("VFP: s%u = %08x\n", VAR_3, VAR_13);
 FUNC_7(&VAR_10, VAR_13);
 if (VAR_10.exponent == 0 && VAR_10.significand)
  FUNC_5(&VAR_10);

 FUNC_7(&VAR_11, VAR_4);
 if (VAR_11.exponent == 0 && VAR_11.significand)
  FUNC_5(&VAR_11);

 VAR_12 = FUNC_4(&VAR_9, &VAR_10, &VAR_11, VAR_5);
 if (VAR_6 & VAR_0)
  VAR_9.sign = FUNC_2(VAR_9.sign);

 VAR_13 = FUNC_1(VAR_2);
 FUNC_0("VFP: s%u = %08x\n", VAR_2, VAR_13);
 FUNC_7(&VAR_10, VAR_13);
 if (VAR_10.exponent == 0 && VAR_10.significand)
  FUNC_5(&VAR_10);
 if (VAR_6 & VAR_1)
  VAR_10.sign = FUNC_2(VAR_10.sign);

 VAR_12 |= FUNC_3(&VAR_8, &VAR_10, &VAR_9, VAR_5);

 return FUNC_6(VAR_2, &VAR_8, VAR_5, VAR_12, VAR_7);
}
