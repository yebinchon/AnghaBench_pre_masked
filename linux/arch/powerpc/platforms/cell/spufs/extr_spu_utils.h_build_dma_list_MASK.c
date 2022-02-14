
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* ui; } ;
typedef TYPE_1__ addr64 ;
struct TYPE_5__ {int size; unsigned int ea_low; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_1(addr64 VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;






 VAR_3 = VAR_2.ui[1];
 VAR_3 += FUNC_0(VAR_1[16384]);

 for (VAR_4 = 0; VAR_4 < 15; VAR_4++, VAR_3 += 16384) {
  VAR_0[VAR_4].size = 16384;
  VAR_0[VAR_4].ea_low = VAR_3;
 }
}
