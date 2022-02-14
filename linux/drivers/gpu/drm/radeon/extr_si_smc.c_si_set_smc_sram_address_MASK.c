
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_4,
       u32 VAR_5, u32 VAR_6)
{
 if (VAR_5 & 3)
  return -VAR_1;
 if ((VAR_5 + 3) > VAR_6)
  return -VAR_1;

 FUNC_0(VAR_3, VAR_5);
 FUNC_1(VAR_2, 0, ~VAR_0);

 return 0;
}
