
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct radeon_i2c_bus_rec {int valid; } ;
struct radeon_hpd {void* hpd; } ;
struct radeon_device {int flags; scalar_t__ family; } ;
struct drm_device {TYPE_1__* pdev; struct radeon_device* dev_private; } ;
typedef enum radeon_combios_ddc { ____Placeholder_radeon_combios_ddc } radeon_combios_ddc ;
typedef enum radeon_combios_connector { ____Placeholder_radeon_combios_connector } radeon_combios_connector ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char FUNC_4 (int) ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*,int ) ;
 struct radeon_i2c_bus_rec FUNC_7 (struct radeon_device*,int const,int ,int ) ;
 int * VAR_30 ;
 int FUNC_8 (struct drm_device*,int,int,int ,struct radeon_i2c_bus_rec*,int,struct radeon_hpd*) ;
 int FUNC_9 (struct drm_device*,int ,int) ;
 int FUNC_10 (struct drm_device*,int,int*,struct radeon_i2c_bus_rec*,struct radeon_hpd*) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 struct radeon_i2c_bus_rec FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct drm_device*,int,int) ;
 int FUNC_14 (struct radeon_device*,struct radeon_i2c_bus_rec*,char*) ;
 int FUNC_15 (struct drm_device*) ;

bool FUNC_16(struct drm_device *VAR_31)
{
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 uint32_t VAR_33, VAR_34, VAR_35;
 uint16_t VAR_36, VAR_37;
 enum radeon_combios_ddc VAR_38;
 enum radeon_combios_connector VAR_39;
 int VAR_40 = 0;
 struct radeon_i2c_bus_rec VAR_41;
 struct radeon_hpd VAR_42;

 VAR_33 = FUNC_6(VAR_31, VAR_8);
 if (VAR_33) {
  for (VAR_40 = 0; VAR_40 < 4; VAR_40++) {
   VAR_34 = VAR_33 + 2 + VAR_40 * 2;

   if (!FUNC_2(VAR_34))
    break;

   VAR_36 = FUNC_2(VAR_34);

   VAR_39 = (VAR_36 >> 12) & 0xf;

   VAR_38 = (VAR_36 >> 8) & 0xf;
   if (VAR_38 == 5)
    VAR_41 = FUNC_12(VAR_32);
   else
    VAR_41 = FUNC_7(VAR_32, VAR_38, 0, 0);

   switch (VAR_39) {
   case 131:
   case 132:
   case 133:
    if ((VAR_36 >> 4) & 0x1)
     VAR_42.hpd = VAR_26;
    else
     VAR_42.hpd = VAR_25;
    break;
   default:
    VAR_42.hpd = VAR_27;
    break;
   }

   if (!FUNC_10(VAR_31, VAR_40, &VAR_39,
       &VAR_41, &VAR_42))
    continue;

   switch (VAR_39) {
   case 131:
    if ((VAR_36 >> 4) & 0x1)
     VAR_35 = VAR_3;
    else
     VAR_35 = VAR_2;
    FUNC_9(VAR_31,
         FUNC_13
         (VAR_31, VAR_35, 0),
         VAR_35);
    FUNC_8(VAR_31, VAR_40, VAR_35,
           VAR_30
           [VAR_39],
           &VAR_41,
           VAR_15,
           &VAR_42);
    break;
   case 135:
    if (VAR_36 & 0x1) {
     VAR_35 = VAR_1;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_1,
           2),
          VAR_1);
    } else {
     VAR_35 = VAR_0;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_0,
           1),
          VAR_0);
    }
    FUNC_8(VAR_31,
           VAR_40,
           VAR_35,
           VAR_30
           [VAR_39],
           &VAR_41,
           VAR_18,
           &VAR_42);
    break;
   case 132:
    VAR_35 = 0;
    if (VAR_36 & 0x1) {
     VAR_35 |= VAR_1;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_1,
           2),
          VAR_1);
    } else {
     VAR_35 |= VAR_0;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_0,
           1),
          VAR_0);
    }



    if (VAR_31->pdev->device == 0x5159 &&
        VAR_31->pdev->subsystem_vendor == 0x1014 &&
        VAR_31->pdev->subsystem_device == 0x029A) {
     VAR_36 &= ~(1 << 4);
    }
    if ((VAR_36 >> 4) & 0x1) {
     VAR_35 |= VAR_3;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_3,
           0),
          VAR_3);
     VAR_37 = FUNC_5(VAR_31, 0);
    } else {
     VAR_35 |= VAR_2;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_2,
           0),
          VAR_2);
     VAR_37 = VAR_16;
    }
    FUNC_8(VAR_31,
           VAR_40,
           VAR_35,
           VAR_30
           [VAR_39],
           &VAR_41,
           VAR_37,
           &VAR_42);
    break;
   case 133:
    if ((VAR_36 >> 4) & 0x1) {
     VAR_35 = VAR_3;
     VAR_37 = FUNC_5(VAR_31, 1);
    } else {
     VAR_35 = VAR_2;
     VAR_37 = VAR_16;
    }
    FUNC_9(VAR_31,
         FUNC_13
         (VAR_31, VAR_35, 0),
         VAR_35);
    FUNC_8(VAR_31, VAR_40, VAR_35,
           VAR_30
           [VAR_39],
           &VAR_41,
           VAR_37,
           &VAR_42);
    break;
   case 134:
   case 130:
    FUNC_9(VAR_31,
         FUNC_13
         (VAR_31,
          VAR_5,
          2),
         VAR_5);
    FUNC_8(VAR_31, VAR_40,
           VAR_5,
           VAR_30
           [VAR_39],
           &VAR_41,
           VAR_17,
           &VAR_42);
    break;
   default:
    FUNC_1("Unknown connector type: %d\n",
       VAR_39);
    continue;
   }

  }
 } else {
  uint16_t VAR_43 =
      FUNC_6(VAR_31, VAR_10);
  if (VAR_43) {
   FUNC_0("Found DFP table, assuming DVI connector\n");

   FUNC_9(VAR_31,
        FUNC_13(VAR_31,
         VAR_0,
         1),
        VAR_0);
   FUNC_9(VAR_31,
        FUNC_13(VAR_31,
         VAR_2,
         0),
        VAR_2);

   VAR_41 = FUNC_7(VAR_32, VAR_19, 0, 0);
   VAR_42.hpd = VAR_25;
   FUNC_8(VAR_31,
          0,
          VAR_0 |
          VAR_2,
          VAR_21,
          &VAR_41,
          VAR_16,
          &VAR_42);
  } else {
   uint16_t VAR_44 =
    FUNC_6(VAR_31, VAR_9);
   FUNC_0("Found CRT table, assuming VGA connector\n");
   if (VAR_44) {
    FUNC_9(VAR_31,
         FUNC_13(VAR_31,
          VAR_0,
          1),
         VAR_0);
    VAR_41 = FUNC_7(VAR_32, VAR_20, 0, 0);
    VAR_42.hpd = VAR_27;
    FUNC_8(VAR_31,
           0,
           VAR_0,
           VAR_24,
           &VAR_41,
           VAR_18,
           &VAR_42);
   } else {
    FUNC_0("No connector info found\n");
    return 0;
   }
  }
 }

 if (VAR_32->flags & VAR_29 || VAR_32->flags & VAR_28) {
  uint16_t VAR_45 =
      FUNC_6(VAR_31, VAR_12);
  if (VAR_45) {
   uint16_t VAR_46 =
       FUNC_6(VAR_31,
           VAR_11);

   FUNC_9(VAR_31,
        FUNC_13(VAR_31,
         VAR_4,
         0),
        VAR_4);

   if (VAR_46) {
    VAR_38 = FUNC_4(VAR_46 + 2);
    switch (VAR_38) {
    case 128:
     VAR_41 =
      FUNC_7(VAR_32,
              128,
              FUNC_3(VAR_46 + 3),
              FUNC_3(VAR_46 + 7));
     FUNC_14(VAR_32, &VAR_41, "LCD");
     break;
    case 129:
     VAR_41 =
      FUNC_7(VAR_32,
              129,
              FUNC_3(VAR_46 + 3),
              FUNC_3(VAR_46 + 7));
     FUNC_14(VAR_32, &VAR_41, "LCD");
     break;
    default:
     VAR_41 =
      FUNC_7(VAR_32, VAR_38, 0, 0);
     break;
    }
    FUNC_0("LCD DDC Info Table found!\n");
   } else
    VAR_41.valid = 0;

   VAR_42.hpd = VAR_27;
   FUNC_8(VAR_31,
          5,
          VAR_4,
          VAR_22,
          &VAR_41,
          VAR_14,
          &VAR_42);
  }
 }


 if (VAR_32->family != VAR_6 && VAR_32->family != VAR_7) {
  uint32_t VAR_47 =
      FUNC_6(VAR_31, VAR_13);
  if (VAR_47) {
   if (FUNC_4(VAR_47 + 6) == 'T') {
    if (FUNC_11(VAR_31)) {
     VAR_42.hpd = VAR_27;
     VAR_41.valid = 0;
     FUNC_9(VAR_31,
          FUNC_13
          (VAR_31,
           VAR_5,
           2),
          VAR_5);
     FUNC_8(VAR_31, 6,
            VAR_5,
            VAR_23,
            &VAR_41,
            VAR_17,
            &VAR_42);
    }
   }
  }
 }

 FUNC_15(VAR_31);

 return 1;
}
