
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* encrypt ) (void*,int *,int *) ;} ;
typedef TYPE_1__ cf_prp ;
struct TYPE_7__ {int* Y0; int e_Y0; int ctr; int gh; } ;
typedef TYPE_2__ cf_gcm_ctx ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,TYPE_1__ const*,void*,int*) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int*,int const*,size_t) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (void*,int *,int *) ;

void FUNC_11(const cf_prp *VAR_0, void *VAR_1, cf_gcm_ctx *VAR_2,
                         const uint8_t *VAR_3, size_t VAR_4,
                         const uint8_t *VAR_5, size_t VAR_6)
{
  uint8_t VAR_7[16] = { 0 };


  VAR_0->encrypt(VAR_1, VAR_7, VAR_7);
  if (VAR_6 == 12)
  {
    FUNC_8(VAR_2->Y0, VAR_5, VAR_6);
    VAR_2->Y0[12] = VAR_2->Y0[13] = VAR_2->Y0[14] = 0x00;
    VAR_2->Y0[15] = 0x01;
  } else {
    FUNC_6(&VAR_2->gh, VAR_7);
    FUNC_4(&VAR_2->gh, VAR_5, VAR_6);
    FUNC_5(&VAR_2->gh, VAR_2->Y0);
  }


  FUNC_6(&VAR_2->gh, VAR_7);
  FUNC_3(&VAR_2->gh, VAR_3, VAR_4);


  FUNC_9(VAR_2->e_Y0, 0, sizeof(VAR_2->e_Y0));
  FUNC_2(&VAR_2->ctr, VAR_0, VAR_1, VAR_2->Y0);
  FUNC_1(&VAR_2->ctr, 12, 4);
  FUNC_0(&VAR_2->ctr, VAR_2->e_Y0, VAR_2->e_Y0, sizeof VAR_2->e_Y0);

  FUNC_7(VAR_7, sizeof VAR_7);
}
