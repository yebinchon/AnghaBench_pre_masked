
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * buffer; } ;
typedef TYPE_1__ git_filebuf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 git_filebuf VAR_1 = VAR_0;
 char VAR_2[] = "test";

 FUNC_0(VAR_1.buffer == ((void*)0));

 FUNC_1(FUNC_4(&VAR_1, VAR_2, 0, 0666));
 FUNC_0(VAR_1.buffer != ((void*)0));
 FUNC_1(FUNC_5(&VAR_1, "%s\n", "libgit2 rocks"));
 FUNC_0(VAR_1.buffer != ((void*)0));

 FUNC_1(FUNC_3(&VAR_1));
 FUNC_0(VAR_1.buffer == ((void*)0));

 FUNC_2(FUNC_6(VAR_2));
}
