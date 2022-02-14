
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct radeon_device*,int) ;

__attribute__((used)) static unsigned int FUNC_1(void *VAR_4, bool VAR_5)
{
 struct radeon_device *VAR_6 = VAR_4;
 FUNC_0(VAR_6, VAR_5);
 if (VAR_5)
  return VAR_0 | VAR_1 |
         VAR_2 | VAR_3;
 else
  return VAR_2 | VAR_3;
}
