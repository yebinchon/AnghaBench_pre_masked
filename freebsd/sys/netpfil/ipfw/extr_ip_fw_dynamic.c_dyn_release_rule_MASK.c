
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int refcnt; } ;
struct TYPE_2__ {int refcnt; } ;
struct dyn_state_obj {TYPE_1__ no; } ;
struct dyn_data {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int) ;
 struct dyn_state_obj* FUNC_2 (struct ip_fw_chain*,int ) ;
 int FUNC_3 (struct ip_fw_chain*,TYPE_1__*) ;
 int FUNC_4 (struct ip_fw*) ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_chain *VAR_0, struct dyn_data *VAR_1,
    struct ip_fw *VAR_2, uint16_t VAR_3)
{
 struct dyn_state_obj *VAR_4;

 FUNC_0(VAR_0);
 FUNC_1(VAR_3 != 0);

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 if (VAR_4->no.refcnt == 1)
  FUNC_3(VAR_0, &VAR_4->no);
 else
  VAR_4->no.refcnt--;

 if (--VAR_2->refcnt == 1)
  FUNC_4(VAR_2);
}
