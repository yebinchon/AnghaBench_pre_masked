
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(Elf32_Ehdr *VAR_2, void *VAR_3)
{
 u_int64_t VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 VAR_5 = (char *)VAR_2 + VAR_4;
 FUNC_1(VAR_1, "\ninterp:\n");
 FUNC_1(VAR_1, "\t%s\n", VAR_5);
}
