
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_0);
 VAR_10 |= VAR_5;
 FUNC_1(VAR_0, VAR_10);

 VAR_10 = FUNC_0(VAR_1);
 VAR_10 |= VAR_7;
 FUNC_1(VAR_1, VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_9->usec_timeout; VAR_11++) {
  if (FUNC_0(VAR_8) & VAR_6)
   break;
  FUNC_2(1);
 }

 VAR_10 = FUNC_0(VAR_1);
 VAR_10 &= ~(VAR_7 | VAR_4);
 FUNC_1(VAR_1, VAR_10);

 VAR_10 = FUNC_0(VAR_2);
 VAR_10 &= ~VAR_3;
 FUNC_1(VAR_2, VAR_10);
}
