
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1)
{
 if ((VAR_1 <= 1000 && VAR_1 % 100) || (VAR_1 > 1000 && VAR_1 % 2000))
  return -VAR_0;

 if (VAR_1 <= 1000)
  VAR_1 /= 100;
 else
  VAR_1 = VAR_1 / 2000 + 10;

 return VAR_1;
}
