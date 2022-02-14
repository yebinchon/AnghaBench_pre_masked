
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int num_crtc; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__* VAR_15 ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 VAR_18 = FUNC_2(VAR_2) &
  (VAR_0 | VAR_1);
 FUNC_3(VAR_2, VAR_18);
 FUNC_3(VAR_3, 0);
 FUNC_3(VAR_4, 0);
 VAR_18 = FUNC_2(VAR_9 + VAR_7) & ~VAR_14;
 FUNC_3(VAR_9 + VAR_7, VAR_18);
 VAR_18 = FUNC_2(VAR_9 + VAR_8) & ~VAR_14;
 FUNC_3(VAR_9 + VAR_8, VAR_18);
 FUNC_3(VAR_10, 0);
 FUNC_3(VAR_13, 0);
 for (VAR_17 = 0; VAR_17 < VAR_16->num_crtc; VAR_17++)
  FUNC_3(VAR_12 + VAR_15[VAR_17], 0);
 for (VAR_17 = 0; VAR_17 < VAR_16->num_crtc; VAR_17++)
  FUNC_3(VAR_11 + VAR_15[VAR_17], 0);

 if (!FUNC_0(VAR_16)) {
  FUNC_3(VAR_5, 0);

  for (VAR_17 = 0; VAR_17 < 6; VAR_17++)
   FUNC_4(FUNC_1(VAR_17),
       VAR_6);
 }
}
