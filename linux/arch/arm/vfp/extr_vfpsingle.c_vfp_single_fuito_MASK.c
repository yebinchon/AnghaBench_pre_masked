
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vfp_single {int exponent; scalar_t__ significand; scalar_t__ sign; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int,struct vfp_single*,scalar_t__,int ,char*) ;

__attribute__((used)) static u32 FUNC_1(int VAR_0, int VAR_1, s32 VAR_2, u32 VAR_3)
{
 struct vfp_single VAR_4;

 VAR_4.sign = 0;
 VAR_4.exponent = 127 + 31 - 1;
 VAR_4.significand = (u32)VAR_2;

 return FUNC_0(VAR_0, &VAR_4, VAR_3, 0, "fuito");
}
