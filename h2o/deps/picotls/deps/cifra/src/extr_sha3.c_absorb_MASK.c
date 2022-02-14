
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {TYPE_1__** A; } ;
typedef TYPE_2__ cf_sha3_context ;
struct TYPE_8__ {int evn; int odd; } ;
typedef TYPE_3__ cf_sha3_bi ;
struct TYPE_6__ {int evn; int odd; } ;


 int FUNC_0 (TYPE_3__*,int const*) ;

__attribute__((used)) static void FUNC_1(cf_sha3_context *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
  uint16_t VAR_3 = VAR_2 / 8;

  for (uint16_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  {
    cf_sha3_bi VAR_7;
    FUNC_0(&VAR_7, VAR_1);
    VAR_0->A[VAR_4][VAR_5].odd ^= VAR_7.odd;
    VAR_0->A[VAR_4][VAR_5].evn ^= VAR_7.evn;
    VAR_1 += 8;

    VAR_4++;
    if (VAR_4 == 5)
    {
      VAR_5++;
      VAR_4 = 0;
    }
  }
}
