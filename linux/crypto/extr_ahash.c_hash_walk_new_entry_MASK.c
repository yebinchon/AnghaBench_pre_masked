
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; scalar_t__ length; } ;
struct crypto_hash_walk {int offset; scalar_t__ entrylen; scalar_t__ total; struct scatterlist* sg; scalar_t__ pg; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_hash_walk*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_3(struct crypto_hash_walk *VAR_1)
{
 struct scatterlist *VAR_2;

 VAR_2 = VAR_1->sg;
 VAR_1->offset = VAR_2->offset;
 VAR_1->pg = FUNC_2(VAR_1->sg) + (VAR_1->offset >> VAR_0);
 VAR_1->offset = FUNC_1(VAR_1->offset);
 VAR_1->entrylen = VAR_2->length;

 if (VAR_1->entrylen > VAR_1->total)
  VAR_1->entrylen = VAR_1->total;
 VAR_1->total -= VAR_1->entrylen;

 return FUNC_0(VAR_1);
}
