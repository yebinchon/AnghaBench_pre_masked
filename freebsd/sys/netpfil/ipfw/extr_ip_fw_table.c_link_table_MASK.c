
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct table_info {int dummy; } ;
struct TYPE_4__ {int kidx; } ;
struct table_config {int linked; TYPE_1__* ta; int astate; struct table_info ti_copy; TYPE_2__ no; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int refcnt; int (* change_ti ) (int ,struct table_info*) ;} ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 struct table_info* FUNC_2 (struct ip_fw_chain*,int ) ;
 int FUNC_3 (struct namedobj_instance*,TYPE_2__*) ;
 int FUNC_4 (int ,struct table_info*) ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_chain *VAR_0, struct table_config *VAR_1)
{
 struct namedobj_instance *VAR_2;
 struct table_info *VAR_3;
 uint16_t VAR_4;

 FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_0);
 VAR_4 = VAR_1->no.kidx;

 FUNC_3(VAR_2, &VAR_1->no);

 VAR_3 = FUNC_2(VAR_0, VAR_4);
 *VAR_3 = VAR_1->ti_copy;


 if (VAR_1->ta->change_ti != ((void*)0))
  VAR_1->ta->change_ti(VAR_1->astate, VAR_3);

 VAR_1->linked = 1;
 VAR_1->ta->refcnt++;
}
