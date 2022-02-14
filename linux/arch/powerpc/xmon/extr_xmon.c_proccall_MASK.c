
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long (* callfunc_t ) (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned long*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 char VAR_4 ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_5[8];
 unsigned long VAR_6;
 int VAR_7;
 typedef unsigned long (*callfunc_t)(unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long);
 callfunc_t VAR_8;

 if (!FUNC_1(&VAR_0))
  return;
 if (VAR_4 != '\n')
  VAR_4 = 0;
 for (VAR_7 = 0; VAR_7 < 8; ++VAR_7)
  VAR_5[VAR_7] = 0;
 for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
  if (!FUNC_1(&VAR_5[VAR_7]) || VAR_4 == '\n')
   break;
  VAR_4 = 0;
 }
 VAR_8 = (callfunc_t) VAR_0;
 VAR_6 = 0;
 if (FUNC_2(VAR_1) == 0) {
  VAR_2 = 1;
  FUNC_3();
  VAR_6 = VAR_8(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3],
      VAR_5[4], VAR_5[5], VAR_5[6], VAR_5[7]);
  FUNC_3();
  FUNC_0("return value is 0x%lx\n", VAR_6);
 } else {
  FUNC_0("*** %x exception occurred\n", VAR_3);
 }
 VAR_2 = 0;
}
