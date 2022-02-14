
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 unsigned long VAR_1 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_1 + VAR_0;

 FUNC_4("freeing reserved memory (0x%llx - 0x%llx)\n",
  FUNC_0(VAR_2), FUNC_0(VAR_3));

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(FUNC_3(VAR_4));

  if (FUNC_5(VAR_1, VAR_5)) {
   FUNC_1();
   VAR_5 = VAR_1 + VAR_0;
  }
 }
}
