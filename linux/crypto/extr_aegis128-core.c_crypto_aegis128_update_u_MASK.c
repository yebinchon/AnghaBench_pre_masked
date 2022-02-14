
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aegis_state {TYPE_1__* blocks; } ;
struct TYPE_2__ {int bytes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct aegis_state*) ;
 int FUNC_2 (struct aegis_state*,void const*) ;
 int FUNC_3 (int ,void const*,int ) ;

__attribute__((used)) static void FUNC_4(struct aegis_state *VAR_1, const void *VAR_2)
{
 if (FUNC_0()) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }

 FUNC_1(VAR_1);
 FUNC_3(VAR_1->blocks[0].bytes, VAR_2, VAR_0);
}
