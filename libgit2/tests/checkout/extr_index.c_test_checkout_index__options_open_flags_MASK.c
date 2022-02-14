
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; int file_open_flags; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;

void FUNC_4(void)
{
 git_checkout_options VAR_7 = VAR_2;

 FUNC_1("./testrepo/new.txt", "hi\n");

 VAR_7.checkout_strategy =
  VAR_1 | VAR_0;
 VAR_7.file_open_flags = VAR_4 | VAR_5 | VAR_3;

 FUNC_2(FUNC_3(VAR_6, ((void*)0), &VAR_7));

 FUNC_0("./testrepo/new.txt", "hi\nmy new file\n");
}
