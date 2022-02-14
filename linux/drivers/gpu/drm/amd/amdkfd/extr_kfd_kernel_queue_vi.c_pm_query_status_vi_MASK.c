
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int command; int interrupt_sel; scalar_t__ context_id; } ;
struct TYPE_3__ {int u32All; } ;
struct pm4_mes_query_status {void* data_lo; void* data_hi; void* addr_lo; void* addr_hi; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct packet_manager *VAR_3, uint32_t *VAR_4,
   uint64_t VAR_5, uint32_t VAR_6)
{
 struct pm4_mes_query_status *VAR_7;

 VAR_7 = (struct pm4_mes_query_status *)VAR_4;
 FUNC_1(VAR_4, 0, sizeof(struct pm4_mes_query_status));

 VAR_7->header.u32All = FUNC_2(VAR_0,
     sizeof(struct pm4_mes_query_status));

 VAR_7->bitfields2.context_id = 0;
 VAR_7->bitfields2.interrupt_sel =
   VAR_2;
 VAR_7->bitfields2.command =
   VAR_1;

 VAR_7->addr_hi = FUNC_3((uint64_t)VAR_5);
 VAR_7->addr_lo = FUNC_0((uint64_t)VAR_5);
 VAR_7->data_hi = FUNC_3((uint64_t)VAR_6);
 VAR_7->data_lo = FUNC_0((uint64_t)VAR_6);

 return 0;
}
