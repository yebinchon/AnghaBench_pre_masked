
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_host_reg_mtm_cfg {int nat; int value; } ;
struct nps_host_reg_aux_udmc {int nat; int value; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_3)
{
 struct nps_host_reg_mtm_cfg VAR_4;
 struct nps_host_reg_aux_udmc VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8, VAR_9;


 for (VAR_8 = 0, VAR_9 = VAR_3; VAR_8 < VAR_1; VAR_8++, VAR_9++)
  VAR_7 += FUNC_6(VAR_9, FUNC_1(VAR_2));

 VAR_6 = FUNC_2(VAR_7);

 VAR_5.value = FUNC_5(VAR_0);
 VAR_5.nat = VAR_6;
 FUNC_7(VAR_0, VAR_5.value);

 VAR_4.value = FUNC_3(FUNC_0(VAR_3));
 VAR_4.nat = VAR_6;
 FUNC_4(VAR_4.value, FUNC_0(VAR_3));
}
