
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_1__* hash; } ;
typedef TYPE_2__ cf_hmac_ctx ;
struct TYPE_6__ {size_t hashsz; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (scalar_t__,int const*) ;
 int FUNC_4 (int const*,int const*,int const*,size_t) ;

__attribute__((used)) static void FUNC_5(const cf_hmac_ctx *VAR_1,
              uint32_t VAR_2,
              const uint8_t *VAR_3, size_t VAR_4,
              uint32_t VAR_5,
              uint8_t *VAR_6)
{
  uint8_t VAR_7[VAR_0];
  size_t VAR_8 = VAR_1->hash->hashsz;

  uint8_t VAR_9[4];
  FUNC_3(VAR_2, VAR_9);




  cf_hmac_ctx VAR_10 = *VAR_1;
  FUNC_1(&VAR_10, VAR_3, VAR_4);
  FUNC_1(&VAR_10, VAR_9, sizeof VAR_9);
  FUNC_0(&VAR_10, VAR_7);
  FUNC_2(VAR_6, VAR_7, VAR_8);




  for (uint32_t VAR_11 = 1; VAR_11 < VAR_5; VAR_11++)
  {
    VAR_10 = *VAR_1;
    FUNC_1(&VAR_10, VAR_7, VAR_8);
    FUNC_0(&VAR_10, VAR_7);
    FUNC_4(VAR_6, VAR_6, VAR_7, VAR_8);
  }
}
