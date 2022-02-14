
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(u16 VAR_0)
{
 VAR_0 = (VAR_0 | (VAR_0 << 4)) & 0x0f0f;
 VAR_0 = (VAR_0 | (VAR_0 << 2)) & 0x3333;
 VAR_0 = (VAR_0 | (VAR_0 << 1)) & 0x5555;

 return VAR_0;
}
