
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_sha_384_512; scalar_t__ has_sha224; scalar_t__ has_hmac; } ;
struct atmel_sha_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct atmel_sha_dev *VAR_4)
{
 int VAR_5;

 if (VAR_4->caps.has_hmac)
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
   FUNC_1(&VAR_3[VAR_5]);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  FUNC_1(&VAR_0[VAR_5]);

 if (VAR_4->caps.has_sha224)
  FUNC_1(&VAR_1);

 if (VAR_4->caps.has_sha_384_512) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
   FUNC_1(&VAR_2[VAR_5]);
 }
}
