
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u16 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline u16 FUNC_1(const uint8_t *VAR_0, int VAR_1)
{
 u16 VAR_2;
 if (VAR_1 == 1)
  VAR_2 = *(const uint16_t *)VAR_0;
 else
  VAR_2 = FUNC_0(*(const uint32_t *)VAR_0);
 return VAR_2;
}
