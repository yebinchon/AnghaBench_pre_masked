
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int key; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_8__ {TYPE_3__ aes_gca; TYPE_2__ hdr; TYPE_1__ aes_gcm; } ;
struct nx_csbcpb {TYPE_4__ cpb; } ;
struct nx_crypto_ctx {int * props; int * ap; struct nx_csbcpb* csbcpb_aead; struct nx_csbcpb* csbcpb; } ;
struct crypto_aead {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nx_csbcpb*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 struct nx_crypto_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct nx_crypto_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_10,
         const u8 *VAR_11,
         unsigned int VAR_12)
{
 struct nx_crypto_ctx *VAR_13 = FUNC_1(VAR_10);
 struct nx_csbcpb *VAR_14 = VAR_13->csbcpb;
 struct nx_csbcpb *VAR_15 = VAR_13->csbcpb_aead;

 FUNC_3(VAR_13, VAR_1);

 switch (VAR_12) {
 case 130:
  FUNC_0(VAR_14, VAR_2);
  FUNC_0(VAR_15, VAR_2);
  VAR_13->ap = &VAR_13->props[VAR_7];
  break;
 case 129:
  FUNC_0(VAR_14, VAR_3);
  FUNC_0(VAR_15, VAR_3);
  VAR_13->ap = &VAR_13->props[VAR_8];
  break;
 case 128:
  FUNC_0(VAR_14, VAR_4);
  FUNC_0(VAR_15, VAR_4);
  VAR_13->ap = &VAR_13->props[VAR_9];
  break;
 default:
  return -VAR_0;
 }

 VAR_14->cpb.hdr.mode = VAR_6;
 FUNC_2(VAR_14->cpb.aes_gcm.key, VAR_11, VAR_12);

 VAR_15->cpb.hdr.mode = VAR_5;
 FUNC_2(VAR_15->cpb.aes_gca.key, VAR_11, VAR_12);

 return 0;
}
