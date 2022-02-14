
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int conversion_time; int measuring_done; scalar_t__ use_interrupt; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct rm3100_data *VAR_3)
{
 struct regmap *VAR_4 = VAR_3->regmap;
 unsigned int VAR_5;
 int VAR_6 = 20;
 int VAR_7;
 if (VAR_3->use_interrupt)
  FUNC_2(&VAR_3->measuring_done);

 VAR_7 = FUNC_1(VAR_4, VAR_1, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 if ((VAR_5 & VAR_2) != VAR_2) {
  if (VAR_3->use_interrupt) {
   VAR_7 = FUNC_4(&VAR_3->measuring_done,
    FUNC_0(VAR_3->conversion_time));
   if (!VAR_7)
    return -VAR_0;
  } else {
   do {
    FUNC_3(1000, 5000);

    VAR_7 = FUNC_1(VAR_4, VAR_1,
        &VAR_5);
    if (VAR_7 < 0)
     return VAR_7;

    if (VAR_5 & VAR_2)
     break;
   } while (--VAR_6);
   if (!VAR_6)
    return -VAR_0;
  }
 }
 return 0;
}
