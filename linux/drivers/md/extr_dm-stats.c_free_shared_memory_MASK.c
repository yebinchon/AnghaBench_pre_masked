
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(size_t VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1, VAR_3);

 if (FUNC_1(VAR_0 < VAR_2)) {
  FUNC_3(&VAR_1, VAR_3);
  FUNC_0("Memory usage accounting bug.");
  return;
 }

 VAR_0 -= VAR_2;

 FUNC_3(&VAR_1, VAR_3);
}
