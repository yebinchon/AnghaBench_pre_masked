
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ud_header {int immediate_data; scalar_t__ immediate_present; int deth; int bth; int udp; scalar_t__ udp_present; int ip4; scalar_t__ ipv4_present; int grh; scalar_t__ grh_present; int vlan; scalar_t__ vlan_present; int eth; scalar_t__ eth_present; int lrh; scalar_t__ lrh_present; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int *,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*,int *,int) ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_3(struct ib_ud_header *VAR_16,
        void *VAR_17)
{
 int VAR_18 = 0;

 if (VAR_16->lrh_present) {
  FUNC_1(VAR_13, FUNC_0(VAR_13),
   &VAR_16->lrh, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_5;
 }
 if (VAR_16->eth_present) {
  FUNC_1(VAR_10, FUNC_0(VAR_10),
   &VAR_16->eth, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_2;
 }
 if (VAR_16->vlan_present) {
  FUNC_1(VAR_15, FUNC_0(VAR_15),
   &VAR_16->vlan, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_7;
 }
 if (VAR_16->grh_present) {
  FUNC_1(VAR_11, FUNC_0(VAR_11),
   &VAR_16->grh, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_3;
 }
 if (VAR_16->ipv4_present) {
  FUNC_1(VAR_12, FUNC_0(VAR_12),
   &VAR_16->ip4, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_4;
 }
 if (VAR_16->udp_present) {
  FUNC_1(VAR_14, FUNC_0(VAR_14),
   &VAR_16->udp, (char *)VAR_17 + VAR_18);
  VAR_18 += VAR_6;
 }

 FUNC_1(VAR_8, FUNC_0(VAR_8),
  &VAR_16->bth, (char *)VAR_17 + VAR_18);
 VAR_18 += VAR_0;

 FUNC_1(VAR_9, FUNC_0(VAR_9),
  &VAR_16->deth, (char *)VAR_17 + VAR_18);
 VAR_18 += VAR_1;

 if (VAR_16->immediate_present) {
  FUNC_2((char *)VAR_17 + VAR_18, &VAR_16->immediate_data, sizeof VAR_16->immediate_data);
  VAR_18 += sizeof VAR_16->immediate_data;
 }

 return VAR_18;
}
