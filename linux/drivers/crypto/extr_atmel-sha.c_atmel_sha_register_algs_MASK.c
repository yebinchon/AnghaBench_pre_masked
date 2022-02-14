
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_hmac; scalar_t__ has_sha_384_512; scalar_t__ has_sha224; } ;
struct atmel_sha_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct atmel_sha_dev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_5 = FUNC_1(&VAR_0[VAR_6]);
  if (VAR_5)
   goto err_sha_1_256_algs;
 }

 if (VAR_4->caps.has_sha224) {
  VAR_5 = FUNC_1(&VAR_1);
  if (VAR_5)
   goto err_sha_224_algs;
 }

 if (VAR_4->caps.has_sha_384_512) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   VAR_5 = FUNC_1(&VAR_2[VAR_6]);
   if (VAR_5)
    goto err_sha_384_512_algs;
  }
 }

 if (VAR_4->caps.has_hmac) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
   VAR_5 = FUNC_1(&VAR_3[VAR_6]);
   if (VAR_5)
    goto err_sha_hmac_algs;
  }
 }

 return 0;


err_sha_hmac_algs:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(&VAR_3[VAR_7]);
 VAR_6 = FUNC_0(VAR_2);
err_sha_384_512_algs:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(&VAR_2[VAR_7]);
 FUNC_2(&VAR_1);
err_sha_224_algs:
 VAR_6 = FUNC_0(VAR_0);
err_sha_1_256_algs:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(&VAR_0[VAR_7]);

 return VAR_5;
}
