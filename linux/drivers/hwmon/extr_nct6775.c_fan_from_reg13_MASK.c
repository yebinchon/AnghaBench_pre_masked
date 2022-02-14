
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static unsigned int FUNC_0(u16 VAR_0, unsigned int VAR_1)
{
 if ((VAR_0 & 0xff1f) == 0xff1f)
  return 0;

 VAR_0 = (VAR_0 & 0x1f) | ((VAR_0 & 0xff00) >> 3);

 if (VAR_0 == 0)
  return 0;

 return 1350000U / VAR_0;
}
