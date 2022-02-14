
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct nx_csbcpb {TYPE_2__ cpb; } ;
struct nx_crypto_ctx {struct nx_csbcpb* csbcpb; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nx_csbcpb*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nx_crypto_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct nx_crypto_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_3)
{
 struct nx_crypto_ctx *VAR_4 = FUNC_1(VAR_3);
 struct nx_csbcpb *VAR_5 = VAR_4->csbcpb;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_4, VAR_0);

 FUNC_0(VAR_5, VAR_1);
 VAR_5->cpb.hdr.mode = VAR_2;

 return 0;
}
