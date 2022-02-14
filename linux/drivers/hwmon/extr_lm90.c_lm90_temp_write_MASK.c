
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm90_data {int update_lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm90_data* FUNC_0 (struct device*) ;






 int FUNC_1 (struct lm90_data*,int ,long) ;
 int FUNC_2 (struct lm90_data*,int ,long) ;
 int FUNC_3 (struct lm90_data*,long) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, u32 VAR_7, int VAR_8, long VAR_9)
{
 struct lm90_data *VAR_10 = FUNC_0(VAR_6);
 int VAR_11;

 FUNC_5(&VAR_10->update_lock);

 VAR_11 = FUNC_4(VAR_6);
 if (VAR_11)
  goto error;

 switch (VAR_7) {
 case 129:
  if (VAR_8 == 0)
   VAR_11 = FUNC_2(VAR_10,
           VAR_5[VAR_8],
           VAR_9);
  else
   VAR_11 = FUNC_1(VAR_10,
           VAR_5[VAR_8],
           VAR_9);
  break;
 case 130:
  if (VAR_8 == 0)
   VAR_11 = FUNC_2(VAR_10,
          VAR_4[VAR_8],
          VAR_9);
  else
   VAR_11 = FUNC_1(VAR_10,
           VAR_4[VAR_8],
           VAR_9);
  break;
 case 133:
  VAR_11 = FUNC_2(VAR_10, VAR_2[VAR_8], VAR_9);
  break;
 case 132:
  VAR_11 = FUNC_3(VAR_10, VAR_9);
  break;
 case 131:
  VAR_11 = FUNC_2(VAR_10, VAR_3[VAR_8], VAR_9);
  break;
 case 128:
  VAR_11 = FUNC_1(VAR_10, VAR_1, VAR_9);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
error:
 FUNC_6(&VAR_10->update_lock);

 return VAR_11;
}
