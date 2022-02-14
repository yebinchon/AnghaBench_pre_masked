
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void git_diff_line ;
typedef void git_diff_hunk ;
typedef void git_diff_delta ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 const git_diff_line *VAR_2,
 void *VAR_3)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 FUNC_1("did not expect line callback");
 return 0;
}
