
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {int hashsz; int (* digest ) (int *,int const*) ;int (* update ) (int *,int const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (scalar_t__,int const*) ;

__attribute__((used)) static void FUNC_6(const cf_chash *VAR_1,
                      uint8_t *VAR_2, size_t VAR_3,
                      const uint8_t *VAR_4, size_t VAR_5,
                      uint32_t *VAR_6)
{

  uint8_t VAR_7[VAR_0];
  uint8_t VAR_8 = 3;
  cf_chash_ctx VAR_9;

  VAR_1->init(&VAR_9);
  VAR_1->update(&VAR_9, &VAR_8, sizeof VAR_8);
  VAR_1->update(&VAR_9, VAR_2, VAR_3);
  VAR_1->digest(&VAR_9, VAR_7);


  uint8_t VAR_10[4];
  FUNC_5(*VAR_6, VAR_10);

  FUNC_0(VAR_2, VAR_3, VAR_7, VAR_1->hashsz);
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_0(VAR_2, VAR_3, VAR_10, sizeof VAR_10);


  *VAR_6 = *VAR_6 + 1;
}
