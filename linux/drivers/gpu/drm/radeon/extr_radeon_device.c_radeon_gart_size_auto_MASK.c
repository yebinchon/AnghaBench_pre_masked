
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum radeon_family { ____Placeholder_radeon_family } radeon_family ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(enum radeon_family VAR_2)
{

 if (VAR_2 >= VAR_1)
  return 2048;
 else if (VAR_2 >= VAR_0)
  return 1024;
 else
  return 512;
}
