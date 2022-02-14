
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm90_data {int alarms; int update_lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm90_data* FUNC_0 (struct device*) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 long FUNC_1 (struct lm90_data*,int ) ;
 long FUNC_2 (struct lm90_data*,int ) ;
 long FUNC_3 (struct lm90_data*,int ) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12, u32 VAR_13, int VAR_14, long *VAR_15)
{
 struct lm90_data *VAR_16 = FUNC_0(VAR_12);
 int VAR_17;

 FUNC_5(&VAR_16->update_lock);
 VAR_17 = FUNC_4(VAR_12);
 FUNC_6(&VAR_16->update_lock);
 if (VAR_17)
  return VAR_17;

 switch (VAR_13) {
 case 133:
  *VAR_15 = FUNC_1(VAR_16, VAR_9[VAR_14]);
  break;
 case 129:
  *VAR_15 = (VAR_16->alarms >> VAR_6[VAR_14]) & 1;
  break;
 case 131:
  *VAR_15 = (VAR_16->alarms >> VAR_5[VAR_14]) & 1;
  break;
 case 139:
  *VAR_15 = (VAR_16->alarms >> VAR_2[VAR_14]) & 1;
  break;
 case 136:
  *VAR_15 = (VAR_16->alarms >> VAR_3[VAR_14]) & 1;
  break;
 case 134:
  *VAR_15 = (VAR_16->alarms >> VAR_4[VAR_14]) & 1;
  break;
 case 130:
  if (VAR_14 == 0)
   *VAR_15 = FUNC_2(VAR_16,
           VAR_11[VAR_14]);
  else
   *VAR_15 = FUNC_1(VAR_16,
            VAR_11[VAR_14]);
  break;
 case 132:
  if (VAR_14 == 0)
   *VAR_15 = FUNC_2(VAR_16,
           VAR_10[VAR_14]);
  else
   *VAR_15 = FUNC_1(VAR_16,
            VAR_10[VAR_14]);
  break;
 case 140:
  *VAR_15 = FUNC_2(VAR_16, VAR_7[VAR_14]);
  break;
 case 138:
  *VAR_15 = FUNC_3(VAR_16, VAR_7[VAR_14]);
  break;
 case 137:
  *VAR_15 = FUNC_2(VAR_16, VAR_8[VAR_14]);
  break;
 case 135:
  *VAR_15 = FUNC_3(VAR_16, VAR_8[VAR_14]);
  break;
 case 128:
  *VAR_15 = FUNC_1(VAR_16, VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
