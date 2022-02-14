
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

uint64_t FUNC_2(uint64_t VAR_6, uint32_t VAR_7)
{
 VAR_6 = (FUNC_0(VAR_6) >> 8) |
  ((FUNC_1(VAR_6) & 0xff) << 24);
 if (VAR_7 & VAR_3)
  VAR_6 |= VAR_0;
 if (VAR_7 & VAR_5)
  VAR_6 |= VAR_2;
 if (!(VAR_7 & VAR_4))
  VAR_6 |= VAR_1;
 return VAR_6;
}
