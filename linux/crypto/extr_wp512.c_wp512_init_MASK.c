
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wp512_ctx {long* hash; scalar_t__* buffer; scalar_t__ bufferPos; scalar_t__ bufferBits; int bitLength; } ;
struct shash_desc {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 struct wp512_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0) {
 struct wp512_ctx *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_0(VAR_1->bitLength, 0, 32);
 VAR_1->bufferBits = VAR_1->bufferPos = 0;
 VAR_1->buffer[0] = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1->hash[VAR_2] = 0L;
 }

 return 0;
}
