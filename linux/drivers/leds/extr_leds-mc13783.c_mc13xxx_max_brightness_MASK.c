
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_4)
{
 if (VAR_4 >= VAR_2 && VAR_4 <= VAR_1)
  return 0x0f;
 else if (VAR_4 >= VAR_3 && VAR_4 <= VAR_0)
  return 0x1f;

 return 0x3f;
}
