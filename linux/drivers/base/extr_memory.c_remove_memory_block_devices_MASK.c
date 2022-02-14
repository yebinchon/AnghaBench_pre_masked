
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ section_count; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct memory_block* FUNC_3 (unsigned long) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct memory_block*) ;
 int FUNC_9 (struct memory_block*) ;

void FUNC_10(unsigned long VAR_1, unsigned long VAR_2)
{
 const unsigned long VAR_3 = FUNC_7(FUNC_1(VAR_1));
 const unsigned long VAR_4 = FUNC_7(FUNC_1(VAR_1 + VAR_2));
 struct memory_block *VAR_5;
 unsigned long VAR_6;

 if (FUNC_2(!FUNC_0(VAR_1, FUNC_4()) ||
    !FUNC_0(VAR_2, FUNC_4())))
  return;

 FUNC_5(&VAR_0);
 for (VAR_6 = VAR_3; VAR_6 != VAR_4; VAR_6++) {
  VAR_5 = FUNC_3(VAR_6);
  if (FUNC_2(!VAR_5))
   continue;
  VAR_5->section_count = 0;
  FUNC_9(VAR_5);
  FUNC_8(VAR_5);
 }
 FUNC_6(&VAR_0);
}
