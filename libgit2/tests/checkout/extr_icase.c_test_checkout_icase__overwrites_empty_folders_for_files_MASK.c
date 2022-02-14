
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int checkout_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;

void FUNC_7(void)
{
 VAR_2.checkout_strategy = VAR_1|VAR_0;

 FUNC_3(FUNC_6("testrepo/NEW.txt", 0777));

 FUNC_2(FUNC_4(VAR_4, VAR_3, &VAR_2));

 FUNC_0("testrepo/new.txt");
 FUNC_1(!FUNC_5("testrepo/new.txt"));
}
