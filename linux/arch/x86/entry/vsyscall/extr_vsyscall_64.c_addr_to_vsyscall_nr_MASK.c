
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_2)
{
 int VAR_3;

 if ((VAR_2 & ~0xC00UL) != VAR_1)
  return -VAR_0;

 VAR_3 = (VAR_2 & 0xC00UL) >> 10;
 if (VAR_3 >= 3)
  return -VAR_0;

 return VAR_3;
}
