
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cip; } ;
struct geode_aes_op {scalar_t__ keylen; int dir; int len; scalar_t__ flags; int mode; void* dst; void* src; TYPE_1__ fallback; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int const*) ;
 struct geode_aes_op* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct geode_aes_op*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct crypto_tfm *VAR_4, u8 *VAR_5, const u8 *VAR_6)
{
 struct geode_aes_op *VAR_7 = FUNC_1(VAR_4);

 if (FUNC_3(VAR_7->keylen != VAR_2)) {
  FUNC_0(VAR_7->fallback.cip, VAR_5, VAR_6);
  return;
 }

 VAR_7->src = (void *) VAR_6;
 VAR_7->dst = (void *) VAR_5;
 VAR_7->mode = VAR_3;
 VAR_7->flags = 0;
 VAR_7->len = VAR_0;
 VAR_7->dir = VAR_1;

 FUNC_2(VAR_7);
}
