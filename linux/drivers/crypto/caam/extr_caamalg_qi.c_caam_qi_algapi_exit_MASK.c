
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_skcipher_alg {int skcipher; scalar_t__ registered; } ;
struct caam_aead_alg {int aead; scalar_t__ registered; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_3(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  struct caam_aead_alg *VAR_3 = VAR_0 + VAR_2;

  if (VAR_3->registered)
   FUNC_1(&VAR_3->aead);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  struct caam_skcipher_alg *VAR_4 = VAR_1 + VAR_2;

  if (VAR_4->registered)
   FUNC_2(&VAR_4->skcipher);
 }
}
