
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_submodule_cb_payload {int update_tips_called; } ;
typedef char git_oid ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const git_oid *VAR_1, const git_oid *VAR_2, void *VAR_3)
{
 struct update_submodule_cb_payload *VAR_4 = VAR_3;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 VAR_4->update_tips_called = 1;

 return 1;
}
