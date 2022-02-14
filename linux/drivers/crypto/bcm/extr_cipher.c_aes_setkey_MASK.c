
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct iproc_ctx_s {int max_payload; int cipher_type; TYPE_1__ cipher; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct iproc_ctx_s* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_8, const u8 *VAR_9,
        unsigned int VAR_10)
{
 struct iproc_ctx_s *VAR_11 = FUNC_1(VAR_8);

 if (VAR_11->cipher.mode == VAR_1)

  VAR_10 = VAR_10 / 2;

 switch (VAR_10) {
 case 130:
  VAR_11->cipher_type = VAR_2;
  break;
 case 129:
  VAR_11->cipher_type = VAR_3;
  break;
 case 128:
  VAR_11->cipher_type = VAR_4;
  break;
 default:
  FUNC_2(VAR_8, VAR_5);
  return -VAR_6;
 }
 FUNC_0((VAR_11->max_payload != VAR_7) &&
  ((VAR_11->max_payload % VAR_0) != 0));
 return 0;
}
