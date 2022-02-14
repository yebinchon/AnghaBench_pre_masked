
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ at_type; } ;
struct auditinfo_addr {TYPE_1__ ai_termid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct auditinfo_addr VAR_2 ;

void
FUNC_3(struct auditinfo_addr *VAR_3)
{

 FUNC_0(VAR_2.ai_termid.at_type == VAR_0 ||
     VAR_2.ai_termid.at_type == VAR_1,
     ("audit_set_kinfo: invalid address type"));

 FUNC_1();
 *VAR_3 = VAR_2;
 FUNC_2();
}
