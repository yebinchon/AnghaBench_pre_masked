
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,TYPE_1__*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 git_filter VAR_1 = { VAR_0 };

 FUNC_1(FUNC_3(
  "custom", &VAR_1, 42));

 FUNC_0(1, FUNC_2("foo.custom", "crlf"));
 FUNC_0(1, FUNC_2("foo.custom", "ident"));
 FUNC_0(1, FUNC_2("foo.custom", "custom"));

 FUNC_4("custom");
}
