
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sample_node {int dummy; } ;
struct ether_addr {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf; } ;
struct ath_ratestats {TYPE_1__ re; } ;
struct ath_rateioctl_tlv {int tlv_id; int tlv_len; } ;
struct ath_rateioctl_rt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_ratestats*,struct ath_rateioctl_rt*,struct sample_node*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct ath_ratestats *VAR_3, struct ether_addr *VAR_4)
{
 struct ath_rateioctl_tlv *VAR_5;
 struct sample_node *VAR_6 = ((void*)0);
 struct ath_rateioctl_rt *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 uint8_t *VAR_9 = (uint8_t *) VAR_3->re.buf;




 VAR_5 = (struct ath_rateioctl_tlv *) VAR_9;
 if (VAR_5->tlv_id != VAR_0) {
  FUNC_2(VAR_2, "unexpected rate control TLV (got 0x%x, "
      "expected 0x%x\n",
      VAR_5->tlv_id,
      VAR_0);
  FUNC_1(127);
 }
 if (VAR_5->tlv_len != sizeof(struct ath_rateioctl_rt)) {
  FUNC_2(VAR_2, "unexpected TLV len (got %d bytes, "
      "expected %d bytes\n",
      VAR_5->tlv_len,
      (int) sizeof(struct ath_rateioctl_rt));
  FUNC_1(127);
 }
 VAR_7 = (void *) (VAR_9 + sizeof(struct ath_rateioctl_tlv));


 VAR_5 = (void *) (VAR_9 + sizeof(struct ath_rateioctl_tlv) +
     sizeof(struct ath_rateioctl_rt));
 if (VAR_5->tlv_id != VAR_1) {
  FUNC_2(VAR_2, "unexpected rate control TLV (got 0x%x, "
      "expected 0x%x\n",
      VAR_5->tlv_id,
      VAR_1);
  FUNC_1(127);
 }
 if (VAR_5->tlv_len != sizeof(struct sample_node)) {
  FUNC_2(VAR_2, "unexpected TLV len (got %d bytes, "
      "expected %d bytes\n",
      VAR_5->tlv_len,
      (int) sizeof(struct sample_node));
  FUNC_1(127);
 }
 VAR_6 = (void *) (VAR_9 + sizeof(struct ath_rateioctl_tlv) +
     sizeof(struct ath_rateioctl_rt) +
     sizeof(struct ath_rateioctl_tlv));

 FUNC_0(VAR_3, VAR_7, VAR_6);

 return (0);
}
