
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 char VAR_4 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_3();
 if (VAR_5 != 'i')
  VAR_4 = VAR_5;
 FUNC_4((void *)&VAR_1);
 if (VAR_4 != '\n')
  VAR_4 = 0;
 VAR_6 = 1;
 FUNC_4(&VAR_6);
 VAR_6 = (VAR_6 + VAR_0 - 1) / VAR_0;
 if (FUNC_5(VAR_2) == 0) {
  VAR_3 = 1;
  FUNC_6();

  if (VAR_5 != 'i') {
   for (; VAR_6 > 0; --VAR_6, VAR_1 += VAR_0)
    FUNC_1((void *) VAR_1);
  } else {
   for (; VAR_6 > 0; --VAR_6, VAR_1 += VAR_0)
    FUNC_2((void *) VAR_1);
  }
  FUNC_6();

  FUNC_0(200);
 }
 VAR_3 = 0;
}
