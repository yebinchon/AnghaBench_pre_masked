
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1 (uint32_t VAR_0,
                                            const uint8_t *VAR_1)
{
  FUNC_0 (VAR_0 < 128);
  return (VAR_1[VAR_0 >> 3] & (1u << (VAR_0 & 0x7))) != 0;
}
