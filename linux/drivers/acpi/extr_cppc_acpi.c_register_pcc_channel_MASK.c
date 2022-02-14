
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct acpi_pcct_hw_reduced {int latency; int length; int base_address; int max_access_rate; int min_turnaround_time; } ;
struct TYPE_5__ {int deadline_us; int pcc_nominal; int pcc_channel_acquired; int pcc_comm_addr; int pcc_mpar; int pcc_mrtt; TYPE_1__* pcc_channel; } ;
struct TYPE_4__ {struct acpi_pcct_hw_reduced* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_5)
{
 struct acpi_pcct_hw_reduced *VAR_6;
 u64 VAR_7;

 if (VAR_5 >= 0) {
  VAR_4[VAR_5]->pcc_channel =
   FUNC_2(&VAR_3, VAR_5);

  if (FUNC_0(VAR_4[VAR_5]->pcc_channel)) {
   FUNC_3("Failed to find PCC channel for subspace %d\n",
          VAR_5);
   return -VAR_0;
  }







  VAR_6 = (VAR_4[VAR_5]->pcc_channel)->con_priv;

  if (!VAR_6) {
   FUNC_3("No PCC subspace found for %d CPPC\n",
          VAR_5);
   return -VAR_0;
  }






  VAR_7 = VAR_2 * VAR_6->latency;
  VAR_4[VAR_5]->deadline_us = VAR_7;
  VAR_4[VAR_5]->pcc_mrtt = VAR_6->min_turnaround_time;
  VAR_4[VAR_5]->pcc_mpar = VAR_6->max_access_rate;
  VAR_4[VAR_5]->pcc_nominal = VAR_6->latency;

  VAR_4[VAR_5]->pcc_comm_addr =
   FUNC_1(VAR_6->base_address, VAR_6->length);
  if (!VAR_4[VAR_5]->pcc_comm_addr) {
   FUNC_3("Failed to ioremap PCC comm region mem for %d\n",
          VAR_5);
   return -VAR_1;
  }


  VAR_4[VAR_5]->pcc_channel_acquired = 1;
 }

 return 0;
}
