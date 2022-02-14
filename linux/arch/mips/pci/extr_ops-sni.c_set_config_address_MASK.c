
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4, unsigned int VAR_5, int VAR_6)
{
 if ((VAR_5 > 255) || (VAR_6 > 255))
  return VAR_0;

 if (VAR_4 == 0 && VAR_5 >= FUNC_0(8, 0))
  return VAR_1;

 *(volatile u32 *)VAR_3 =
   ((VAR_4 & 0xff) << 16) |
   ((VAR_5 & 0xff) << 8) |
    (VAR_6 & 0xfc);

 return VAR_2;
}
