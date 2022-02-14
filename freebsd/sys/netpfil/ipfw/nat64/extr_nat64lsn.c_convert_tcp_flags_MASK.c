
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline uint8_t
FUNC_0(uint8_t VAR_4)
{
 uint8_t VAR_5;

 VAR_5 = VAR_4 & (VAR_1|VAR_3);
 VAR_5 |= (VAR_4 & VAR_2) >> 2;
 VAR_5 |= (VAR_4 & VAR_0) >> 2;

 return (VAR_5);
}
