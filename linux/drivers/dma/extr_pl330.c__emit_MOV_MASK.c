
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum dmamov_dst { ____Placeholder_dmamov_dst } dmamov_dst ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_4, u8 VAR_5[],
  enum dmamov_dst VAR_6, u32 VAR_7)
{
 if (VAR_4)
  return VAR_3;

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_6;
 VAR_5[2] = VAR_7;
 VAR_5[3] = VAR_7 >> 8;
 VAR_5[4] = VAR_7 >> 16;
 VAR_5[5] = VAR_7 >> 24;

 FUNC_0(VAR_3, "\tDMAMOV %s 0x%x\n",
  VAR_6 == VAR_2 ? "SAR" : (VAR_6 == VAR_1 ? "DAR" : "CCR"), VAR_7);

 return VAR_3;
}
