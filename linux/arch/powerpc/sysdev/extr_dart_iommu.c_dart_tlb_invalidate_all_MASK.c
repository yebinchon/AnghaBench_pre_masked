
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(void)
{
 unsigned long VAR_5 = 0;
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 FUNC_4(&VAR_4, VAR_9);

 FUNC_2("dart: flush\n");
 VAR_8 = 0;

 VAR_7 = VAR_3 ? VAR_2 : VAR_1;
retry:
 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_0);
 VAR_6 |= VAR_7;
 FUNC_1(VAR_0, VAR_6);

 while ((FUNC_0(VAR_0) & VAR_7) && VAR_5 < (1L << VAR_8))
  VAR_5++;
 if (VAR_5 == (1L << VAR_8)) {
  if (VAR_8 < 4) {
   VAR_8++;
   VAR_6 = FUNC_0(VAR_0);
   VAR_6 &= ~VAR_7;
   FUNC_1(VAR_0, VAR_6);
   goto retry;
  } else
   FUNC_3("DART: TLB did not flush after waiting a long "
         "time. Buggy U3 ?");
 }

 FUNC_5(&VAR_4, VAR_9);
}
