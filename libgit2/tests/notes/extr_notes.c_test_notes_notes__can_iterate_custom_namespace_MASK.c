
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note_iterator ;
typedef int git_note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int **,int ,char*,int *) ;

void FUNC_10(void)
{
 git_note_iterator *VAR_2;
 git_note *VAR_3;
 git_oid VAR_4, VAR_5;
 git_oid VAR_6[2];
 const char* VAR_7[] = {
  "I decorate a65f\n",
  "I decorate c478\n"
 };
 int VAR_8, VAR_9;

 FUNC_3(&VAR_6[0], "refs/notes/beer",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_7[0]);
 FUNC_3(&VAR_6[1], "refs/notes/beer",
  "c47800c7266a2be04c571c04d5a6614691ea99bd", VAR_7[1]);

 FUNC_2(FUNC_6(&VAR_2, VAR_1, "refs/notes/beer"));

 for (VAR_8 = 0; (VAR_9 = FUNC_8(&VAR_4, &VAR_5, VAR_2)) >= 0; ++VAR_8) {
  FUNC_2(FUNC_9(&VAR_3, VAR_1, "refs/notes/beer", &VAR_5));
  FUNC_1(FUNC_7(VAR_3), VAR_7[VAR_8]);
  FUNC_4(VAR_3);
 }

 FUNC_0(VAR_0, VAR_9);
 FUNC_0(2, VAR_8);
 FUNC_5(VAR_2);
}
