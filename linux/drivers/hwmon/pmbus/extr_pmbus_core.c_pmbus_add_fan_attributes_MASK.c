
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int pages; int* func; } ;
struct pmbus_data {struct pmbus_driver_info* info; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct pmbus_data*,char*,char*,int,int *,int *,int,int) ;
 int FUNC_3 (struct i2c_client*,struct pmbus_data*,int,int,int,int) ;
 int * FUNC_4 (struct pmbus_data*,char*,char*,int,int,int ,int ,int,int,int) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int,int ) ;
 scalar_t__ FUNC_6 (struct i2c_client*,int,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int* VAR_9 ;
 int * VAR_10 ;
 int* VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_13,
        struct pmbus_data *VAR_14)
{
 const struct pmbus_driver_info *VAR_15 = VAR_14->info;
 int VAR_16 = 1;
 int VAR_17;
 int VAR_18;

 for (VAR_17 = 0; VAR_17 < VAR_15->pages; VAR_17++) {
  int VAR_19;

  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_10); VAR_19++) {
   int VAR_20;

   if (!(VAR_15->func[VAR_17] & VAR_9[VAR_19]))
    break;

   if (!FUNC_6(VAR_13, VAR_17,
             VAR_10[VAR_19]))
    break;






   VAR_20 = FUNC_1(VAR_13, VAR_17,
    VAR_8[VAR_19]);
   if (VAR_20 < 0 ||
       (!(VAR_20 & (VAR_1 >> ((VAR_19 & 1) * 4)))))
    continue;

   if (FUNC_4(VAR_14, "fan", "input", VAR_16,
          VAR_17, VAR_10[VAR_19],
          VAR_6, 1, 1, 1) == ((void*)0))
    return -VAR_0;


   if (FUNC_6(VAR_13, VAR_17,
     VAR_7[VAR_19])) {
    VAR_18 = FUNC_3(VAR_13, VAR_14, VAR_16,
        VAR_17, VAR_19, VAR_20);
    if (VAR_18 < 0)
     return VAR_18;
   }





   if ((VAR_15->func[VAR_17] & VAR_11[VAR_19]) &&
       FUNC_5(VAR_13,
     VAR_17, VAR_12[VAR_19])) {
    int VAR_21;

    if (VAR_19 > 1)
     VAR_21 = VAR_4 + VAR_17;
    else
     VAR_21 = VAR_5 + VAR_17;
    VAR_18 = FUNC_2(VAR_14, "fan",
     "alarm", VAR_16, ((void*)0), ((void*)0), VAR_21,
     VAR_3 >> (VAR_19 & 1));
    if (VAR_18)
     return VAR_18;
    VAR_18 = FUNC_2(VAR_14, "fan",
     "fault", VAR_16, ((void*)0), ((void*)0), VAR_21,
     VAR_2 >> (VAR_19 & 1));
    if (VAR_18)
     return VAR_18;
   }
   VAR_16++;
  }
 }
 return 0;
}
