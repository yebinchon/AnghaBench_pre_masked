
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int reseed_counter; int C; int V; } ;
typedef TYPE_1__ cf_hash_drbg_sha256 ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int,int ,int,void const*,size_t,void const*,size_t,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(cf_hash_drbg_sha256 *VAR_1,
                                const void *VAR_2, size_t VAR_3,
                                const void *VAR_4, size_t VAR_5)
{



  uint8_t VAR_6 = 1;

  FUNC_1(VAR_1->C, VAR_1->V, sizeof VAR_1->C);
  FUNC_0(&VAR_0,
          &VAR_6, sizeof VAR_6,
          VAR_1->C, sizeof VAR_1->C,
          VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_1->V, sizeof VAR_1->V);


  uint8_t VAR_7 = 0;
  FUNC_0(&VAR_0,
          &VAR_7, sizeof VAR_7,
          VAR_1->V, sizeof VAR_1->V,
          ((void*)0), 0,
          ((void*)0), 0,
          VAR_1->C, sizeof VAR_1->C);


  VAR_1->reseed_counter = 1;
}
