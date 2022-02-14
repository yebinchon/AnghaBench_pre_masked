
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int wakeup; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct sirf_data*) ;
 int FUNC_1 (struct sirf_data*) ;
 int FUNC_2 (struct sirf_data*) ;
 int FUNC_3 (struct sirf_data*,int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sirf_data *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 3;
 int VAR_7;

 if (VAR_4)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2;

 if (!VAR_3->wakeup) {
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 do {
  FUNC_0(VAR_3);
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 } while (VAR_7 == -VAR_0 && VAR_6--);

 if (!VAR_3->wakeup)
  FUNC_1(VAR_3);

 if (VAR_7)
  return VAR_7;

 return 0;
}
