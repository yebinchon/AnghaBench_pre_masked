
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {char* ptr; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int*,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,char*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*) ;
 TYPE_1__ VAR_6 ;

void FUNC_16(void)
{
 git_repository *VAR_7;
 int VAR_8;

 FUNC_2(FUNC_7(
  VAR_5, VAR_2, VAR_6.ptr));
 FUNC_2(FUNC_7(
  VAR_5, VAR_3, VAR_6.ptr));
 FUNC_2(FUNC_7(
  VAR_5, VAR_4, VAR_6.ptr));



 FUNC_4(FUNC_15("empty_standard_repo/.git/config"));
 FUNC_0(!FUNC_9("empty_standard_repo/.git/config"));

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(VAR_0, VAR_8);
 FUNC_12(VAR_7);



 FUNC_5();

 FUNC_4(FUNC_14("alternate/1", 0777));
 FUNC_2(FUNC_6(&VAR_6, VAR_6.ptr, "1"));
 FUNC_3("alternate/1/gitconfig", "[core]\n\tabbrev = 10\n");
 FUNC_2(FUNC_7(
  VAR_5, VAR_3, VAR_6.ptr));

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(10, VAR_8);
 FUNC_12(VAR_7);



 FUNC_4(FUNC_14("alternate/2", 0777));
 VAR_6.ptr[VAR_6.size - 1] = '2';
 FUNC_3("alternate/2/config", "[core]\n\tabbrev = 20\n");
 FUNC_2(FUNC_7(
  VAR_5, VAR_4, VAR_6.ptr));

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(20, VAR_8);
 FUNC_12(VAR_7);



 FUNC_4(FUNC_14("alternate/3", 0777));
 VAR_6.ptr[VAR_6.size - 1] = '3';
 FUNC_3("alternate/3/.gitconfig", "[core]\n\tabbrev = 30\n");
 FUNC_2(FUNC_7(
  VAR_5, VAR_2, VAR_6.ptr));

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(30, VAR_8);
 FUNC_12(VAR_7);



 FUNC_3("empty_standard_repo/.git/config", "[core]\n\tabbrev = 40\n");

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(40, VAR_8);
 FUNC_12(VAR_7);



 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(40, VAR_8);

 FUNC_4(FUNC_15("empty_standard_repo/.git/config"));
 FUNC_0(!FUNC_9("empty_standard_repo/.git/config"));

 FUNC_4(FUNC_15("alternate/1/gitconfig"));
 FUNC_0(!FUNC_9("alternate/1/gitconfig"));

 FUNC_4(FUNC_15("alternate/2/config"));
 FUNC_0(!FUNC_9("alternate/2/config"));

 FUNC_4(FUNC_15("alternate/3/.gitconfig"));
 FUNC_0(!FUNC_9("alternate/3/.gitconfig"));

 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(40, VAR_8);
 FUNC_12(VAR_7);



 FUNC_0(!FUNC_9("empty_standard_repo/.git/config"));
 FUNC_0(!FUNC_9("alternate/3/.gitconfig"));

 FUNC_2(FUNC_13(&VAR_7, "empty_standard_repo"));
 FUNC_11(VAR_7);
 VAR_8 = -1;
 FUNC_2(FUNC_10(&VAR_8, VAR_7, VAR_1));
 FUNC_1(7, VAR_8);
 FUNC_12(VAR_7);

 FUNC_0(!FUNC_8("empty_standard_repo/.git/config"));
 FUNC_0(!FUNC_8("alternate/3/.gitconfig"));
}
