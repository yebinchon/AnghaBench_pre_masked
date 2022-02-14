
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_0, u8 VAR_1)
{
 if (VAR_0 & 0x80)
  return (VAR_0 - 0x100) * 1000;
 return FUNC_0(VAR_0, VAR_1);
}
