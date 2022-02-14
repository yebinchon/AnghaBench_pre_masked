
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_10)
{
 uint32_t VAR_11 = 0;

 VAR_11 |= (VAR_10 & VAR_8) ? VAR_3 : 0;
 VAR_11 |= (VAR_10 & VAR_5) ? VAR_0 : 0;
 VAR_11 |= (VAR_10 & VAR_9) ? VAR_4 : 0;
 if (VAR_10 & VAR_7) {
  VAR_11 |= VAR_2;
  VAR_11 |= (VAR_10 & VAR_6) ? VAR_1 : 0;
 }
 return VAR_11;
}
