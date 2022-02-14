
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gth_device {scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct gth_device*,int,int ) ;
 int FUNC_3 (struct gth_device*,int,int ) ;
 int FUNC_4 (struct gth_device*,int,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gth_device *VAR_15)
{
 u32 VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_5(VAR_15->base + VAR_10);
 if (VAR_16 & VAR_12)
  return -VAR_3;


 VAR_16 |= VAR_13 | VAR_14;
 FUNC_6(VAR_16, VAR_15->base + VAR_10);


 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  if (FUNC_2(VAR_15, VAR_17, FUNC_1(VAR_17)) ==
      VAR_4)
   continue;

  FUNC_3(VAR_15, VAR_17, 0);
  FUNC_4(VAR_15, VAR_17, 16);
 }

 FUNC_6(0, VAR_15->base + VAR_7);


 for (VAR_18 = 0; VAR_18 < 33; VAR_18++)
  FUNC_6(0, VAR_15->base + VAR_11 + VAR_18 * 4);


 FUNC_6(0, VAR_15->base + VAR_8);
 FUNC_6(0xfc, VAR_15->base + VAR_9);


 FUNC_6(VAR_1, VAR_15->base + VAR_6);
 FUNC_6(FUNC_0(VAR_2) |
    VAR_0, VAR_15->base + VAR_5);

 return 0;
}
