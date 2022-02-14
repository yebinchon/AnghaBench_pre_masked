
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int * h; scalar_t__* s; scalar_t__ npartial; } ;
typedef TYPE_1__ cf_poly1305 ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(cf_poly1305 *VAR_0,
                        uint8_t VAR_1[16])
{
  if (VAR_0->npartial)
    FUNC_3(VAR_0);

  uint32_t VAR_2[17];
  size_t VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    VAR_2[VAR_3] = VAR_0->s[VAR_3];
  VAR_2[16] = 0;

  FUNC_2(VAR_0->h);
  FUNC_1(VAR_0->h, VAR_2);

  for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    VAR_1[VAR_3] = VAR_0->h[VAR_3];

  FUNC_0(VAR_0, sizeof *VAR_0);
}
