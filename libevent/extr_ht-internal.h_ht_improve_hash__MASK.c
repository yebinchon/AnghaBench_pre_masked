
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned
FUNC_0(unsigned VAR_0)
{


  VAR_0 += ~(VAR_0 << 9);
  VAR_0 ^= ((VAR_0 >> 14) | (VAR_0 << 18));
  VAR_0 += (VAR_0 << 4);
  VAR_0 ^= ((VAR_0 >> 10) | (VAR_0 << 22));
  return VAR_0;
}
