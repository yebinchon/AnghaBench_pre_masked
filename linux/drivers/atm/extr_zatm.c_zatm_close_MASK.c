
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {int flags; int * dev_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct atm_vcc*) ;
 int FUNC_5 (struct atm_vcc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct atm_vcc *VAR_2)
{
        FUNC_0(">zatm_close\n");
        if (!FUNC_2(VAR_2)) return;
 FUNC_3(VAR_1,&VAR_2->flags);
        FUNC_4(VAR_2);
 FUNC_1("close_tx\n",0,0);
        FUNC_5(VAR_2);
        FUNC_0("zatm_close: done waiting\n");

        FUNC_6(FUNC_2(VAR_2));
 VAR_2->dev_data = ((void*)0);
 FUNC_3(VAR_0,&VAR_2->flags);
}
