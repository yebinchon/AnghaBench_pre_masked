
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0)
{
  uint32_t VAR_1;
  VAR_1 = (VAR_0 ^ (VAR_0 >> 1)) & 0x22222222; VAR_0 = VAR_0 ^ VAR_1 ^ (VAR_1 << 1);
  VAR_1 = (VAR_0 ^ (VAR_0 >> 2)) & 0x0c0c0c0c; VAR_0 = VAR_0 ^ VAR_1 ^ (VAR_1 << 2);
  VAR_1 = (VAR_0 ^ (VAR_0 >> 4)) & 0x00f000f0; VAR_0 = VAR_0 ^ VAR_1 ^ (VAR_1 << 4);
  VAR_1 = (VAR_0 ^ (VAR_0 >> 8)) & 0x0000ff00; VAR_0 = VAR_0 ^ VAR_1 ^ (VAR_1 << 8);
  return VAR_0;
}
