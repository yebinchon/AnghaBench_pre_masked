
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct table_info {int dummy; } ;
struct TYPE_4__ {int kidx; } ;
struct table_config {int astate; TYPE_1__* ta; scalar_t__ linked; TYPE_2__ no; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int (* change_ti ) (int ,int *) ;int refcnt; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 struct table_info* FUNC_3 (struct ip_fw_chain*,int ) ;
 int FUNC_4 (struct namedobj_instance*,TYPE_2__*) ;
 int FUNC_5 (struct table_info*,int ,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct ip_fw_chain *VAR_0, struct table_config *VAR_1)
{
 struct namedobj_instance *VAR_2;
 struct table_info *VAR_3;
 uint16_t VAR_4;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 VAR_2 = FUNC_0(VAR_0);
 VAR_4 = VAR_1->no.kidx;


 FUNC_4(VAR_2, &VAR_1->no);
 VAR_3 = FUNC_3(VAR_0, VAR_4);
 FUNC_5(VAR_3, 0, sizeof(struct table_info));
 VAR_1->linked = 0;
 VAR_1->ta->refcnt--;


 if (VAR_1->ta->change_ti != ((void*)0))
  VAR_1->ta->change_ti(VAR_1->astate, ((void*)0));
}
