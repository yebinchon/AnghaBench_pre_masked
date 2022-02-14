
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_cfb64; scalar_t__ has_gcm; scalar_t__ has_xts; scalar_t__ has_authenc; } ;
struct atmel_aes_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct atmel_aes_dev *VAR_5)
{
 int VAR_6;







 if (VAR_5->caps.has_xts)
  FUNC_2(&VAR_4);

 if (VAR_5->caps.has_gcm)
  FUNC_1(&VAR_3);

 if (VAR_5->caps.has_cfb64)
  FUNC_2(&VAR_2);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  FUNC_2(&VAR_0[VAR_6]);
}
