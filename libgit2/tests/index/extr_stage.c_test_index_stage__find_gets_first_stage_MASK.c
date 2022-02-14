
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (size_t*,int ,char*) ;
 int * FUNC_3 (int ,size_t) ;
 int VAR_0 ;

void FUNC_4(void)
{
 size_t VAR_1;
 const git_index_entry *VAR_2;

 FUNC_0(!FUNC_2(&VAR_1, VAR_0, "one.txt"));
 FUNC_0((VAR_2 = FUNC_3(VAR_0, VAR_1)) != ((void*)0));
 FUNC_0(FUNC_1(VAR_2) == 0);

 FUNC_0(!FUNC_2(&VAR_1, VAR_0, "two.txt"));
 FUNC_0((VAR_2 = FUNC_3(VAR_0, VAR_1)) != ((void*)0));
 FUNC_0(FUNC_1(VAR_2) == 0);

 FUNC_0(!FUNC_2(&VAR_1, VAR_0, "conflicts-one.txt"));
 FUNC_0((VAR_2 = FUNC_3(VAR_0, VAR_1)) != ((void*)0));
 FUNC_0(FUNC_1(VAR_2) == 1);

 FUNC_0(!FUNC_2(&VAR_1, VAR_0, "conflicts-two.txt"));
 FUNC_0((VAR_2 = FUNC_3(VAR_0, VAR_1)) != ((void*)0));
 FUNC_0(FUNC_1(VAR_2) == 1);
}
