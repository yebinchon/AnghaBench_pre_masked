
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int key; } ;
struct TYPE_4__ {TYPE_1__ aes_xcbc; } ;
struct nx_csbcpb {TYPE_2__ cpb; } ;
struct nx_crypto_ctx {int * props; int * ap; struct nx_csbcpb* csbcpb; } ;
struct crypto_shash {int dummy; } ;



 int VAR_0 ;
 size_t VAR_1 ;
 struct nx_crypto_ctx* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_shash *VAR_2,
      const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct nx_crypto_ctx *VAR_5 = FUNC_0(VAR_2);
 struct nx_csbcpb *VAR_6 = VAR_5->csbcpb;

 switch (VAR_4) {
 case 128:
  VAR_5->ap = &VAR_5->props[VAR_1];
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_6->cpb.aes_xcbc.key, VAR_3, VAR_4);

 return 0;
}
