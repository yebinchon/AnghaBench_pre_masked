
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dme1737_data {int has_features; int client; } ;
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
 TYPE_1__ VAR_6 ;
 struct dme1737_data* FUNC_3 (struct device*) ;
 int ** VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_16)
{
 struct dme1737_data *VAR_17 = FUNC_3(VAR_16);
 int VAR_18;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_8); VAR_18++) {
  if (VAR_17->has_features & FUNC_1(VAR_18)) {
   FUNC_5(&VAR_16->kobj,
        &VAR_8[VAR_18]);
  }
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_11); VAR_18++) {
  if (VAR_17->has_features & FUNC_2(VAR_18)) {
   FUNC_5(&VAR_16->kobj,
        &VAR_11[VAR_18]);
   if ((VAR_17->has_features & VAR_1) && VAR_18 < 3) {
    FUNC_4(&VAR_16->kobj,
      VAR_7[VAR_18]);
   }
  }
 }

 if (VAR_17->has_features & VAR_2)
  FUNC_5(&VAR_16->kobj, &VAR_12);
 if (VAR_17->has_features & VAR_3)
  FUNC_5(&VAR_16->kobj, &VAR_13);
 if (VAR_17->has_features & VAR_4)
  FUNC_5(&VAR_16->kobj, &VAR_14);
 if (VAR_17->has_features & VAR_5)
  FUNC_5(&VAR_16->kobj, &VAR_15);
 if (VAR_17->has_features & VAR_0)
  FUNC_5(&VAR_16->kobj, &VAR_10);
 FUNC_5(&VAR_16->kobj, &VAR_9);

 if (!VAR_17->client)
  FUNC_4(&VAR_16->kobj, &VAR_6.attr);
}
