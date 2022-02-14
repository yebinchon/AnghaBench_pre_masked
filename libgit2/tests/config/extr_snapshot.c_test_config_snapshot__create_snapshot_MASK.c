
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

void FUNC_8(void)
{
 int32_t VAR_2;

 FUNC_1("config", "[old]\nvalue = 5\n");
 FUNC_2(FUNC_5(&VAR_0, "config"));
 FUNC_2(FUNC_4(&VAR_2, VAR_0, "old.value"));
 FUNC_0(5, VAR_2);

 FUNC_2(FUNC_6(&VAR_1, VAR_0));


 FUNC_1("config", "[old]\nvalue = 56\n");

 FUNC_2(FUNC_4(&VAR_2, VAR_0, "old.value"));
 FUNC_0(56, VAR_2);
 FUNC_2(FUNC_4(&VAR_2, VAR_1, "old.value"));
 FUNC_0(5, VAR_2);


 FUNC_1("config", "[old]\nvalue = 999\n");


 FUNC_2(FUNC_4(&VAR_2, VAR_1, "old.value"));
 FUNC_0(5, VAR_2);


 FUNC_3(VAR_1);
 FUNC_2(FUNC_6(&VAR_1, VAR_0));
 FUNC_2(FUNC_4(&VAR_2, VAR_1, "old.value"));
 FUNC_0(999, VAR_2);

 FUNC_2(FUNC_7("config"));
}
