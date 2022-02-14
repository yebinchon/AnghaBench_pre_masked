
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 int VAR_0[10000];
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++)
  (void)FUNC_2(&VAR_0[VAR_1]);
 FUNC_3("PASS\n");

 FUNC_0(0);
}
