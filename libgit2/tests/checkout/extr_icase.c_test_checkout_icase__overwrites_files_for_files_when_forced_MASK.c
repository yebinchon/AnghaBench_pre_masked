
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
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(void)
{
 VAR_4.checkout_strategy = VAR_0;

 FUNC_2("testrepo/NEW.txt", "neue file\n", 10, VAR_3 | VAR_1 | VAR_2, 0644);


 FUNC_1(FUNC_3(VAR_6, VAR_5, &VAR_4));
 FUNC_0("testrepo/new.txt");
}
