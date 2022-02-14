
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void
FUNC_4 (void *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 VAR_4[VAR_0] = 0;

 FUNC_3(VAR_6);
 {
  for (VAR_7 = 0; VAR_7 < VAR_2*VAR_1; ++VAR_7) {
   while (!VAR_4[VAR_0])
    FUNC_0();
   VAR_4[VAR_0] = 0;
   VAR_4[VAR_3] = FUNC_1();
  }
 }
 FUNC_2(VAR_6);
}
