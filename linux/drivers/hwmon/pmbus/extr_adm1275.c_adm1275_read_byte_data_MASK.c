
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;
struct adm1275_data {int have_mfr_vaux_status; int have_vaux_status; int have_vout; int have_oc_fault; int have_uc_fault; } ;


 int VAR_0 ;
 int const VAR_1 ;
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

 int const VAR_12 ;

 struct pmbus_driver_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int const) ;
 struct adm1275_data* FUNC_2 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_13, int VAR_14, int VAR_15)
{
 const struct pmbus_driver_info *VAR_16 = FUNC_0(VAR_13);
 const struct adm1275_data *VAR_17 = FUNC_2(VAR_16);
 int VAR_18, VAR_19;

 if (VAR_14 > 0)
  return -VAR_7;

 switch (VAR_15) {
 case 129:
  VAR_19 = FUNC_1(VAR_13, VAR_14, 129);
  if (VAR_19 < 0)
   break;
  if (!VAR_17->have_oc_fault && !VAR_17->have_uc_fault)
   break;
  VAR_18 = FUNC_1(VAR_13, VAR_14,
        VAR_12);
  if (VAR_18 < 0)
   return VAR_18;
  if (VAR_18 & VAR_3) {
   VAR_19 |= VAR_17->have_oc_fault ?
     VAR_8 : VAR_9;
  }
  break;
 case 128:
  if (VAR_17->have_vout)
   return -VAR_6;
  VAR_19 = 0;
  if (VAR_17->have_vaux_status) {
   VAR_18 = FUNC_1(VAR_13, 0,
         VAR_1);
   if (VAR_18 < 0)
    return VAR_18;
   if (VAR_18 & VAR_0)
    VAR_19 |= VAR_10;
   if (VAR_18 & VAR_2)
    VAR_19 |= VAR_11;
  } else if (VAR_17->have_mfr_vaux_status) {
   VAR_18 = FUNC_1(VAR_13, VAR_14,
      VAR_12);
   if (VAR_18 < 0)
    return VAR_18;
   if (VAR_18 & VAR_4)
    VAR_19 |= VAR_10;
   if (VAR_18 & VAR_5)
    VAR_19 |= VAR_11;
  }
  break;
 default:
  VAR_19 = -VAR_6;
  break;
 }
 return VAR_19;
}
