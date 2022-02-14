
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; int num_crtc; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct radeon_device*,int,int) ;
 scalar_t__* VAR_14 ;

void FUNC_6(struct radeon_device *VAR_15)
{
 int VAR_16;
 u32 VAR_17;

 if (VAR_15->family >= VAR_1) {
  FUNC_5(VAR_15, 0,
      VAR_2 | VAR_3);
  FUNC_5(VAR_15, 1, 0);
  FUNC_5(VAR_15, 2, 0);
  VAR_17 = FUNC_2(VAR_0) & ~VAR_13;
  FUNC_3(VAR_0, VAR_17);
 } else
  FUNC_3(VAR_4, VAR_2 | VAR_3);
 VAR_17 = FUNC_2(VAR_8) & ~VAR_13;
 FUNC_3(VAR_8, VAR_17);
 FUNC_3(VAR_9, 0);
 FUNC_3(VAR_12, 0);
 for (VAR_16 = 0; VAR_16 < VAR_15->num_crtc; VAR_16++)
  FUNC_3(VAR_11 + VAR_14[VAR_16], 0);
 for (VAR_16 = 0; VAR_16 < VAR_15->num_crtc; VAR_16++)
  FUNC_3(VAR_10 + VAR_14[VAR_16], 0);


 if (!FUNC_0(VAR_15))
  FUNC_3(VAR_5, 0);
 FUNC_3(VAR_6, 0);

 for (VAR_16 = 0; VAR_16 < 6; VAR_16++)
  FUNC_4(FUNC_1(VAR_16), VAR_7);
}
