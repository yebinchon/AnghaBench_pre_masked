
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct wf_fcu_priv*,char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wf_fcu_priv *VAR_2)
{

 if (!FUNC_0("PowerMac7,2"))
  return;

 FUNC_1(VAR_2, "backside-fan", VAR_0, 1);
 FUNC_1(VAR_2, "drive-bay-fan", VAR_1, 2);
 FUNC_1(VAR_2, "slots-fan", VAR_0, 2);
 FUNC_1(VAR_2, "cpu-front-fan-0", VAR_1, 3);
 FUNC_1(VAR_2, "cpu-rear-fan-0", VAR_1, 4);
 FUNC_1(VAR_2, "cpu-front-fan-1", VAR_1, 5);
 FUNC_1(VAR_2, "cpu-rear-fan-1", VAR_1, 6);
}
