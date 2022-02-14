
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {char** expect; int cancel_after; int expect_idx; } ;
typedef TYPE_2__ check_walkup_info ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,TYPE_2__*) ;

void FUNC_6(void)
{
 git_buf VAR_2 = VAR_0;

 char *VAR_3[] = {
           "/a/b/c/d/e/", "/a/b/c/d/", "/a/b/c/", "/a/b/", "/a/", "/", ((void*)0),
           "/a/b/c/d/e", "/a/b/c/d/", "/a/b/c/", "/a/b/", "/a/", "/", ((void*)0),
           "/a/b/c/d/e", "/a/b/c/d/", "/a/b/c/", "/a/b/", "/a/", "/", ((void*)0),
           "/a/b/c/d/e", "/a/b/c/d/", "/a/b/c/", "/a/b/", "/a/", "/", ((void*)0),
           "/a/b/c/d/e", "/a/b/c/d/", "/a/b/c/", "/a/b/", ((void*)0),
           "/a/b/c/d/e", "/a/b/c/d/", "/a/b/c/", "/a/b/", ((void*)0),
           "this_is_a_path", "", ((void*)0),
           "this_is_a_path/", "", ((void*)0),
           "///a///b///c///d///e///", "///a///b///c///d///", "///a///b///c///", "///a///b///", "///a///", "///", ((void*)0),
           "a/b/c/", "a/b/", "a/", "", ((void*)0),
           "a/b/c", "a/b/", "a/", "", ((void*)0),
           "a/b/c/", "a/b/", "a/", ((void*)0),
           "", ((void*)0),
           "/", ((void*)0),
           ((void*)0)
 };

 char *VAR_4[] = {
           ((void*)0),
           ((void*)0),
           "/",
           "",
           "/a/b",
           "/a/b/",
           ((void*)0),
           ((void*)0),
           ((void*)0),
           ((void*)0),
           ((void*)0),
           "a/",
           ((void*)0),
           ((void*)0),
 };

 int VAR_5, VAR_6;
 check_walkup_info VAR_7;

 VAR_7.expect = VAR_3;
 VAR_7.cancel_after = -1;

 for (VAR_5 = 0, VAR_6 = 0; VAR_3[VAR_5] != ((void*)0); VAR_5++, VAR_6++) {

  FUNC_4(&VAR_2, VAR_3[VAR_5]);

  VAR_7.expect_idx = VAR_5;
  FUNC_2(
   FUNC_5(&VAR_2, VAR_4[VAR_6], VAR_1, &VAR_7)
  );

  FUNC_1(VAR_2.ptr, VAR_3[VAR_5]);
  FUNC_0(VAR_3[VAR_7.expect_idx] == ((void*)0));
  VAR_5 = VAR_7.expect_idx;
 }

 FUNC_3(&VAR_2);
}
