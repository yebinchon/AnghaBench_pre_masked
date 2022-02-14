
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_6,
          bool VAR_7)
{
 u32 VAR_8, VAR_9;

 VAR_8 = VAR_9 = FUNC_0(VAR_1);

 if (VAR_7 && (VAR_6->cg_flags & VAR_2))
  VAR_9 |= VAR_5 | VAR_0 |
   VAR_3 | VAR_4;
 else
  VAR_9 &= ~(VAR_5 | VAR_0 |
     VAR_3 | VAR_4);

 if (VAR_8 != VAR_9)
  FUNC_1(VAR_1, VAR_9);
}
