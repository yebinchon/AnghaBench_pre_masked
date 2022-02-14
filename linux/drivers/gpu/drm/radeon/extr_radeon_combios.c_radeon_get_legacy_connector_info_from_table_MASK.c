
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_i2c_bus_rec {int valid; } ;
struct radeon_hpd {void* hpd; } ;
struct TYPE_4__ {int connector_table; } ;
struct radeon_device {int flags; TYPE_2__ mode_info; int family; TYPE_1__* pdev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_3__ {int device; int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
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
 int FUNC_1 (char*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct radeon_i2c_bus_rec FUNC_2 (struct radeon_device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (struct drm_device*,int,int,int ,struct radeon_i2c_bus_rec*,int ,struct radeon_hpd*) ;
 int FUNC_5 (struct drm_device*,int ,int) ;
 int VAR_30 ;
 int FUNC_6 (struct drm_device*,int,int) ;
 int FUNC_7 (struct drm_device*) ;

bool FUNC_8(struct drm_device *VAR_31)
{
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 struct radeon_i2c_bus_rec VAR_33;
 struct radeon_hpd VAR_34;

 VAR_32->mode_info.connector_table = VAR_30;
 if (VAR_32->mode_info.connector_table == VAR_14) {
   VAR_32->mode_info.connector_table = 140;
 }

 switch (VAR_32->mode_info.connector_table) {
 case 140:
  FUNC_1("Connector Table: %d (generic)\n",
    VAR_32->mode_info.connector_table);

  if (VAR_32->flags & VAR_29) {

   VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
   VAR_34.hpd = VAR_27;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_0,
         1),
        VAR_0);
   FUNC_4(VAR_31, 0,
          VAR_0,
          VAR_24,
          &VAR_33,
          VAR_13,
          &VAR_34);
  } else if (VAR_32->flags & VAR_28) {

   VAR_33 = FUNC_2(VAR_32, VAR_18, 0, 0);
   VAR_34.hpd = VAR_27;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_4,
         0),
        VAR_4);
   FUNC_4(VAR_31, 0,
          VAR_4,
          VAR_22,
          &VAR_33,
          VAR_9,
          &VAR_34);


   VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
   VAR_34.hpd = VAR_27;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_0,
         1),
        VAR_0);
   FUNC_4(VAR_31, 1,
          VAR_0,
          VAR_24,
          &VAR_33,
          VAR_13,
          &VAR_34);
  } else {

   VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
   VAR_34.hpd = VAR_25;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_2,
         0),
        VAR_2);
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_1,
         2),
        VAR_1);
   FUNC_4(VAR_31, 0,
          VAR_2 |
          VAR_1,
          VAR_21,
          &VAR_33,
          VAR_11,
          &VAR_34);


   VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
   VAR_34.hpd = VAR_27;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_0,
         1),
        VAR_0);
   FUNC_4(VAR_31, 1,
          VAR_0,
          VAR_24,
          &VAR_33,
          VAR_13,
          &VAR_34);
  }

  if (VAR_32->family != VAR_6 && VAR_32->family != VAR_7) {

   VAR_33.valid = 0;
   VAR_34.hpd = VAR_27;
   FUNC_5(VAR_31,
        FUNC_6(VAR_31,
         VAR_5,
         2),
        VAR_5);
   FUNC_4(VAR_31, 2,
          VAR_5,
          VAR_23,
          &VAR_33,
          VAR_12,
          &VAR_34);
  }
  break;
 case 139:
  FUNC_1("Connector Table: %d (ibook)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_4,
        0),
       VAR_4);
  FUNC_4(VAR_31, 0, VAR_4,
         VAR_22, &VAR_33,
         VAR_9,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 1, VAR_1,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 132:
  FUNC_1("Connector Table: %d (powerbook external tmds)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_4,
        0),
       VAR_4);
  FUNC_4(VAR_31, 0, VAR_4,
         VAR_22, &VAR_33,
         VAR_9,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_26;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_3,
        0),
       VAR_3);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);

  FUNC_4(VAR_31, 1,
         VAR_3 |
         VAR_0,
         VAR_21, &VAR_33,
         VAR_8,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 131:
  FUNC_1("Connector Table: %d (powerbook internal tmds)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_4,
        0),
       VAR_4);
  FUNC_4(VAR_31, 0, VAR_4,
         VAR_22, &VAR_33,
         VAR_9,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_2,
        0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 1,
         VAR_2 |
         VAR_0,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 130:
  FUNC_1("Connector Table: %d (powerbook vga)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_4,
        0),
       VAR_4);
  FUNC_4(VAR_31, 0, VAR_4,
         VAR_22, &VAR_33,
         VAR_9,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 1, VAR_0,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 134:
  FUNC_1("Connector Table: %d (mini external tmds)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_15, 0, 0);
  VAR_34.hpd = VAR_26;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_3,
        0),
       VAR_3);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);

  FUNC_4(VAR_31, 0,
         VAR_3 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 1, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 133:
  FUNC_1("Connector Table: %d (mini internal tmds)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_15, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_2,
        0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 0,
         VAR_2 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 1, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 138:
  FUNC_1("Connector Table: %d (imac g5 isight)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_17, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_2,
        0),
       VAR_2);
  FUNC_4(VAR_31, 0, VAR_2,
         VAR_20, &VAR_33,
         VAR_10,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 1, VAR_1,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 141:
  FUNC_1("Connector Table: %d (emac)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 0, VAR_0,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_15, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 1, VAR_1,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 129:
  FUNC_1("Connector Table: %d (rn50-power)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 0, VAR_0,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);
  VAR_33 = FUNC_2(VAR_32, VAR_15, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 1, VAR_1,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);
  break;
 case 135:
  FUNC_1("Connector Table: %d (mac x800)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_2,
          0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_0,
          1),
       VAR_0);
  FUNC_4(VAR_31, 0,
         VAR_2 |
         VAR_0,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_17, 0, 0);
  VAR_34.hpd = VAR_26;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_3,
          0),
       VAR_3);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_1,
          2),
       VAR_1);
  FUNC_4(VAR_31, 1,
         VAR_3 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_8,
         &VAR_34);
  break;
 case 136:
  FUNC_1("Connector Table: %d (mac g5 9600)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_3,
          0),
       VAR_3);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_1,
          2),
       VAR_1);
  FUNC_4(VAR_31, 0,
         VAR_3 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_26;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_2,
          0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
          VAR_0,
          1),
       VAR_0);
  FUNC_4(VAR_31, 1,
         VAR_2 |
         VAR_0,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 128:
  FUNC_1("Connector Table: %d (SAM440ep embedded board)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_18, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_4,
        0),
       VAR_4);
  FUNC_4(VAR_31, 0, VAR_4,
         VAR_22, &VAR_33,
         VAR_9,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_2,
        0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 1,
         VAR_2 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 2,
         VAR_0,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 3, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 case 137:
  FUNC_1("Connector Table: %d (mac g4 silver)\n",
    VAR_32->mode_info.connector_table);

  VAR_33 = FUNC_2(VAR_32, VAR_16, 0, 0);
  VAR_34.hpd = VAR_25;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_2,
        0),
       VAR_2);
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_1,
        2),
       VAR_1);
  FUNC_4(VAR_31, 0,
         VAR_2 |
         VAR_1,
         VAR_21, &VAR_33,
         VAR_11,
         &VAR_34);

  VAR_33 = FUNC_2(VAR_32, VAR_19, 0, 0);
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_0,
        1),
       VAR_0);
  FUNC_4(VAR_31, 1, VAR_0,
         VAR_24, &VAR_33,
         VAR_13,
         &VAR_34);

  VAR_33.valid = 0;
  VAR_34.hpd = VAR_27;
  FUNC_5(VAR_31,
       FUNC_6(VAR_31,
        VAR_5,
        2),
       VAR_5);
  FUNC_4(VAR_31, 2, VAR_5,
         VAR_23,
         &VAR_33,
         VAR_12,
         &VAR_34);
  break;
 default:
  FUNC_1("Connector table: %d (invalid)\n",
    VAR_32->mode_info.connector_table);
  return 0;
 }

 FUNC_7(VAR_31);

 return 1;
}
