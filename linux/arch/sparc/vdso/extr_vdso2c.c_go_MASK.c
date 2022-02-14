
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* e_ident; } ;
typedef int FILE ;
typedef TYPE_1__ Elf64_Ehdr ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,size_t,void*,size_t,int *,char const*) ;
 int FUNC_2 (void*,size_t,void*,size_t,int *,char const*) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, size_t VAR_4,
        void *VAR_5, size_t VAR_6,
        FILE *VAR_7, const char *VAR_8)
{
 Elf64_Ehdr *VAR_9 = (Elf64_Ehdr *)VAR_3;

 if (VAR_9->e_ident[VAR_0] == VAR_2) {
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
 } else if (VAR_9->e_ident[VAR_0] == VAR_1) {
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
 } else {
  FUNC_0("unknown ELF class\n");
 }
}
