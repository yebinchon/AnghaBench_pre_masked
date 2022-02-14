
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct radeon_device *VAR_5,
           u8 VAR_6)
{
 u32 VAR_7;

 if (VAR_5->family >= VAR_2)
  VAR_7 = FUNC_0(VAR_3);
 else
  VAR_7 = FUNC_0(VAR_4);

 VAR_7 &= ~VAR_0;
 VAR_7 |= ((VAR_6 << VAR_1) &
      VAR_0);

 if (VAR_5->family >= VAR_2)
  FUNC_1(VAR_3, VAR_7);
 else
  FUNC_1(VAR_4, VAR_7);
}
