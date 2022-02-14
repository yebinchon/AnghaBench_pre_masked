
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline int FUNC_0(u16 VAR_0, u16 VAR_1)
{
 return (((VAR_0 & 0x7fff) != 0) &&
  ((VAR_0 & 0x7fff) == (VAR_1 & 0x7fff)) &&
  ((VAR_0 & 0x8000) || (VAR_1 & 0x8000))) ? 1 : 0;
}
