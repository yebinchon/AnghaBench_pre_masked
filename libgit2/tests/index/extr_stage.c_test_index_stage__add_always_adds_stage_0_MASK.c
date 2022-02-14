
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (size_t*,int ,char*) ;
 int * FUNC_6 (int ,size_t) ;
 int VAR_0 ;

void FUNC_7(void)
{
 size_t VAR_1;
 const git_index_entry *VAR_2;

    FUNC_1("./mergedrepo/new-file.txt", "new-file\n");

 FUNC_2(FUNC_3(VAR_0, "new-file.txt"));

 FUNC_0(!FUNC_5(&VAR_1, VAR_0, "new-file.txt"));
 FUNC_0((VAR_2 = FUNC_6(VAR_0, VAR_1)) != ((void*)0));
 FUNC_0(FUNC_4(VAR_2) == 0);
}
