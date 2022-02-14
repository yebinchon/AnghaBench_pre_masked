
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned int* FUNC_3 (int *) ;
 int FUNC_4 (int) ;

void FUNC_5(int VAR_2)
{
 unsigned long VAR_3;
 unsigned int *VAR_4;


 if (FUNC_0(VAR_0))
  return;
 FUNC_2(VAR_3);
 VAR_4 = FUNC_3(&VAR_1);
 if (*VAR_4 == 0) {
  (*VAR_4)++;
  FUNC_4(VAR_2);
  (*VAR_4)--;
 }
 FUNC_1(VAR_3);
}
