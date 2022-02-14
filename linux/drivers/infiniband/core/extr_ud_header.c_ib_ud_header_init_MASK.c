
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_12__ {int pad_count; scalar_t__ transport_header_version; int opcode; } ;
struct TYPE_11__ {void* length; } ;
struct TYPE_10__ {int ver; int hdr_len; int protocol; void* tot_len; } ;
struct TYPE_9__ {int ip_version; int next_header; void* payload_length; } ;
struct TYPE_8__ {void* type; } ;
struct TYPE_7__ {void* packet_length; int link_next_header; scalar_t__ link_version; } ;
struct ib_ud_header {int lrh_present; int eth_present; int vlan_present; int grh_present; int ipv4_present; int udp_present; int immediate_present; TYPE_6__ bth; TYPE_5__ udp; TYPE_4__ ip4; TYPE_3__ grh; TYPE_2__ eth; TYPE_1__ lrh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ib_ud_header*,int ,int) ;

int FUNC_2(int VAR_13,
        int VAR_14,
        int VAR_15,
        int VAR_16,
        int VAR_17,
        int VAR_18,
        int VAR_19,
        int VAR_20,
        struct ib_ud_header *VAR_21)
{
 size_t VAR_22 = VAR_19 ? VAR_11 : 0;

 VAR_17 = VAR_17 && !VAR_18;
 FUNC_1(VAR_21, 0, sizeof *VAR_21);




 if (VAR_19 && VAR_18 != 4 && VAR_18 != 6)
  return -VAR_0;

 if (VAR_14) {
  u16 VAR_23;

  VAR_21->lrh.link_version = 0;
  VAR_21->lrh.link_next_header =
   VAR_17 ? VAR_6 : VAR_7;
  VAR_23 = (VAR_8 +
     VAR_2 +
     VAR_3 +
     (VAR_17 ? VAR_4 : 0) +
     VAR_13 +
     4 +
     3) / 4;
  VAR_21->lrh.packet_length = FUNC_0(VAR_23);
 }

 if (VAR_16)
  VAR_21->eth.type = FUNC_0(VAR_1);

 if (VAR_18 == 6 || VAR_17) {
  VAR_21->grh.ip_version = 6;
  VAR_21->grh.payload_length =
   FUNC_0((VAR_22 +
         VAR_2 +
         VAR_3 +
         VAR_13 +
         4 +
         3) & ~3);
  VAR_21->grh.next_header = VAR_19 ? VAR_12 : 0x1b;
 }

 if (VAR_18 == 4) {
  VAR_21->ip4.ver = 4;
  VAR_21->ip4.hdr_len = 5;
  VAR_21->ip4.tot_len =
   FUNC_0(VAR_5 +
         VAR_22 +
         VAR_2 +
         VAR_3 +
         VAR_13 +
         4);
  VAR_21->ip4.protocol = VAR_12;
 }
 if (VAR_19 && VAR_18)
  VAR_21->udp.length =
   FUNC_0(VAR_11 +
         VAR_2 +
         VAR_3 +
         VAR_13 +
         4);

 if (VAR_20)
  VAR_21->bth.opcode = VAR_10;
 else
  VAR_21->bth.opcode = VAR_9;
 VAR_21->bth.pad_count = (4 - VAR_13) & 3;
 VAR_21->bth.transport_header_version = 0;

 VAR_21->lrh_present = VAR_14;
 VAR_21->eth_present = VAR_15;
 VAR_21->vlan_present = VAR_16;
 VAR_21->grh_present = VAR_17 || (VAR_18 == 6);
 VAR_21->ipv4_present = VAR_18 == 4;
 VAR_21->udp_present = VAR_19;
 VAR_21->immediate_present = VAR_20;
 return 0;
}
