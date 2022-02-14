
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; int * notify_payload; int notify_cb; int notify_flags; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 git_checkout_options VAR_7 = VAR_2;

 FUNC_1(FUNC_4("./testrepo/.gitattributes"));
 FUNC_2(VAR_6, "core.autocrlf", 1);

 FUNC_0("./testrepo/new.txt", "my new file\r\n");

 VAR_7.checkout_strategy =
  VAR_4 |
  VAR_3 |
  VAR_0;
 VAR_7.notify_flags = VAR_1;
 VAR_7.notify_cb = VAR_5;
 VAR_7.notify_payload = ((void*)0);

 FUNC_1(FUNC_3(VAR_6, ((void*)0), &VAR_7));
}
