
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_8 ;
 int FUNC_4 (int ,TYPE_1__*) ;

void FUNC_5(void)
{
 git_checkout_options VAR_9 = VAR_5;
 VAR_9.checkout_strategy = VAR_4;

 FUNC_1("./crlf/.gitattributes", "* text=auto\n");

 FUNC_3(VAR_8, "core.autocrlf", 0);

 FUNC_2(FUNC_4(VAR_8, &VAR_9));

 if (VAR_7 == VAR_6) {
  FUNC_0("./crlf/all-lf", VAR_2);
  FUNC_0("./crlf/all-crlf", VAR_0);
 } else {
  FUNC_0("./crlf/all-lf", VAR_3);
  FUNC_0("./crlf/all-crlf", VAR_1);
 }
}
