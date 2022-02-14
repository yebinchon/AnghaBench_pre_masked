
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dme1737_data {int has_features; int config; int * pwm_config; int client; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int attr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 struct dme1737_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int ** VAR_9 ;
 int FUNC_6 (struct device*,int *,int) ;
 int FUNC_7 (struct device*,int *,int) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int ** VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_8 (struct device*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_22)
{
 struct dme1737_data *VAR_23 = FUNC_4(VAR_22);
 int VAR_24, VAR_25;


 if (!VAR_23->client) {
  VAR_24 = FUNC_9(&VAR_22->kobj, &VAR_8.attr);
  if (VAR_24)
   goto exit;
 }


 VAR_24 = FUNC_10(&VAR_22->kobj, &VAR_11);
 if (VAR_24)
  goto exit_remove;


 if (VAR_23->has_features & VAR_2) {
  VAR_24 = FUNC_10(&VAR_22->kobj,
      &VAR_16);
  if (VAR_24)
   goto exit_remove;
 }
 if (VAR_23->has_features & VAR_3) {
  VAR_24 = FUNC_10(&VAR_22->kobj, &VAR_17);
  if (VAR_24)
   goto exit_remove;
 }
 if (VAR_23->has_features & VAR_4) {
  VAR_24 = FUNC_10(&VAR_22->kobj, &VAR_19);
  if (VAR_24)
   goto exit_remove;
 }
 if (VAR_23->has_features & VAR_5) {
  VAR_24 = FUNC_10(&VAR_22->kobj, &VAR_21);
  if (VAR_24)
   goto exit_remove;
 }
 if (VAR_23->has_features & VAR_0) {
  VAR_24 = FUNC_10(&VAR_22->kobj, &VAR_12);
  if (VAR_24)
   goto exit_remove;
 }


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_10); VAR_25++) {
  if (VAR_23->has_features & FUNC_1(VAR_25)) {
   VAR_24 = FUNC_10(&VAR_22->kobj,
       &VAR_10[VAR_25]);
   if (VAR_24)
    goto exit_remove;
  }
 }


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_15); VAR_25++) {
  if (VAR_23->has_features & FUNC_2(VAR_25)) {
   VAR_24 = FUNC_10(&VAR_22->kobj,
       &VAR_15[VAR_25]);
   if (VAR_24)
    goto exit_remove;
   if ((VAR_23->has_features & VAR_1) && (VAR_25 < 3)) {
    VAR_24 = FUNC_9(&VAR_22->kobj,
      VAR_9[VAR_25]);
    if (VAR_24)
     goto exit_remove;
   }
  }
 }





 if (VAR_23->config & 0x02) {
  FUNC_5(VAR_22,
    "Device is locked. Some attributes will be read-only.\n");
 } else {

  FUNC_7(VAR_22, &VAR_20,
        VAR_6 | VAR_7);


  if (VAR_23->has_features & VAR_2) {
   FUNC_7(VAR_22, &VAR_16,
         VAR_6 | VAR_7);
  }
  if (VAR_23->has_features & VAR_4) {
   FUNC_7(VAR_22, &VAR_18,
         VAR_6 | VAR_7);
  }
  if (VAR_23->has_features & VAR_5) {
   FUNC_7(VAR_22, &VAR_21,
         VAR_6 | VAR_7);
  }


  for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_14); VAR_25++) {
   if (VAR_23->has_features & FUNC_2(VAR_25)) {
    FUNC_7(VAR_22,
      &VAR_14[VAR_25],
      VAR_6 | VAR_7);
    if ((VAR_23->has_features & VAR_1) &&
        VAR_25 < 3) {
     FUNC_6(VAR_22,
      VAR_9[VAR_25],
      VAR_6 | VAR_7);
    }
   }
  }


  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   if ((VAR_23->has_features & FUNC_2(VAR_25)) &&
       (FUNC_3(VAR_23->pwm_config[VAR_25]) == 1)) {
    FUNC_6(VAR_22,
      VAR_13[VAR_25],
      VAR_6 | VAR_7);
   }
  }
 }

 return 0;

exit_remove:
 FUNC_8(VAR_22);
exit:
 return VAR_24;
}
