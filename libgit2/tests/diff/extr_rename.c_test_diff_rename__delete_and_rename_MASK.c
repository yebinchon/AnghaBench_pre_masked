
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 char* VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char const*) ;

void FUNC_9(void)
{
 const char *VAR_7 = VAR_5;
 const char *VAR_8 = VAR_0;
 git_tree *VAR_9, *VAR_10;
 git_diff *VAR_11;
 git_diff_find_options VAR_12 = VAR_2;
 git_buf VAR_13 = VAR_1;
 const char *VAR_14 =
  "diff --git a/sixserving.txt b/sixserving.txt\n"
  "deleted file mode 100644\n"
  "index f90d4fc..0000000\n"
  "--- a/sixserving.txt\n"
  "+++ /dev/null\n"
  "@@ -1,25 +0,0 @@\n"
  "-I  KEEP  six  honest  serving-men\n"
  "-  (They  taught  me  all  I  knew);\n"
  "-Their  names  are  What  and  Why  and  When\n"
  "-  And  How  and  Where  and  Who.\n"
  "-I  send  them  over  land  and  sea,\n"
  "-  I  send  them  east  and  west;\n"
  "-But  after  they  have  worked  for  me,\n"
  "-  I  give  them  all  a  rest.\n"
  "-\n"
  "-I  let  them  rest  from  nine  till  five,\n"
  "-  For  I  am  busy  then,\n"
  "-As  well  as  breakfast,  lunch,  and  tea,\n"
  "-  For  they  are  hungry  men.\n"
  "-But  different  folk  have  different  views;\n"
  "-I  know  a  person  small—\n"
  "-She  keeps  ten  million  serving-men,\n"
  "-Who  get  no  rest  at  all!\n"
  "-\n"
  "-She  sends'em  abroad  on  her  own  affairs,\n"
  "-  From  the  second  she  opens  her  eyes—\n"
  "-One  million  Hows,  two  million  Wheres,\n"
  "-And  seven  million  Whys!\n"
  "-\n"
  "-    --  Rudyard  Kipling\n"
  "-\n"
  "diff --git a/songof7cities.txt b/sixserving.txt\n"
  "similarity index 100%\n"
  "rename from songof7cities.txt\n"
  "rename to sixserving.txt\n";

 VAR_9 = FUNC_8(VAR_6, VAR_7);
 VAR_10 = FUNC_8(VAR_6, VAR_8);

 VAR_12.flags = VAR_3;

 FUNC_1(FUNC_6(&VAR_11, VAR_6, VAR_9, VAR_10, ((void*)0)));
 FUNC_1(FUNC_3(VAR_11, &VAR_12));

 FUNC_1(FUNC_5(&VAR_13, VAR_11, VAR_4));

 FUNC_0(VAR_14, VAR_13.ptr);

 FUNC_2(&VAR_13);
 FUNC_4(VAR_11);
 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
}
