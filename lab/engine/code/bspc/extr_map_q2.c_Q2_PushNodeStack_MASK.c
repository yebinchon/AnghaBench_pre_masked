
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;

void FUNC_1(int VAR_4)
{
 *VAR_2 = VAR_4;
 VAR_2++;
 VAR_3++;

 if (VAR_2 >= &VAR_1[VAR_0])
 {
  FUNC_0("Q2_PushNodeStack: stack overflow\n");
 }
}
