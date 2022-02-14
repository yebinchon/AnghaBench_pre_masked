
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_2__* core; } ;
struct TYPE_3__ {int id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_4__ {struct bcma_bus* bus; } ;


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
 int FUNC_0 (struct bcma_bus*,char*,int) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_cc *VAR_18)
{
 struct bcma_bus *VAR_19 = VAR_18->core->bus;
 u32 VAR_20 = 0, VAR_21 = 0;

 switch (VAR_19->chipinfo.id) {
 case 129:
  VAR_20 = 0x200D;
  VAR_21 = 0xFFFF;
  break;
 case 128:
  VAR_20 = VAR_8 |
     VAR_14 |
     VAR_13 |
     VAR_2 |
     VAR_3 |
     VAR_4 |
     VAR_7 |
     VAR_16 |
     VAR_5 |
     VAR_12 |
     VAR_17 |
     VAR_9 |
     VAR_6 |
     VAR_11 |
     VAR_10 |
     VAR_15;
  VAR_21 = 0x3FFFFFFF;
  break;
 default:
  FUNC_0(VAR_19, "PMU resource config unknown or not needed for device 0x%04X\n",
      VAR_19->chipinfo.id);
 }


 if (VAR_20)
  FUNC_1(VAR_18, VAR_1, VAR_20);
 if (VAR_21)
  FUNC_1(VAR_18, VAR_0, VAR_21);





 FUNC_2(2000, 2500);
}
