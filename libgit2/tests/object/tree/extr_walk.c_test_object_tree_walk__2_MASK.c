
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treewalk_skip_data {char* skip; char* stop; int dirs; int files; } ;
typedef int git_tree ;
typedef int git_oid ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int ,int ,struct treewalk_skip_data*) ;
 int FUNC_6 (struct treewalk_skip_data*,int ,int) ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_oid VAR_3;
 git_tree *VAR_4;
 struct treewalk_skip_data VAR_5;


 FUNC_2(&VAR_3, "ae90f12eea699729ed24555e40b9fd669da12a12");
 FUNC_1(FUNC_4(&VAR_4, VAR_1, &VAR_3));

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.skip = "de";

 FUNC_0(0, FUNC_5(
  VAR_4, VAR_0, VAR_2, &VAR_5));
 FUNC_0(5, VAR_5.files);
 FUNC_0(3, VAR_5.dirs);

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.stop = "3.txt";

 FUNC_0(-1, FUNC_5(
  VAR_4, VAR_0, VAR_2, &VAR_5));
 FUNC_0(3, VAR_5.files);
 FUNC_0(2, VAR_5.dirs);

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.skip = "new.txt";

 FUNC_0(0, FUNC_5(
  VAR_4, VAR_0, VAR_2, &VAR_5));
 FUNC_0(7, VAR_5.files);
 FUNC_0(4, VAR_5.dirs);

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.stop = "new.txt";

 FUNC_0(-1, FUNC_5(
  VAR_4, VAR_0, VAR_2, &VAR_5));
 FUNC_0(7, VAR_5.files);
 FUNC_0(4, VAR_5.dirs);

 FUNC_3(VAR_4);
}
