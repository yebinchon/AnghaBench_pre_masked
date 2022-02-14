
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ usec_timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_3 | FUNC_0(VAR_2);
 FUNC_2(VAR_5, VAR_7);

 VAR_9 = VAR_1 | VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_6->usec_timeout; VAR_8++) {
  if ((FUNC_1(VAR_4) & VAR_9) == VAR_9)
   break;
  FUNC_3(1);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->usec_timeout; VAR_8++) {
  if ((FUNC_1(VAR_5) & VAR_3) == 0)
   break;
  FUNC_3(1);
 }
}
