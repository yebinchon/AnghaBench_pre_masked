
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pmu {int dummy; } ;
struct cpu_hw_events {int* pcr; scalar_t__ n_added; scalar_t__ enabled; } ;
struct TYPE_4__ {int (* write_pcr ) (int,int) ;} ;
struct TYPE_3__ {int num_pcrs; int user_bit; int priv_bit; int hv_bit; int irq_bit; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,int) ;
 struct cpu_hw_events* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pmu *VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_1(&VAR_0);
 int VAR_5;

 if (!VAR_4->enabled)
  return;

 VAR_4->enabled = 0;
 VAR_4->n_added = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_pcrs; VAR_5++) {
  u64 VAR_6 = VAR_4->pcr[VAR_5];

  VAR_6 &= ~(VAR_2->user_bit | VAR_2->priv_bit |
    VAR_2->hv_bit | VAR_2->irq_bit);
  VAR_4->pcr[VAR_5] = VAR_6;
  VAR_1->write_pcr(VAR_5, VAR_4->pcr[VAR_5]);
 }
}
