
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__** A; } ;
typedef TYPE_2__ cf_sha3_context ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_9__ {int odd; int evn; TYPE_1__ member_0; } ;
typedef TYPE_3__ cf_sha3_bi ;
struct TYPE_10__ {int odd; int evn; } ;


 size_t FUNC_0 (int) ;
 int ** VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_2(cf_sha3_context *VAR_1)
{
  cf_sha3_bi VAR_2[5][5] = { { { 0 } } };

  for (int VAR_3 = 0; VAR_3 < 5; VAR_3++)
    for (int VAR_4 = 0; VAR_4 < 5; VAR_4++)
      FUNC_1(&VAR_2[VAR_4][FUNC_0(2 * VAR_3 + 3 * VAR_4)], &VAR_1->A[VAR_3][VAR_4], VAR_0[VAR_4][VAR_3]);

  for (int VAR_5 = 0; VAR_5 < 5; VAR_5++)
  {
    unsigned VAR_6 = FUNC_0(VAR_5 + 1);
    unsigned VAR_7 = FUNC_0(VAR_5 + 2);

    for (int VAR_8 = 0; VAR_8 < 5; VAR_8++)
    {
      VAR_1->A[VAR_5][VAR_8].odd = VAR_2[VAR_5][VAR_8].odd ^ ((~ VAR_2[VAR_6][VAR_8].odd) & VAR_2[VAR_7][VAR_8].odd);
      VAR_1->A[VAR_5][VAR_8].evn = VAR_2[VAR_5][VAR_8].evn ^ ((~ VAR_2[VAR_6][VAR_8].evn) & VAR_2[VAR_7][VAR_8].evn);
    }
  }
}
