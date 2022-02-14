
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline int FUNC_1(u16 VAR_0)
{
 FUNC_0(3, "\n");

 if ((VAR_0 & 0xff00) == 0)
  return 0;

 if ((VAR_0 & 0x00ff) == 0)
  return 1;

 if ((VAR_0 & 0xf000) == 0 || (VAR_0 & 0x0f00) == 0)
  return 0;

 return 1;
}
