
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tid_info {int tlen; TYPE_2__* tlvs; int uidx; int set; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ head; int idx; int set; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 int FUNC_0 (struct tid_info*,int ,int) ;

__attribute__((used)) static void
FUNC_1(ipfw_obj_ntlv *VAR_0, struct tid_info *VAR_1)
{

 FUNC_0(VAR_1, 0, sizeof(struct tid_info));
 VAR_1->set = VAR_0->set;
 VAR_1->uidx = VAR_0->idx;
 VAR_1->tlvs = VAR_0;
 VAR_1->tlen = VAR_0->head.length;
}
