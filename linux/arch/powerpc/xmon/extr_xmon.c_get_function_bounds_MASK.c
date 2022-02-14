
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (unsigned long,unsigned long*,unsigned long*,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3, unsigned long *VAR_4,
    unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 const char *VAR_8;

 *VAR_4 = *VAR_5 = 0;
 if (VAR_3 == 0)
  return;
 if (FUNC_1(VAR_0) == 0) {
  VAR_1 = 1;
  FUNC_2();
  VAR_8 = FUNC_0(VAR_3, &VAR_6, &VAR_7, ((void*)0), VAR_2);
  if (VAR_8 != ((void*)0)) {
   *VAR_4 = VAR_3 - VAR_7;
   *VAR_5 = VAR_3 - VAR_7 + VAR_6;
  }
  FUNC_2();
 }
 VAR_1 = 0;
}
