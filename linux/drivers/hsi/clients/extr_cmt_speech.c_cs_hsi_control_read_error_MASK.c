
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int dummy; } ;
struct cs_hsi_iface {int control_state; } ;


 int FUNC_0 (struct cs_hsi_iface*) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*,char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hsi_msg*) ;

__attribute__((used)) static void FUNC_4(struct cs_hsi_iface *VAR_0,
       struct hsi_msg *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, "control read", &VAR_0->control_state);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_0->control_state);
 FUNC_0(VAR_0);
}
