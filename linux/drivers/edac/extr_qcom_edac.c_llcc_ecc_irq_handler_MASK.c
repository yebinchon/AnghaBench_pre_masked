
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct llcc_drv_data {size_t num_banks; scalar_t__* offsets; int regmap; } ;
struct edac_device_ctl_info {struct llcc_drv_data* pvt_info; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,scalar_t__,size_t*) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_12, void *VAR_13)
{
 struct edac_device_ctl_info *VAR_14 = VAR_13;
 struct llcc_drv_data *VAR_15 = VAR_14->pvt_info;
 irqreturn_t VAR_16 = VAR_4;
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20;


 for (VAR_19 = 0; VAR_19 < VAR_15->num_banks; VAR_19++) {
  VAR_20 = FUNC_2(VAR_15->regmap,
      VAR_15->offsets[VAR_19] + VAR_1,
      &VAR_17);

  if (!VAR_20 && (VAR_17 & VAR_10)) {
   FUNC_1(VAR_5, VAR_2,
        "Single Bit Error detected in Data RAM\n");
   VAR_20 = FUNC_0(VAR_13, VAR_6, VAR_19);
  } else if (!VAR_20 && (VAR_17 & VAR_0)) {
   FUNC_1(VAR_5, VAR_2,
        "Double Bit Error detected in Data RAM\n");
   VAR_20 = FUNC_0(VAR_13, VAR_7, VAR_19);
  }
  if (!VAR_20)
   VAR_16 = VAR_3;

  VAR_20 = FUNC_2(VAR_15->regmap,
      VAR_15->offsets[VAR_19] + VAR_11,
      &VAR_18);

  if (!VAR_20 && (VAR_18 & VAR_10)) {
   FUNC_1(VAR_5, VAR_2,
        "Single Bit Error detected in Tag RAM\n");
   VAR_20 = FUNC_0(VAR_13, VAR_8, VAR_19);
  } else if (!VAR_20 && (VAR_18 & VAR_0)) {
   FUNC_1(VAR_5, VAR_2,
        "Double Bit Error detected in Tag RAM\n");
   VAR_20 = FUNC_0(VAR_13, VAR_9, VAR_19);
  }
  if (!VAR_20)
   VAR_16 = VAR_3;
 }

 return VAR_16;
}
