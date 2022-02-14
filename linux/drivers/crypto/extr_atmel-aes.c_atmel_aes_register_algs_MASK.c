
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_authenc; scalar_t__ has_xts; scalar_t__ has_gcm; scalar_t__ has_cfb64; } ;
struct atmel_aes_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct atmel_aes_dev *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  VAR_6 = FUNC_2(&VAR_0[VAR_7]);
  if (VAR_6)
   goto err_aes_algs;
 }

 if (VAR_5->caps.has_cfb64) {
  VAR_6 = FUNC_2(&VAR_2);
  if (VAR_6)
   goto err_aes_cfb64_alg;
 }

 if (VAR_5->caps.has_gcm) {
  VAR_6 = FUNC_1(&VAR_3);
  if (VAR_6)
   goto err_aes_gcm_alg;
 }

 if (VAR_5->caps.has_xts) {
  VAR_6 = FUNC_2(&VAR_4);
  if (VAR_6)
   goto err_aes_xts_alg;
 }
 return 0;
err_aes_xts_alg:
 FUNC_3(&VAR_3);
err_aes_gcm_alg:
 FUNC_4(&VAR_2);
err_aes_cfb64_alg:
 VAR_7 = FUNC_0(VAR_0);
err_aes_algs:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_4(&VAR_0[VAR_8]);

 return VAR_6;
}
