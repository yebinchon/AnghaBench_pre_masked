
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pdc_state {int rx_status_len; TYPE_1__* regs; } ;
struct TYPE_6__ {int control; } ;
struct TYPE_5__ {int control; } ;
struct dma64 {TYPE_3__ dmarcv; TYPE_2__ dmaxmt; } ;
struct TYPE_4__ {struct dma64* dmaregs; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(struct pdc_state *VAR_3)
{
 struct dma64 *VAR_4;

 VAR_4 = &VAR_3->regs->dmaregs[VAR_0];
 FUNC_0(VAR_2, &VAR_4->dmaxmt.control);
 FUNC_0(VAR_1 + (VAR_3->rx_status_len << 1),
    &VAR_4->dmarcv.control);
}
