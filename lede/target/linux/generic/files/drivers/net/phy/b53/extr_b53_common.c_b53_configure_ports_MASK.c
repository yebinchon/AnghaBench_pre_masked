
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cpu_port; } ;
struct b53_device {int enabled_ports; TYPE_1__ sw_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (struct b53_device*,int ,int,int*) ;
 int FUNC_3 (struct b53_device*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 scalar_t__ FUNC_6 (struct b53_device*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct b53_device *VAR_15)
{
 u8 VAR_16 = VAR_15->sw_dev.cpu_port;


 if (FUNC_6(VAR_15)) {
  u8 VAR_17;

  FUNC_2(VAR_15, VAR_1, VAR_2,
     &VAR_17);

  if (!(VAR_17 & VAR_11)) {
   FUNC_3(VAR_15, VAR_1, VAR_2,
       VAR_17 | VAR_11);
   FUNC_2(VAR_15, VAR_1, VAR_2,
      &VAR_17);

   if (!(VAR_17 & VAR_11)) {
    FUNC_7("Failed to enable reverse MII mode\n");
    return -VAR_3;
   }
  }
 } else if (FUNC_5(VAR_15) && VAR_16 == VAR_0) {
  u8 VAR_18;

  FUNC_2(VAR_15, VAR_1, VAR_2,
     &VAR_18);
  FUNC_3(VAR_15, VAR_1, VAR_2,
      VAR_18 | VAR_9 |
      VAR_10);


  if (VAR_15->enabled_ports & FUNC_1(5)) {
   u8 VAR_19 = FUNC_0(5);
   u8 VAR_20;

   FUNC_2(VAR_15, VAR_1, VAR_19, &VAR_20);
   VAR_20 |= VAR_5 |
       VAR_6 |
       VAR_8 |
       VAR_4;
   FUNC_3(VAR_15, VAR_1, VAR_19, VAR_20);
  }
 } else if (FUNC_4(VAR_15)) {
  if (VAR_16 == 8) {
   u8 VAR_21;

   FUNC_2(VAR_15, VAR_1, VAR_2,
      &VAR_21);
   VAR_21 |= VAR_10 |
          VAR_12 |
          VAR_14 |
          VAR_13 |
          VAR_9;
   FUNC_3(VAR_15, VAR_1, VAR_2,
       VAR_21);


  } else {
   u8 VAR_22 = FUNC_0(VAR_16);
   u8 VAR_23;

   FUNC_2(VAR_15, VAR_1, VAR_22, &VAR_23);
   VAR_23 |= VAR_5 |
       VAR_6 |
       VAR_8 |
       VAR_4 |
       VAR_7;
   FUNC_3(VAR_15, VAR_1, VAR_22, VAR_23);
  }
 }

 return 0;
}
