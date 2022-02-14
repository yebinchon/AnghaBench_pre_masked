
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int16_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static uint16_t
FUNC_2(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;
 uint32_t VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < (VAR_1 & ~1U); VAR_2 += 2)
  VAR_3 += *((u_int16_t *)(VAR_0 + VAR_2));






 if (VAR_2 < VAR_1)
  VAR_3 += FUNC_1(VAR_0[VAR_2] << 8);

 return (FUNC_0(VAR_3));
}
