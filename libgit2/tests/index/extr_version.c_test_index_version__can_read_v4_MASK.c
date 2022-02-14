
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;
typedef int git_index ;


 size_t FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 (int **,int ) ;

void FUNC_9(void)
{
 const char *VAR_2[] = {
     "file.tx", "file.txt", "file.txz", "foo", "zzz",
 };
 git_index *VAR_3;
 size_t VAR_4;

 VAR_1 = FUNC_4("indexv4");

 FUNC_3(FUNC_8(&VAR_3, VAR_1));
 FUNC_2(FUNC_5(VAR_3), 5);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  const git_index_entry *VAR_5 =
      FUNC_7(VAR_3, VAR_2[VAR_4], VAR_0);

  FUNC_1(VAR_5 != ((void*)0));
 }

 FUNC_6(VAR_3);
}
