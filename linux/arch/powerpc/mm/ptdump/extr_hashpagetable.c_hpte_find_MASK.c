
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct pg_state {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long,int,int,unsigned long*,unsigned long*) ;
 int FUNC_1 (int,unsigned long,unsigned long*,int*,unsigned long*) ;
 int FUNC_2 (struct pg_state*,unsigned long,unsigned long,unsigned long,unsigned long,int,int,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(struct pg_state *VAR_4, unsigned long VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0;

 if (VAR_5 < VAR_3)
  return -1;


 VAR_7 = FUNC_0(VAR_5, VAR_6, 1, &VAR_8, &VAR_9);


 if (VAR_7 == -1)
  VAR_7 = FUNC_0(VAR_5, VAR_6, 0, &VAR_8, &VAR_9);


 if (VAR_7 == -1)
  return -1;







 VAR_12 = FUNC_3(VAR_6);

 if ((VAR_8 & VAR_2) == VAR_2) {
  FUNC_1(VAR_6, VAR_9, &VAR_10, &VAR_13, &VAR_11);
 } else {

  VAR_13 = 12;
  VAR_10 = (VAR_9 & VAR_0) >> VAR_1;

  VAR_11 = -1;
 }




 if (VAR_13 == -1)
  return -1;

 FUNC_2(VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_12, VAR_13, VAR_11);
 return 0;
}
