
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
 if (VAR_3 < 10)
  return VAR_0 + VAR_3;
 else if (VAR_3 < 16)
  return VAR_1 + (VAR_3-10);
 else if (VAR_3 < 18)
  return VAR_2 + (VAR_3-16);
 else
  return 0;
}
