
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct evergreen_wm_params {int disp_clk; } ;
struct TYPE_7__ {void* full; } ;
typedef TYPE_1__ fixed20_12 ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__,TYPE_1__) ;
 void* FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__) ;

__attribute__((used)) static u32 FUNC_4(struct evergreen_wm_params *VAR_0)
{

 fixed20_12 VAR_1;
 fixed20_12 VAR_2, VAR_3;
 fixed20_12 VAR_4;

 VAR_4.full = FUNC_0(1000);
 VAR_2.full = FUNC_0(VAR_0->disp_clk);
 VAR_2.full = FUNC_1(VAR_2, VAR_4);
 VAR_4.full = FUNC_0(10);
 VAR_1.full = FUNC_0(8);
 VAR_1.full = FUNC_1(VAR_1, VAR_4);
 VAR_4.full = FUNC_0(32);
 VAR_3.full = FUNC_2(VAR_4, VAR_2);
 VAR_3.full = FUNC_2(VAR_3, VAR_1);

 return FUNC_3(VAR_3);
}
