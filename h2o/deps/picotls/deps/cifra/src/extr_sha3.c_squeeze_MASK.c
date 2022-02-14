
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int rate; } ;
typedef TYPE_1__ cf_sha3_context ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,size_t) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(cf_sha3_context *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
  while (VAR_2)
  {
    size_t VAR_3 = FUNC_0(VAR_2, VAR_0->rate);
    FUNC_2(VAR_0, VAR_1, VAR_3);
    VAR_1 += VAR_3;
    VAR_2 -= VAR_3;

    FUNC_1(VAR_2 == 0);
  }
}
