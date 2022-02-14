
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int at_type; } ;
struct TYPE_4__ {TYPE_1__ ai_termid; int ai_auid; } ;
struct ucred {TYPE_2__ cr_audit; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ucred *VAR_2)
{

 VAR_2->cr_audit.ai_auid = VAR_0;
 VAR_2->cr_audit.ai_termid.at_type = VAR_1;
}
