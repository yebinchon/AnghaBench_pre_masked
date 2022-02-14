
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t npartial; int* partial; } ;
typedef TYPE_1__ cf_poly1305 ;


 int FUNC_0 (TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_1(cf_poly1305 *VAR_0)
{
  uint32_t VAR_1[17] = { 0 };
  size_t VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->npartial; VAR_2++)
    VAR_1[VAR_2] = VAR_0->partial[VAR_2];

  VAR_1[VAR_0->npartial] = 1;
  FUNC_0(VAR_0, VAR_1);
}
