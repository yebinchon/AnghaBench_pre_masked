
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int * VAR_1 ;

void FUNC_5(void)
{
 int VAR_2;
 unsigned long VAR_3, VAR_4;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  VAR_4 = FUNC_1(VAR_1[VAR_2]);
  if (VAR_4 & VAR_0)
   VAR_3 += FUNC_2(VAR_4);
 }

 VAR_3 = FUNC_3(VAR_3);
 FUNC_4(0, VAR_3);
}
