
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int coherency_required; } ;
struct TYPE_6__ {TYPE_1__ to_host; } ;
struct TYPE_8__ {int omi; } ;
struct TYPE_7__ {TYPE_4__ index_ot; } ;
struct paace {TYPE_2__ domain_attr; int impl_attr; TYPE_3__ op_encode; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct paace *VAR_7, int VAR_8)
{
 switch (VAR_8) {
 case 129:
  FUNC_1(VAR_7->impl_attr, VAR_4, VAR_5);
  VAR_7->op_encode.index_ot.omi = VAR_1;

  FUNC_1(VAR_7->impl_attr, VAR_3, FUNC_0(VAR_6, 0));
  FUNC_1(VAR_7->domain_attr.to_host.coherency_required, VAR_2,
         0);
  break;
 case 128:
  FUNC_1(VAR_7->impl_attr, VAR_4, VAR_5);
  VAR_7->op_encode.index_ot.omi = VAR_0;

  FUNC_1(VAR_7->impl_attr, VAR_3, FUNC_0(VAR_6, 0));
  break;
 case 130:
  FUNC_1(VAR_7->domain_attr.to_host.coherency_required, VAR_2,
         0);
  break;
 }
}
