
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
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 (char*,int) ;
 int VAR_6 ;

void FUNC_8(void)
{
 VAR_4.checkout_strategy = VAR_0;

 FUNC_4(FUNC_7("testrepo/NEW.txt", 0777));
 FUNC_3("testrepo/NEW.txt/foobar", "neue file\n", 10, VAR_3 | VAR_1 | VAR_2, 0644);


 FUNC_2(FUNC_5(VAR_6, VAR_5, &VAR_4));

 FUNC_0("testrepo/new.txt");
 FUNC_1(!FUNC_6("testrepo/new.txt"));
}
