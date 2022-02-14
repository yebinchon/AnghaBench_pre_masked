
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {scalar_t__ prev_time; int member_0; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct rand_data*,scalar_t__,int ) ;
 int FUNC_2 (struct rand_data*,scalar_t__) ;

int FUNC_3(void)
{
 int VAR_7;
 __u64 VAR_8 = 0;
 __u64 VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct rand_data VAR_13 = { 0 };
 for (VAR_7 = 0; (300 + 100) > VAR_7; VAR_7++) {
  __u64 VAR_14 = 0;
  __u64 VAR_15 = 0;
  __u64 VAR_16 = 0;
  unsigned int VAR_17 = 0;
  int VAR_18;


  FUNC_0(&VAR_14);
  VAR_13.prev_time = VAR_14;
  FUNC_1(&VAR_13, VAR_14, 0);
  FUNC_0(&VAR_15);


  if (!VAR_14 || !VAR_15)
   return VAR_3;
  VAR_16 = VAR_15 - VAR_14;





  if (!VAR_16)
   return VAR_1;

  VAR_18 = FUNC_2(&VAR_13, VAR_16);
  if (100 > VAR_7)
   continue;

  if (VAR_18)
   VAR_12++;


  if (!(VAR_15 > VAR_14))
   VAR_10++;


  VAR_17 = VAR_15 - VAR_14;
  if (!(VAR_17 % 100))
   VAR_11++;







  if (VAR_16 > VAR_9)
   VAR_8 += (VAR_16 - VAR_9);
  else
   VAR_8 += (VAR_9 - VAR_16);
  VAR_9 = VAR_16;
 }
 if (3 < VAR_10)
  return VAR_2;






 if ((VAR_8) <= 1)
  return VAR_5;






 if ((300/10 * 9) < VAR_11)
  return VAR_1;





 if ((300/10 * 9) < VAR_12)
  return VAR_4;

 return 0;
}
