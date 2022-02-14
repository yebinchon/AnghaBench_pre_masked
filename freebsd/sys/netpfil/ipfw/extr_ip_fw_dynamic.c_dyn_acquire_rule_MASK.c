
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int refcnt; } ;
struct TYPE_2__ {scalar_t__ etlv; int refcnt; } ;
struct dyn_state_obj {TYPE_1__ no; } ;
struct dyn_data {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int) ;
 struct dyn_state_obj* FUNC_2 (struct ip_fw_chain*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_2, struct dyn_data *VAR_3,
    struct ip_fw *VAR_4, uint16_t VAR_5)
{
 struct dyn_state_obj *VAR_6;






 if (VAR_3->flags & VAR_0)
  return;

 FUNC_0(VAR_2);
 FUNC_1(VAR_5 != 0);

 VAR_3->flags |= VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_5);
 VAR_6->no.refcnt++;
 FUNC_1(VAR_6->no.etlv == VAR_1);


 VAR_4->refcnt++;
}
