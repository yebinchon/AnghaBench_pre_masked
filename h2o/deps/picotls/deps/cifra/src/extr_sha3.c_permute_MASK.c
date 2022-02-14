
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** A; } ;
typedef TYPE_2__ cf_sha3_context ;
struct TYPE_9__ {int evn; int odd; } ;
struct TYPE_7__ {int evn; int odd; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(cf_sha3_context *VAR_1)
{
  for (int VAR_2 = 0; VAR_2 < 24; VAR_2++)
  {
    FUNC_1(VAR_1);
    FUNC_0(VAR_1);


    VAR_1->A[0][0].odd ^= VAR_0[VAR_2].odd;
    VAR_1->A[0][0].evn ^= VAR_0[VAR_2].evn;
  }
}
