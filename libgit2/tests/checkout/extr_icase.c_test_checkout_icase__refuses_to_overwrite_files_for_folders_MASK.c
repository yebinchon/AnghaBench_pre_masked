
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int checkout_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(void)
{
 VAR_5.checkout_strategy = VAR_1|VAR_0;

 FUNC_3("testrepo/A", "neue file\n", 10, VAR_4 | VAR_2 | VAR_3, 0644);


 FUNC_2(FUNC_4(VAR_7, VAR_6, &VAR_5));
 FUNC_0("testrepo/A");
 FUNC_1(!FUNC_5("testrepo/A"));
}
