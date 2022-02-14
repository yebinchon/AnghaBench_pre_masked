
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline unsigned long FUNC_0(u16 VAR_0)
{
 VAR_0 &= 0xfffc;
 if (VAR_0 == 0x0000 || VAR_0 == 0xfffc)
  return 0;
 return 5400000UL / VAR_0;
}
