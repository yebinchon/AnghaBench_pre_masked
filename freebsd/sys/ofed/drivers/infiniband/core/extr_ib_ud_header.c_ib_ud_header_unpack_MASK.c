
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_version; int link_next_header; int ip_version; int next_header; int opcode; scalar_t__ transport_header_version; } ;
struct ib_ud_header {int grh_present; int immediate_present; int immediate_data; TYPE_1__ deth; TYPE_1__ bth; TYPE_1__ lrh; TYPE_1__ grh; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,void*,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(void *VAR_9,
   struct ib_ud_header *VAR_10)
{
 FUNC_1(VAR_8, FUNC_0(VAR_8),
    VAR_9, &VAR_10->lrh);
 VAR_9 = (char *)VAR_9 + VAR_4;

 if (VAR_10->lrh.link_version != 0) {
  FUNC_3("Invalid LRH.link_version %d\n",
   VAR_10->lrh.link_version);
  return -VAR_0;
 }

 switch (VAR_10->lrh.link_next_header) {
 case 130:
  VAR_10->grh_present = 0;
  break;

 case 131:
  VAR_10->grh_present = 1;
  FUNC_1(VAR_7, FUNC_0(VAR_7),
     VAR_9, &VAR_10->grh);
  VAR_9 = (char *)VAR_9 + VAR_3;

  if (VAR_10->grh.ip_version != 6) {
   FUNC_3("Invalid GRH.ip_version %d\n",
    VAR_10->grh.ip_version);
   return -VAR_0;
  }
  if (VAR_10->grh.next_header != 0x1b) {
   FUNC_3("Invalid GRH.next_header 0x%02x\n",
    VAR_10->grh.next_header);
   return -VAR_0;
  }
  break;

 default:
  FUNC_3("Invalid LRH.link_next_header %d\n",
   VAR_10->lrh.link_next_header);
  return -VAR_0;
 }

 FUNC_1(VAR_5, FUNC_0(VAR_5),
    VAR_9, &VAR_10->bth);
 VAR_9 = (char *)VAR_9 + VAR_1;

 switch (VAR_10->bth.opcode) {
 case 129:
  VAR_10->immediate_present = 0;
  break;
 case 128:
  VAR_10->immediate_present = 1;
  break;
 default:
  FUNC_3("Invalid BTH.opcode 0x%02x\n", VAR_10->bth.opcode);
  return -VAR_0;
 }

 if (VAR_10->bth.transport_header_version != 0) {
  FUNC_3("Invalid BTH.transport_header_version %d\n",
   VAR_10->bth.transport_header_version);
  return -VAR_0;
 }

 FUNC_1(VAR_6, FUNC_0(VAR_6),
    VAR_9, &VAR_10->deth);
 VAR_9 = (char *)VAR_9 + VAR_2;

 if (VAR_10->immediate_present)
  FUNC_2(&VAR_10->immediate_data, VAR_9, sizeof VAR_10->immediate_data);

 return 0;
}
