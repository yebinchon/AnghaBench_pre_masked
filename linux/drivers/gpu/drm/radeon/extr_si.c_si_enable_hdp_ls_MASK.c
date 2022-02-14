
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3,
        bool VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = VAR_6 = FUNC_0(VAR_1);

 if (VAR_4 && (VAR_3->cg_flags & VAR_2))
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 if (VAR_5 != VAR_6)
  FUNC_1(VAR_1, VAR_6);
}
