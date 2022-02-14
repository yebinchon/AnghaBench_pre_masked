
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_1;
 int VAR_2;

 FUNC_4();

 for (VAR_1 = 1; VAR_1 < VAR_0; VAR_1++) {
  if (FUNC_0(VAR_1))
   break;
 }
 FUNC_5();

 if (VAR_1 == VAR_0) {
  FUNC_2("No EILVT entry available\n");
  return;
 }

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  goto out;

 if (!FUNC_1())
  goto out;

 FUNC_3("LVT offset %d assigned\n", VAR_1);

 return;
out:
 FUNC_4();
 FUNC_6(VAR_1);
 FUNC_5();
 return;
}
