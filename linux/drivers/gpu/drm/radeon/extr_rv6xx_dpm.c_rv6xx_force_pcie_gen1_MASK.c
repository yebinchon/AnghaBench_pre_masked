
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 VAR_5 &= VAR_1;
 FUNC_1(VAR_3, VAR_5);

 VAR_5 = FUNC_0(VAR_3);
 VAR_5 |= VAR_2;
 FUNC_1(VAR_3, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4->usec_timeout; VAR_6++) {
  if (!(FUNC_0(VAR_3) & VAR_0))
   break;
  FUNC_2(1);
 }

 VAR_5 = FUNC_0(VAR_3);
 VAR_5 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_5);
}
