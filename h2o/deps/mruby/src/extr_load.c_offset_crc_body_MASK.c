
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rite_binary_header {scalar_t__ binary_crc; } ;



__attribute__((used)) static size_t
FUNC_0(void)
{
  struct rite_binary_header VAR_0;
  return ((uint8_t *)VAR_0.binary_crc - (uint8_t *)&VAR_0) + sizeof(VAR_0.binary_crc);
}
