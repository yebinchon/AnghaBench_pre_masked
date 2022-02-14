
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mac_tbl_digest; } ;
struct TYPE_4__ {TYPE_1__ vport; } ;
struct opa_vnic_adapter {int mactbl_lock; TYPE_2__ info; int mactbl; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hlist_head*) ;
 struct hlist_head* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;

void FUNC_6(struct opa_vnic_adapter *VAR_0)
{
 struct hlist_head *VAR_1;

 FUNC_0(&VAR_0->mactbl_lock);
 VAR_1 = FUNC_3(VAR_0->mactbl);
 FUNC_4(VAR_0->mactbl, ((void*)0));
 FUNC_5();
 FUNC_2(VAR_1);
 VAR_0->info.vport.mac_tbl_digest = 0;
 FUNC_1(&VAR_0->mactbl_lock);
}
