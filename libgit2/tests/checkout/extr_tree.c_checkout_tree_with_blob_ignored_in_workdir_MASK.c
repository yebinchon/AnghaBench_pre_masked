
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int*,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int ,char*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,int) ;

__attribute__((used)) static int FUNC_16(int VAR_4, bool VAR_5)
{
 git_oid VAR_6;
 git_object *VAR_7 = ((void*)0);
 git_checkout_options VAR_8 = VAR_1;
 int VAR_9 = 0, VAR_10;

 FUNC_0(VAR_3, "master");




 VAR_8.checkout_strategy = VAR_0;

 FUNC_4(FUNC_13(&VAR_6, VAR_3, "refs/heads/dir"));
 FUNC_4(FUNC_10(&VAR_7, VAR_3, &VAR_6, VAR_2));

 FUNC_4(FUNC_6(VAR_3, VAR_7, &VAR_8));
 FUNC_4(FUNC_14(VAR_3, "refs/heads/dir"));

 FUNC_1(FUNC_12("testrepo/README"));
 FUNC_1(FUNC_12("testrepo/branch_file.txt"));
 FUNC_1(FUNC_12("testrepo/new.txt"));
 FUNC_1(FUNC_12("testrepo/a/b.txt"));

 FUNC_1(!FUNC_11("testrepo/ab"));

 FUNC_0(VAR_3, "dir");

 FUNC_9(VAR_7);

 VAR_8.checkout_strategy = VAR_4;

 if (VAR_5) {
  FUNC_5(FUNC_15("testrepo/ab", 0777));
  FUNC_5(FUNC_15("testrepo/ab/4.txt", 0777));

  FUNC_3("testrepo/ab/4.txt/file1.txt", "as you wish");
  FUNC_3("testrepo/ab/4.txt/file2.txt", "foo bar foo");
  FUNC_3("testrepo/ab/4.txt/file3.txt", "inky blinky pinky clyde");

  FUNC_1(FUNC_11("testrepo/ab/4.txt"));
 } else {
  FUNC_5(FUNC_15("testrepo/ab", 0777));
  FUNC_3("testrepo/ab/4.txt", "as you wish");

  FUNC_1(FUNC_12("testrepo/ab/4.txt"));
 }

 FUNC_4(FUNC_7(VAR_3, "ab/4.txt\n"));

 FUNC_4(FUNC_8(&VAR_9, VAR_3, "ab/4.txt"));
 FUNC_2(1, VAR_9);

 FUNC_4(FUNC_13(&VAR_6, VAR_3, "refs/heads/subtrees"));
 FUNC_4(FUNC_10(&VAR_7, VAR_3, &VAR_6, VAR_2));

 VAR_10 = FUNC_6(VAR_3, VAR_7, &VAR_8);

 FUNC_9(VAR_7);

 return VAR_10;
}
