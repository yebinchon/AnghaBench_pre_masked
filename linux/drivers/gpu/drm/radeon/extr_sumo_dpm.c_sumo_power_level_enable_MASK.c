
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_5, u32 VAR_6, bool VAR_7)
{
 u32 VAR_8 = VAR_6 / 4;
 u32 VAR_9 = VAR_6 % 4;

 if (VAR_9 == 0)
  FUNC_0(VAR_0 + (VAR_8 * 4),
    VAR_7 ? VAR_1 : 0, ~VAR_1);
 else if (VAR_9 == 1)
  FUNC_0(VAR_0 + (VAR_8 * 4),
    VAR_7 ? VAR_2 : 0, ~VAR_2);
 else if (VAR_9 == 2)
  FUNC_0(VAR_0 + (VAR_8 * 4),
    VAR_7 ? VAR_3 : 0, ~VAR_3);
 else if (VAR_9 == 3)
  FUNC_0(VAR_0 + (VAR_8 * 4),
    VAR_7 ? VAR_4 : 0, ~VAR_4);
}
