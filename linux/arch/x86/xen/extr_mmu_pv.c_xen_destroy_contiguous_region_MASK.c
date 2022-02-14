
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (int,unsigned int,unsigned long*,unsigned long,int ,unsigned long*,int ) ;
 int FUNC_7 (unsigned long,unsigned int,unsigned long*,unsigned long) ;
 int VAR_3 ;
 int FUNC_8 (unsigned long,unsigned int,int *,unsigned long*) ;

void FUNC_9(phys_addr_t VAR_4, unsigned int VAR_5)
{
 unsigned long *VAR_6 = VAR_2, VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 if (FUNC_4(VAR_5 > VAR_0))
  return;

 VAR_10 = (unsigned long)FUNC_1(VAR_4);
 FUNC_0((void *) VAR_10, 0, VAR_1 << VAR_5);

 FUNC_2(&VAR_3, VAR_8);


 VAR_7 = FUNC_5(VAR_10);


 FUNC_8(VAR_10, VAR_5, ((void*)0), VAR_6);


 VAR_9 = FUNC_6(1, VAR_5, &VAR_7, 1UL << VAR_5,
     0, VAR_6, 0);


 if (VAR_9)
  FUNC_7(VAR_10, VAR_5, VAR_6, 0);
 else
  FUNC_7(VAR_10, VAR_5, ((void*)0), VAR_7);

 FUNC_3(&VAR_3, VAR_8);
}
