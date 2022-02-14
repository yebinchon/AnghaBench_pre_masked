
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_5)
{
 u32 VAR_6 = VAR_4;

 if (VAR_5->flags & VAR_2) {
  VAR_6 |= VAR_0 | VAR_1;
 }

 FUNC_0(VAR_3, VAR_6);
}
