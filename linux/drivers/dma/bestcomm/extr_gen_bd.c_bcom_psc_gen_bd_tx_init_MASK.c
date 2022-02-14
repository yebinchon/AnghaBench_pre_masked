
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcom_task {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int tx_ipr; int tx_initiator; } ;


 struct bcom_task* FUNC_0 (int,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

struct bcom_task *
FUNC_1(unsigned VAR_1, int VAR_2, phys_addr_t VAR_3)
{
 struct psc;
 return FUNC_0(VAR_2, VAR_3,
       VAR_0[VAR_1].tx_initiator,
       VAR_0[VAR_1].tx_ipr);
}
