
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** A; } ;
typedef TYPE_2__ cf_sha3_context ;
struct TYPE_9__ {int odd; int evn; } ;
typedef TYPE_3__ cf_sha3_bi ;
struct TYPE_7__ {int odd; int evn; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(cf_sha3_context *VAR_0)
{
  cf_sha3_bi VAR_1[5], VAR_2[5];

  for (int VAR_3 = 0; VAR_3 < 5; VAR_3++)
  {
    VAR_1[VAR_3].odd = VAR_0->A[VAR_3][0].odd ^ VAR_0->A[VAR_3][1].odd ^ VAR_0->A[VAR_3][2].odd ^ VAR_0->A[VAR_3][3].odd ^ VAR_0->A[VAR_3][4].odd;
    VAR_1[VAR_3].evn = VAR_0->A[VAR_3][0].evn ^ VAR_0->A[VAR_3][1].evn ^ VAR_0->A[VAR_3][2].evn ^ VAR_0->A[VAR_3][3].evn ^ VAR_0->A[VAR_3][4].evn;
  }

  for (int VAR_4 = 0; VAR_4 < 5; VAR_4++)
  {
    cf_sha3_bi VAR_5;
    FUNC_1(&VAR_5, &VAR_1[FUNC_0(VAR_4 + 1)]);
    VAR_2[VAR_4].odd = VAR_1[FUNC_0(VAR_4 - 1)].odd ^ VAR_5.odd;
    VAR_2[VAR_4].evn = VAR_1[FUNC_0(VAR_4 - 1)].evn ^ VAR_5.evn;

    for (int VAR_6 = 0; VAR_6 < 5; VAR_6++)
    {
      VAR_0->A[VAR_4][VAR_6].odd ^= VAR_2[VAR_4].odd;
      VAR_0->A[VAR_4][VAR_6].evn ^= VAR_2[VAR_4].evn;
    }
  }
}
