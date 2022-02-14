
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int wd_timeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct n2rng*,unsigned long,unsigned long,unsigned long,int ,unsigned long*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct n2rng *VAR_8,
           unsigned long VAR_9,
           unsigned long VAR_10,
           unsigned long VAR_11)
{
 unsigned long VAR_12, VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 while (1) {
  VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_11, VAR_9,
          VAR_8->wd_timeo, &VAR_13);
  if (VAR_12 == VAR_4)
   return 0;

  if (VAR_12 == VAR_5) {
   if (++VAR_14 >= VAR_6)
    return -VAR_2;
   FUNC_0(VAR_13);
  } else if (VAR_12 == VAR_3) {
   if (++VAR_15 >= VAR_7)
    return -VAR_0;
   FUNC_2(1);
  } else
   return -VAR_1;
 }
}
