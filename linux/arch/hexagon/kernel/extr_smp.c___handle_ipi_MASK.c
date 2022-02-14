
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipi_data {int dummy; } ;


 unsigned long VAR_0 ;




 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(unsigned long *VAR_1, struct ipi_data *VAR_2,
    int VAR_3)
{
 unsigned long VAR_4 = 0;
 do {
  VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_4+1);

  switch (VAR_4) {

  case 128:
   FUNC_3();
   break;

  case 131:
   FUNC_2();
   break;

  case 130:



   FUNC_0();
   break;

  case 129:
   FUNC_4();
   break;
  }
 } while (VAR_4 < VAR_0);
}
