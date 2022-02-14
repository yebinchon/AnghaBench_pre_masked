
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int elf_file_t ;
struct TYPE_3__ {long st_value; } ;
typedef TYPE_1__ Elf_Sym ;


 int FUNC_0 (int ,char*,TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(elf_file_t VAR_1, const char *VAR_2, long *VAR_3, long *VAR_4,
    long *VAR_5)
{
 Elf_Sym *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_4(VAR_2) + sizeof("__start_set_");
 VAR_7 = FUNC_2(VAR_9);
 if (VAR_7 == ((void*)0))
  return (VAR_0);


 FUNC_3(VAR_7, VAR_9, "%s%s", "__start_set_", VAR_2);
 VAR_8 = FUNC_0(VAR_1, VAR_7, &VAR_6);
 if (VAR_8 != 0)
  goto out;
 *VAR_3 = VAR_6->st_value;


 FUNC_3(VAR_7, VAR_9, "%s%s", "__stop_set_", VAR_2);
 VAR_8 = FUNC_0(VAR_1, VAR_7, &VAR_6);
 if (VAR_8 != 0)
  goto out;
 *VAR_4 = VAR_6->st_value;


 *VAR_5 = (*VAR_4 - *VAR_3) / sizeof(void *);

out:
 FUNC_1(VAR_7);
 return (VAR_8);
}
