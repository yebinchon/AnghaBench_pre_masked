
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int bits; int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct clk *VAR_1)
{
 int VAR_2 = 1000000;

 if (FUNC_4("lantiq,ar10")
     || FUNC_4("lantiq,grx390")) {
  FUNC_6(VAR_1->bits, FUNC_1(VAR_1->module));
  do {} while (--VAR_2 &&
        (FUNC_5(FUNC_3(VAR_1->module)) & VAR_1->bits));
 } else {
  FUNC_8(&VAR_0);
  FUNC_6(FUNC_5(FUNC_0(VAR_1->module)) | VAR_1->bits,
    FUNC_0(VAR_1->module));
  do {} while (--VAR_2 &&
        (!(FUNC_5(FUNC_2(VAR_1->module)) & VAR_1->bits)));
  FUNC_9(&VAR_0);
 }

 if (!VAR_2)
  FUNC_7("deactivating PMU module failed!");
}
