
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* aead; } ;
struct ipsec_sa_entry {int authsize; } ;
struct TYPE_2__ {int alg_icv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




__attribute__((used)) static inline int FUNC_0(struct xfrm_state *VAR_4,
      struct ipsec_sa_entry *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_4->aead->alg_icv_len / 8;

 VAR_5->authsize = VAR_7;

 switch (VAR_7) {
 case 128:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 default:
  return -VAR_3;
 }
 return VAR_6;
}
