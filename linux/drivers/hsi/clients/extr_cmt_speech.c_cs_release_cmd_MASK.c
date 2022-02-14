
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int link; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {int cmdqueue; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct hsi_msg *VAR_0)
{
 struct cs_hsi_iface *VAR_1 = VAR_0->context;

 FUNC_0(&VAR_0->link, &VAR_1->cmdqueue);
}
