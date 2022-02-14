
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hfi1_packet {int hlen; struct hfi1_ib_message_header* hdr; scalar_t__ rhf_addr; int rcd; } ;
struct hfi1_ib_message_header {int dummy; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct hfi1_packet *VAR_0)
{
 VAR_0->hdr = (struct hfi1_ib_message_header *)
   FUNC_0(VAR_0->rcd,
        VAR_0->rhf_addr);
 VAR_0->hlen = (u8 *)VAR_0->rhf_addr - (u8 *)VAR_0->hdr;
}
