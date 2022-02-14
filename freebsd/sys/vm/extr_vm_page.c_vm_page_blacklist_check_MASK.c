
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char**,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, char *VAR_2)
{
 vm_paddr_t VAR_3;
 char *VAR_4;

 VAR_4 = VAR_1;
 while (VAR_4 != ((void*)0)) {
  if ((VAR_3 = FUNC_1(&VAR_4, VAR_2)) == 0)
   continue;
  FUNC_0(VAR_3, VAR_0);
 }
}
