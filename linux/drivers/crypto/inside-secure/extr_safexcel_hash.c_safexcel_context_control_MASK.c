
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct safexcel_crypto_priv {int dev; } ;
struct TYPE_6__ {int control0; int control1; } ;
struct safexcel_command_desc {TYPE_3__ control_data; } ;
struct safexcel_ahash_req {int processed; int state_sz; int digest; int hmac_zlen; int block_sz; scalar_t__ finish; int state; } ;
struct TYPE_5__ {TYPE_1__* ctxr; } ;
struct safexcel_ahash_ctx {int alg; int opad; TYPE_2__ base; struct safexcel_crypto_priv* priv; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct safexcel_ahash_ctx *VAR_7,
         struct safexcel_ahash_req *VAR_8,
         struct safexcel_command_desc *VAR_9)
{
 struct safexcel_crypto_priv *VAR_10 = VAR_7->priv;
 u64 VAR_11 = 0;

 VAR_9->control_data.control0 |= VAR_7->alg;






 if (!VAR_8->processed) {

  if (VAR_8->finish) {
   VAR_9->control_data.control0 |=
    VAR_5 |
    VAR_4 |

    FUNC_0(1);
  } else {
   VAR_9->control_data.control0 |=
    VAR_5 |
    VAR_4 |
    VAR_3 |

    FUNC_0(1);
  }
  return;
 }


 FUNC_3(VAR_7->base.ctxr->data, VAR_8->state, VAR_8->state_sz);

 if (VAR_8->finish) {

  if ((VAR_8->digest == VAR_2) ||
      VAR_8->hmac_zlen || (VAR_8->processed != VAR_8->block_sz)) {
   VAR_11 = VAR_8->processed / VAR_6;






   if (FUNC_4(VAR_11 & 0xffffffff00000000ULL)) {
    FUNC_2(VAR_10->dev,
      "Input data is too big\n");
    return;
   }
  }

  if ((VAR_8->digest == VAR_2) ||

      VAR_8->hmac_zlen ||

      (VAR_8->processed != VAR_8->block_sz)) {

   VAR_9->control_data.control0 |=
    FUNC_0((VAR_8->state_sz >> 2) + 1) |
    VAR_5 |
    VAR_2;

   if (VAR_8->hmac_zlen)
    VAR_9->control_data.control0 |=
     VAR_3;
   VAR_9->control_data.control1 |=
    VAR_0;
   VAR_7->base.ctxr->data[VAR_8->state_sz >> 2] =
    FUNC_1(VAR_11);
   VAR_8->digest = VAR_2;


   VAR_8->hmac_zlen = 0;
  } else {

   FUNC_3(VAR_7->base.ctxr->data + (VAR_8->state_sz >> 2),
          VAR_7->opad, VAR_8->state_sz);


   VAR_9->control_data.control0 |=
    FUNC_0(VAR_8->state_sz >> 1) |
    VAR_5 |
    VAR_1;
  }
 } else {
  VAR_9->control_data.control0 |=
   FUNC_0(VAR_8->state_sz >> 2) |
   VAR_2 |
   VAR_5 |
   VAR_3;
 }
}
