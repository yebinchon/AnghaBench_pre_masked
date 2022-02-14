
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {int len; int * offsets; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct trx_header *VAR_6 = ((void*)0);
 unsigned long VAR_7,VAR_8;

     FUNC_1("Looking for TRX header... ");

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += VAR_1) {
  if (FUNC_2(&VAR_3[VAR_5]) == VAR_2) {
   VAR_6 = (struct trx_header *)&VAR_3[VAR_5];
   break;
  }
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_1("not found!\n");

  FUNC_0();
 }


 VAR_7 = FUNC_2(&VAR_6->offsets[1]);
 if (VAR_7 == 0 || VAR_7 > 65536) {
  VAR_8 = VAR_7-FUNC_2(&VAR_6->offsets[0]);
  VAR_7 = FUNC_2(&VAR_6->offsets[0]);
 } else {
  VAR_8 = FUNC_2(&VAR_6->offsets[2]);
  if (VAR_8 > VAR_7)
   VAR_8 -= VAR_7;
  else
   VAR_8 = FUNC_2(&VAR_6->len)-VAR_7;
 }

 FUNC_1("found at %08X, kernel:%08X len:%08X\n", VAR_5,
  VAR_7, VAR_8);

 VAR_5 += VAR_7;
 VAR_4 = VAR_5+VAR_8;
}
