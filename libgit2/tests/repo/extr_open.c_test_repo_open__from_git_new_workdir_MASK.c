
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char*) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (int,int ,int ) ;
 scalar_t__ FUNC_20 (char const*,char) ;
 int * FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ,int ) ;

void FUNC_23(void)
{







 git_repository *VAR_2;
 git_buf VAR_3 = VAR_0, VAR_4 = VAR_0, VAR_5 = VAR_0;
 const char **VAR_6;
 int VAR_7;
 static const char *VAR_8[] = {
  "config", "refs", "logs/refs", "objects", "info", "hooks",
  "packed-refs", "remotes", "rr-cache", "svn", ((void*)0)
 };
 static const char *VAR_9[] = {
  "HEAD", ((void*)0)
 };

 FUNC_3("empty_standard_repo");

 FUNC_2(FUNC_18("alternate", 0777));
 FUNC_2(FUNC_18("alternate/.git", 0777));

 for (VAR_6 = VAR_8; *VAR_6 != ((void*)0); VAR_6++) {
  FUNC_8(&VAR_3, "empty_standard_repo/.git", *VAR_6);
  if (FUNC_12(VAR_3.ptr)) {
   FUNC_8(&VAR_3, "../../empty_standard_repo/.git", *VAR_6);
   FUNC_8(&VAR_4, "alternate/.git", *VAR_6);
   if (FUNC_20(*VAR_6, '/'))
    FUNC_10(VAR_4.ptr, 0777);
   FUNC_1(FUNC_22(VAR_3.ptr, VAR_4.ptr) == 0, FUNC_21(VAR_1));
  }
 }
 for (VAR_6 = VAR_9; *VAR_6 != ((void*)0); VAR_6++) {
  FUNC_8(&VAR_3, "empty_standard_repo/.git", *VAR_6);
  if (FUNC_12(VAR_3.ptr)) {
   FUNC_8(&VAR_4, "alternate/.git", *VAR_6);
   FUNC_2(FUNC_11(&VAR_5, VAR_3.ptr));

   FUNC_0((VAR_7 = FUNC_9(VAR_4.ptr, 0777, 0666)) >= 0);
   FUNC_4(FUNC_19(VAR_7, VAR_5.ptr, VAR_5.size));
   FUNC_17(VAR_7);
  }
 }

 FUNC_7(&VAR_3);
 FUNC_7(&VAR_4);
 FUNC_7(&VAR_5);


 FUNC_2(FUNC_14(&VAR_2, "alternate"));

 FUNC_0(FUNC_15(VAR_2) != ((void*)0));
 FUNC_1(FUNC_6(FUNC_15(VAR_2), "alternate/.git/") == 0, FUNC_15(VAR_2));

 FUNC_0(FUNC_16(VAR_2) != ((void*)0));
 FUNC_1(FUNC_6(FUNC_16(VAR_2), "alternate/") == 0, FUNC_16(VAR_2));

 FUNC_13(VAR_2);



}
