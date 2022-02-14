
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
        unsigned long VAR_8, int VAR_9)
{
 unsigned long *VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = (unsigned long *) VAR_6;
 VAR_10 += (VAR_7 & VAR_4) >> VAR_5;
 do {
  VAR_11 = FUNC_3(VAR_7, VAR_8);
  if (*VAR_10 & VAR_2) {
   if (!VAR_9)
    continue;
   VAR_12 = FUNC_1();
   if (!VAR_12)
    return -VAR_0;
   *VAR_10 = VAR_12 | VAR_1;
  }
  VAR_12 = *VAR_10 & VAR_3;
  VAR_13 = FUNC_0(VAR_12, VAR_7, VAR_11, VAR_9);
  if (VAR_13)
   return VAR_13;
  if (!VAR_9)
   FUNC_2(VAR_12);
  FUNC_4();
 } while (VAR_10++, VAR_7 = VAR_11, VAR_7 < VAR_8);
 return 0;
}
