
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vmac_tfm_ctx {int dummy; } ;
struct TYPE_2__ {int * bytes; } ;
struct vmac_desc_ctx {unsigned int nonce_size; int partial_size; int * partial; int const* partial_words; TYPE_1__ nonce; } ;
struct shash_desc {int tfm; } ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct vmac_tfm_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 struct vmac_desc_ctx* FUNC_4 (struct shash_desc*) ;
 int FUNC_5 (struct vmac_tfm_ctx const*,struct vmac_desc_ctx*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
 const struct vmac_tfm_ctx *VAR_5 = FUNC_0(VAR_2->tfm);
 struct vmac_desc_ctx *VAR_6 = FUNC_4(VAR_2);
 unsigned int VAR_7;


 if (VAR_6->nonce_size < VAR_1) {
  VAR_7 = FUNC_2(VAR_4, VAR_1 - VAR_6->nonce_size);
  FUNC_1(&VAR_6->nonce.bytes[VAR_6->nonce_size], VAR_3, VAR_7);
  VAR_6->nonce_size += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }

 if (VAR_6->partial_size) {
  VAR_7 = FUNC_2(VAR_4, VAR_0 - VAR_6->partial_size);
  FUNC_1(&VAR_6->partial[VAR_6->partial_size], VAR_3, VAR_7);
  VAR_6->partial_size += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
  if (VAR_6->partial_size == VAR_0) {
   FUNC_5(VAR_5, VAR_6, VAR_6->partial_words, 1);
   VAR_6->partial_size = 0;
  }
 }

 if (VAR_4 >= VAR_0) {
  VAR_7 = FUNC_3(VAR_4, VAR_0);

  FUNC_5(VAR_5, VAR_6, (const __le64 *)VAR_3, VAR_7 / VAR_0);
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }

 if (VAR_4) {
  FUNC_1(VAR_6->partial, VAR_3, VAR_4);
  VAR_6->partial_size = VAR_4;
 }

 return 0;
}
