
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
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  if (FUNC_0(VAR_1) & VAR_3)
   break;
  FUNC_3(1);
 }

 VAR_7 = FUNC_1(VAR_6) | VAR_4;
 FUNC_2(VAR_0, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  if (FUNC_0(VAR_0) & VAR_4)
   break;
  FUNC_3(1);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  if (FUNC_0(VAR_1) & VAR_2)
   break;
  FUNC_3(1);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  if (FUNC_0(VAR_1) & VAR_3)
   break;
  FUNC_3(1);
 }

 VAR_7 &= ~VAR_4;
 FUNC_2(VAR_0, VAR_7);
}
