
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0)
{

 if ((VAR_0 >= 1 && VAR_0 <= 64) || (VAR_0 >= 129 && VAR_0 <= 192))
  return VAR_0 & 127;

 return VAR_0;
}
