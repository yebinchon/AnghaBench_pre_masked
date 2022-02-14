
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int **,int ,char*) ;
 int VAR_1 ;

void FUNC_3(void)
{
 git_tree_entry *VAR_2;

 FUNC_0(VAR_1, "README", "README");
 FUNC_0(VAR_1, "ab/de/fgh/1.txt", "1.txt");
 FUNC_0(VAR_1, "ab/de/fgh", "fgh");
 FUNC_0(VAR_1, "ab/de/fgh/", "fgh");
 FUNC_0(VAR_1, "ab/de", "de");
 FUNC_0(VAR_1, "ab/", "ab");
 FUNC_0(VAR_1, "ab/de/", "de");

 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "i-do-not-exist.txt"));
 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "README/"));
 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "ab/de/fgh/i-do-not-exist.txt"));
 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "nope/de/fgh/1.txt"));
 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "ab/me-neither/fgh/2.txt"));
 FUNC_1(VAR_0, FUNC_2(&VAR_2, VAR_1, "ab/me-neither/fgh/2.txt/"));
}
