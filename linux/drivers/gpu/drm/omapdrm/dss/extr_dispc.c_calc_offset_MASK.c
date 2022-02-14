
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
typedef int s32 ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static void FUNC_4(u16 VAR_3, u16 VAR_4,
  u32 VAR_5, bool VAR_6, unsigned int VAR_7,
  unsigned int *VAR_8, unsigned int *VAR_9,
  s32 *VAR_10, s32 *VAR_11, int VAR_12, int VAR_13,
  enum omap_dss_rotation_type VAR_14, u8 VAR_15)
{
 u8 VAR_16;

 VAR_16 = FUNC_1(VAR_5) / 8;

 FUNC_0("scrw %d, width %d\n", VAR_3, VAR_4);

 if (VAR_14 == VAR_2 &&
     (VAR_5 == VAR_0 || VAR_5 == VAR_1) &&
     FUNC_2(VAR_15)) {
  VAR_4 *= 2;
 }





 *VAR_8 = VAR_7 * VAR_3 * VAR_16;
 *VAR_9 = 0;

 *VAR_10 = FUNC_3(1 + (VAR_13 * VAR_3 - VAR_4 * VAR_12) +
   (VAR_6 ? VAR_3 : 0), VAR_16);
 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  *VAR_11 = FUNC_3(VAR_12, 2 * VAR_16);
 else
  *VAR_11 = FUNC_3(VAR_12, VAR_16);
}
