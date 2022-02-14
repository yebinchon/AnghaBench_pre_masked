
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coherency_required; } ;
struct TYPE_4__ {TYPE_1__ to_host; } ;
struct paace {TYPE_2__ domain_attr; int addr_bitfields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct paace *VAR_4)
{
 FUNC_0(VAR_4->addr_bitfields, VAR_0, VAR_3);

 FUNC_0(VAR_4->domain_attr.to_host.coherency_required, VAR_1,
        VAR_2);
}
