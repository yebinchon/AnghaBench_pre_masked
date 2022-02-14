
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 git_checkout_options VAR_5 = VAR_0;
 char VAR_6[VAR_3];
 size_t VAR_7 = VAR_3;

 if (!FUNC_7("testrepo/test")) {
  FUNC_5();
 }

 FUNC_4(VAR_4, "core.symlinks", 1);

 VAR_5.checkout_strategy = VAR_2 | VAR_1;

 FUNC_3(FUNC_6(VAR_4, ((void*)0), &VAR_5));

 VAR_7 = FUNC_8("./testrepo/link_to_new.txt", VAR_6, VAR_7);
 VAR_6[VAR_7] = '\0';
 FUNC_1(VAR_7, FUNC_9("new.txt"));
 FUNC_2(VAR_6, "new.txt");
 FUNC_0("./testrepo/link_to_new.txt", "my new file\n");
}
