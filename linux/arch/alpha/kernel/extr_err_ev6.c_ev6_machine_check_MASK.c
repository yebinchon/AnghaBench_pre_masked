
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_common {int dummy; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 char* VAR_3 ;
 scalar_t__ FUNC_2 (struct el_common*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,char*,unsigned int,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;

void
FUNC_8(unsigned long VAR_4, unsigned long VAR_5)
{
 struct el_common *VAR_6 = (struct el_common *)VAR_5;




 FUNC_4();
 FUNC_1();






 if (FUNC_2(VAR_6, 0) !=
     VAR_1) {
  char *VAR_7 = VAR_3;
  VAR_3 = VAR_0;






  FUNC_5("%s*CPU %s Error (Vector 0x%x) reported on CPU %d:\n",
         VAR_3,
         (VAR_4 == VAR_2)?"Correctable":"Uncorrectable",
         (unsigned int)VAR_4, (int)FUNC_6());

  FUNC_2(VAR_6, 1);
  FUNC_0(FUNC_3(), ((void*)0));

  VAR_3 = VAR_7;
 }




 FUNC_7(0x7);
 FUNC_4();
}
