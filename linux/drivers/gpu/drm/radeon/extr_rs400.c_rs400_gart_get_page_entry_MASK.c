
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
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

uint64_t FUNC_2(uint64_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = (FUNC_0(VAR_7) & VAR_0) |
  ((FUNC_1(VAR_7) & 0xff) << 4);
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_4;
 if (VAR_8 & VAR_3)
  VAR_9 |= VAR_6;
 if (!(VAR_8 & VAR_2))
  VAR_9 |= VAR_5;
 return VAR_9;
}
