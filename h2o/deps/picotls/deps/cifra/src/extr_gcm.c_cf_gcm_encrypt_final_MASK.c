
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int e_Y0; int gh; } ;
typedef TYPE_1__ uint8_t ;
typedef TYPE_1__ cf_gcm_ctx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ,size_t) ;

void FUNC_4(cf_gcm_ctx *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{

  uint8_t VAR_3[16] = { 0 };
  FUNC_1(&VAR_0->gh, VAR_3);

  FUNC_0(VAR_2 > 1 && VAR_2 <= 16);
  FUNC_3(VAR_1, VAR_3, VAR_0->e_Y0, VAR_2);

  FUNC_2(VAR_3, sizeof VAR_3);
  FUNC_2(VAR_0, sizeof *VAR_0);
}
