
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct SPU2_FMD {int ctrl3; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

u32 FUNC_1(u8 *VAR_1)
{
 struct SPU2_FMD *VAR_2 = (struct SPU2_FMD *)VAR_1;
 u32 VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_2->ctrl3);
 VAR_3 = VAR_4 & VAR_0;

 return VAR_3;
}
