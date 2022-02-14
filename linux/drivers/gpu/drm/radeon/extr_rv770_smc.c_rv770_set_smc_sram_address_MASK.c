
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_3,
          u16 VAR_4, u16 VAR_5)
{
 u32 VAR_6;

 if (VAR_4 & 3)
  return -VAR_0;
 if ((VAR_4 + 3) > VAR_5)
  return -VAR_0;

 VAR_6 = VAR_4;
 VAR_6 |= VAR_2;

 FUNC_0(VAR_1, VAR_6);

 return 0;
}
