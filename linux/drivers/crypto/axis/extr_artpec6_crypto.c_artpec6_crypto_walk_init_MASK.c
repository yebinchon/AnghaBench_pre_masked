
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct artpec6_crypto_walk {scalar_t__ offset; struct scatterlist* sg; } ;



__attribute__((used)) static void FUNC_0(struct artpec6_crypto_walk *VAR_0,
         struct scatterlist *VAR_1)
{
 VAR_0->sg = VAR_1;
 VAR_0->offset = 0;
}
