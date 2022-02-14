
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note_iterator ;
typedef int git_note ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,int *,int ,int *,int ,int ,int *,char const*,int ) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,char*) ;

void FUNC_14(void)
{
 git_note_iterator *VAR_3;
 git_note *VAR_4;
 git_oid VAR_5, VAR_6;
 git_oid VAR_7[2];
 git_oid VAR_8[2];
 git_commit *VAR_9[2];
 const char* VAR_10[] = {
  "I decorate a65f\n",
  "I decorate c478\n"
 };
 int VAR_11, VAR_12;

 FUNC_3(FUNC_13(&(VAR_7[0]), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750"));
 FUNC_3(FUNC_13(&(VAR_7[1]), "c47800c7266a2be04c571c04d5a6614691ea99bd"));

 FUNC_3(FUNC_6(&VAR_8[0], ((void*)0), VAR_1, ((void*)0), VAR_2, VAR_2, &(VAR_7[0]), VAR_10[0], 0));

 FUNC_5(&VAR_9[0], VAR_1, &VAR_8[0]);
 FUNC_0(VAR_9[0]);

 FUNC_3(FUNC_6(&VAR_8[1], ((void*)0), VAR_1, VAR_9[0], VAR_2, VAR_2, &(VAR_7[1]), VAR_10[1], 0));

 FUNC_5(&VAR_9[1], VAR_1, &VAR_8[1]);
 FUNC_0(VAR_9[1]);

 FUNC_3(FUNC_7(&VAR_3, VAR_9[1]));

 for (VAR_11 = 0; (VAR_12 = FUNC_12(&VAR_5, &VAR_6, VAR_3)) >= 0; ++VAR_11) {
  FUNC_3(FUNC_8(&VAR_4, VAR_1, VAR_9[1], &VAR_6));
  FUNC_2(FUNC_11(VAR_4), VAR_10[VAR_11]);
  FUNC_9(VAR_4);
 }

 FUNC_1(VAR_0, VAR_12);
 FUNC_1(2, VAR_11);

 FUNC_10(VAR_3);
 FUNC_4(VAR_9[0]);
 FUNC_4(VAR_9[1]);
}
