
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision; int coherency_features; } ;
struct panfrost_device {TYPE_1__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct panfrost_device*,int ) ;
 int FUNC_1 (struct panfrost_device*,int ,int) ;
 scalar_t__ FUNC_2 (struct panfrost_device*,int ) ;
 scalar_t__ FUNC_3 (struct panfrost_device*,int ) ;
 scalar_t__ FUNC_4 (struct panfrost_device*,int) ;
 scalar_t__ FUNC_5 (struct panfrost_device*,int) ;

__attribute__((used)) static void FUNC_6(struct panfrost_device *VAR_28)
{
 u32 VAR_29 = 0;

 if (FUNC_3(VAR_28, VAR_12) ||
     FUNC_3(VAR_28, VAR_11))
  VAR_29 |= VAR_24;

 if (FUNC_3(VAR_28, VAR_9))
  VAR_29 |= VAR_25;

 if (FUNC_3(VAR_28, VAR_10))
  VAR_29 |= VAR_21;

 if (!FUNC_3(VAR_28, VAR_2)) {
  if (FUNC_4(VAR_28, 0x750) < 0)
   VAR_29 |= VAR_23;
  else if (FUNC_4(VAR_28, 0x880) <= 0)
   VAR_29 |= VAR_22;
 }

 if (FUNC_2(VAR_28, VAR_8))
  VAR_29 |= VAR_26;

 if (VAR_29)
  FUNC_1(VAR_28, VAR_5, VAR_29);


 VAR_29 = FUNC_0(VAR_28, VAR_6);


 if (FUNC_3(VAR_28, VAR_13))
  VAR_29 |= VAR_27;

 FUNC_1(VAR_28, VAR_6, VAR_29);


 VAR_29 = FUNC_0(VAR_28, VAR_4);


 if (FUNC_2(VAR_28, VAR_7))
  VAR_29 &= ~(VAR_17 |
       VAR_18);
 else
  VAR_29 &= ~(VAR_19 |
       VAR_20);

 FUNC_1(VAR_28, VAR_4, VAR_29);

 VAR_29 = 0;
 if ((FUNC_5(VAR_28, 0x860) || FUNC_5(VAR_28, 0x880)) &&
     VAR_28->features.revision >= 0x2000)
  VAR_29 |= VAR_16 << VAR_15;
 else if (FUNC_5(VAR_28, 0x6000) &&
   VAR_28->features.coherency_features == VAR_0)
  VAR_29 |= (VAR_1 | VAR_0) <<
      VAR_14;

 if (VAR_29)
  FUNC_1(VAR_28, VAR_3, VAR_29);
}
