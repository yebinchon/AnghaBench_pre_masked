
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_state {TYPE_1__* lscsa; } ;
struct TYPE_2__ {unsigned char* ls; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*) ;

void FUNC_3(struct spu_state *VAR_2)
{

 unsigned char *VAR_3;

 if (VAR_2->lscsa == ((void*)0))
  return;

 for (VAR_3 = VAR_2->lscsa->ls; VAR_3 < VAR_2->lscsa->ls + VAR_0; VAR_3 += VAR_1)
  FUNC_0(FUNC_2(VAR_3));

 FUNC_1(VAR_2->lscsa);
}
