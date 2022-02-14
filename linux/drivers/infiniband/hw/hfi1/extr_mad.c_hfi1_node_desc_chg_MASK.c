
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int change_flags; int lid; } ;
struct TYPE_5__ {TYPE_1__ ntc_144; int issuer_lid; } ;
struct trap_node {int len; TYPE_2__ data; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_6__ {int lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct trap_node* FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (struct hfi1_ibport*) ;
 int FUNC_3 (struct hfi1_ibport*,struct trap_node*) ;

void FUNC_4(struct hfi1_ibport *VAR_3)
{
 struct trap_node *VAR_4;
 u32 VAR_5 = FUNC_2(VAR_3)->lid;

 VAR_4 = FUNC_1(VAR_0,
    VAR_2,
    VAR_5);
 if (!VAR_4)
  return;

 VAR_4->data.ntc_144.lid = VAR_4->data.issuer_lid;
 VAR_4->data.ntc_144.change_flags =
  FUNC_0(VAR_1);

 VAR_4->len = sizeof(VAR_4->data);
 FUNC_3(VAR_3, VAR_4);
}
