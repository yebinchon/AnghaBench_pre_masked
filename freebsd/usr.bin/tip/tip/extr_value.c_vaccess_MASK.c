
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_3 & (VAR_4<<VAR_1))
  return (1);
 if (VAR_3 & (VAR_4<<VAR_0))
  return (1);
 return ((VAR_3 & (VAR_4<<VAR_2)) && FUNC_0() == 0);
}
