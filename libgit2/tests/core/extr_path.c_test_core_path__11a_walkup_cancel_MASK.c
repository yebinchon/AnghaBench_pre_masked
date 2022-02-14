
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_3__ {char** expect; int cancel_after; int expect_idx; } ;
typedef TYPE_1__ check_walkup_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,TYPE_1__*) ;

void FUNC_4(void)
{
 git_buf VAR_3 = VAR_1;
 int VAR_4[] = { 3, 2, 1, 0 };
 char *VAR_5[] = {
  "/a/b/c/d/e/", "/a/b/c/d/", "/a/b/c/", "[CANCEL]", ((void*)0),
  "/a/b/c/d/e", "/a/b/c/d/", "[CANCEL]", ((void*)0),
  "/a/b/c/d/e", "[CANCEL]", ((void*)0),
  "[CANCEL]", ((void*)0),
  ((void*)0)
 };
 char *VAR_6[] = { ((void*)0), ((void*)0), "/", "", ((void*)0) };
 int VAR_7, VAR_8;
 check_walkup_info VAR_9;

 VAR_9.expect = VAR_5;

 for (VAR_7 = 0, VAR_8 = 0; VAR_5[VAR_7] != ((void*)0); VAR_7++, VAR_8++) {

  FUNC_2(&VAR_3, VAR_5[VAR_7]);

  VAR_9.cancel_after = VAR_4[VAR_8];
  VAR_9.expect_idx = VAR_7;

  FUNC_0(
   VAR_0,
   FUNC_3(&VAR_3, VAR_6[VAR_8], VAR_2, &VAR_9)
  );


  while (VAR_5[VAR_7] != ((void*)0)) VAR_7++;
 }

 FUNC_1(&VAR_3);
}
