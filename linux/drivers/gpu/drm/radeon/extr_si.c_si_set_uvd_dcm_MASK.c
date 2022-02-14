
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_7,
      bool VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_5);
 VAR_9 &= ~(VAR_1 | VAR_0);
 VAR_9 |= VAR_2 | FUNC_0(1) | FUNC_1(4);

 if (VAR_8) {
  VAR_9 &= ~0x7ffff800;
  VAR_10 = VAR_3 | VAR_4 | FUNC_2(7);
 } else {
  VAR_9 |= 0x7ffff800;
  VAR_10 = 0;
 }

 FUNC_4(VAR_5, VAR_9);
 FUNC_5(VAR_6, VAR_10);
}
