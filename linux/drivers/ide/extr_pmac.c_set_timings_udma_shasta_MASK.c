
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ide_timing {scalar_t__ udma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ide_timing* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(u32 *VAR_4, u32 *VAR_5, u8 VAR_6)
{
 struct ide_timing *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8;

 if (VAR_6 > VAR_2 || VAR_7 == ((void*)0))
  return 1;
 VAR_8 = FUNC_1(VAR_3, (int)VAR_7->udma);
 *VAR_5 = ((*VAR_5) & ~VAR_1) | VAR_8;
 *VAR_5 = (*VAR_5) | VAR_0;

 return 0;
}
