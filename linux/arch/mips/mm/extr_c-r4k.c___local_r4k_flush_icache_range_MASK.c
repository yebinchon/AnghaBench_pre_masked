
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static inline void FUNC_8(unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned int VAR_7,
        bool VAR_8)
{
 if (!VAR_2) {
  if (VAR_7 == VAR_1 ||
      (VAR_7 & VAR_1 && VAR_6 - VAR_5 >= VAR_3)) {
   FUNC_6();
  } else {
   VAR_0;
   if (VAR_8)
    FUNC_3(VAR_5, VAR_6);
   else
    FUNC_0(VAR_5, VAR_6);
  }
 }

 if (VAR_7 == VAR_1 ||
     (VAR_7 & VAR_1 && VAR_6 - VAR_5 > VAR_4))
  FUNC_7();
 else {
  switch (FUNC_2()) {
  case 128:
   FUNC_5(VAR_5, VAR_6);
   break;

  default:
   if (VAR_8)
    FUNC_4(VAR_5, VAR_6);
   else
    FUNC_1(VAR_5, VAR_6);
   break;
  }
 }
}
