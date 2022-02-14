
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int reseed_counter; int C; int V; } ;
typedef TYPE_1__ cf_hash_drbg_sha256 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int,void*,size_t) ;
 int FUNC_3 (int *,void const*,size_t,int ,int) ;
 int FUNC_4 (int *,int ,int,int ,int,int *) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(cf_hash_drbg_sha256 *VAR_1,
                             const void *VAR_2, size_t VAR_3,
                             void *VAR_4, size_t VAR_5)
{
  uint8_t VAR_6[440/8];

  FUNC_0(!FUNC_1(VAR_1));

  FUNC_3(&VAR_0, VAR_2, VAR_3, VAR_1->V, sizeof VAR_1->V);
  FUNC_0(sizeof VAR_6 == sizeof VAR_1->V);
  FUNC_5(VAR_6, VAR_1->V, sizeof VAR_1->V);
  FUNC_2(&VAR_0, VAR_6, sizeof VAR_6, VAR_4, VAR_5);
  FUNC_4(&VAR_0, VAR_1->V, sizeof VAR_1->V, VAR_1->C, sizeof VAR_1->C, &VAR_1->reseed_counter);
}
