
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(unsigned long VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_4(&VAR_4, VAR_9);

 VAR_6 = VAR_1 | VAR_2 |
  (VAR_5 & VAR_3);
 FUNC_1(VAR_0, VAR_6);

 VAR_8 = 0;
wait_more:
 VAR_7 = 0;
 while ((FUNC_0(VAR_0) & VAR_2) && VAR_7 < (1L << VAR_8)) {
  FUNC_3();
  VAR_7++;
 }

 if (VAR_7 == (1L << VAR_8)) {
  if (VAR_8 < 4) {
   VAR_8++;
   goto wait_more;
  } else
   FUNC_2("DART: TLB did not flush after waiting a long "
         "time. Buggy U4 ?");
 }

 FUNC_5(&VAR_4, VAR_9);
}
