
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybuf {int dummy; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct keybuf VAR_2 ;
 struct keybuf* VAR_3 ;
 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 caddr_t VAR_4;

 VAR_4 = FUNC_0("elf kernel");

 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_0("elf64 kernel");

 VAR_3 = (struct keybuf *)FUNC_1(VAR_4,
     VAR_1 | VAR_0);

        if (VAR_3 == ((void*)0))
                VAR_3 = &VAR_2;
}
