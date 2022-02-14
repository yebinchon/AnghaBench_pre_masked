
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(size_t *VAR_1, int *VAR_2)
{
 int VAR_3;

 FUNC_1("alloc sizes: ");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0("[%zu]", VAR_1[VAR_3]);
 FUNC_0("\n");
 FUNC_1("free seq: ");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0("[%d]", VAR_2[VAR_3]);
 FUNC_0("\n");
}
