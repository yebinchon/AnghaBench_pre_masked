
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned int VAR_1 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_4(VAR_4);
 VAR_5 = !VAR_1;
 if (VAR_3)
  VAR_1 &= ~VAR_2;
 else
  VAR_1 |= VAR_2;

 if (VAR_5 != !VAR_1) {
  if (VAR_1) {
   FUNC_1(VAR_0);
   FUNC_2();
  } else {
   FUNC_0(VAR_0);
  }
 }
 FUNC_3(VAR_4);
}
