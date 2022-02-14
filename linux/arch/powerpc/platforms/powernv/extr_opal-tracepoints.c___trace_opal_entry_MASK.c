
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 () ;
 unsigned int* FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,unsigned long*) ;

void FUNC_5(unsigned long VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3;
 unsigned int *VAR_4;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_3(&VAR_0);

 if (*VAR_4)
  goto out;

 (*VAR_4)++;
 FUNC_2();
 FUNC_4(VAR_1, VAR_2);
 (*VAR_4)--;

out:
 FUNC_0(VAR_3);
}
