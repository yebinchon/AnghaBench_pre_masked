
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ const* ks; } ;
typedef TYPE_1__ cf_aes_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, size_t VAR_1,
                        const uint32_t *VAR_2, size_t VAR_3)
{
  cf_aes_context VAR_4;

  FUNC_1(&VAR_4, VAR_0, VAR_1);

  for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
    FUNC_0(VAR_4.ks[VAR_5] == VAR_2[VAR_5]);
  }
}
