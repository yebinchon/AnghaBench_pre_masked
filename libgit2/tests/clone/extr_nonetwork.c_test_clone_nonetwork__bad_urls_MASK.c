
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bare; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*,TYPE_1__*) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{

 FUNC_1(FUNC_2(&VAR_1, "not_a_repo", "./foo", &VAR_0));
 FUNC_0(!FUNC_3("./foo"));
 VAR_0.bare = 1;
 FUNC_1(FUNC_2(&VAR_1, "not_a_repo", "./foo", &VAR_0));
 FUNC_0(!FUNC_3("./foo"));

 FUNC_1(FUNC_2(&VAR_1, "git://example.com:asdf", "./foo", &VAR_0));
 FUNC_1(FUNC_2(&VAR_1, "https://example.com:asdf/foo", "./foo", &VAR_0));
 FUNC_1(FUNC_2(&VAR_1, "git://github.com/git://github.com/foo/bar.git.git",
    "./foo", &VAR_0));
 FUNC_1(FUNC_2(&VAR_1, "arrbee:my/bad:password@github.com:1111/strange:words.git",
    "./foo", &VAR_0));
}
