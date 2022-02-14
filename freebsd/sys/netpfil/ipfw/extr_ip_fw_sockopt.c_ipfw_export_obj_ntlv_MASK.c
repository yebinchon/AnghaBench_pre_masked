
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct named_object {int name; int kidx; int etlv; } ;
struct TYPE_4__ {int length; int type; } ;
struct TYPE_5__ {int name; int idx; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct named_object *VAR_0, ipfw_obj_ntlv *VAR_1)
{

 VAR_1->head.type = VAR_0->etlv;
 VAR_1->head.length = sizeof(*VAR_1);
 VAR_1->idx = VAR_0->kidx;
 FUNC_0(VAR_1->name, VAR_0->name, sizeof(VAR_1->name));
}
