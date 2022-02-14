
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0)
{
 int VAR_1 = VAR_0 & 0x8ff;

 if (VAR_1 & 0x800)
  return -(VAR_1 & 0x7ff);

 return (VAR_1 & 0x7ff);
}
