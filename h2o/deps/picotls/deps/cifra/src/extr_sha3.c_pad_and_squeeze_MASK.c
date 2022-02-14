
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ rate; scalar_t__ npartial; } ;
typedef TYPE_1__ cf_sha3_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,size_t) ;

__attribute__((used)) static void FUNC_4(cf_sha3_context *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
  FUNC_2(VAR_1, VAR_0, VAR_1->rate - VAR_1->npartial);
  FUNC_0(VAR_1->npartial == 0);

  FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_1, sizeof *VAR_1);
}
