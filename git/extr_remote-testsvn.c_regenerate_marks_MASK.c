
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_2;
 FILE *VAR_3 = FUNC_3(VAR_0, "w+");

 VAR_2 = FUNC_2(((void*)0), 0, VAR_1, VAR_3);
 if (VAR_2)
  FUNC_0("Regeneration of marks failed, returned %d.", VAR_2);
 FUNC_1(VAR_3);
}
