
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slotinfo {TYPE_1__* si_intpins; } ;
struct TYPE_4__ {struct slotinfo* slotinfo; } ;
struct TYPE_3__ {scalar_t__ ii_count; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

int
FUNC_0(int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct slotinfo *VAR_6;

 VAR_3 = 0;
 if (VAR_1[VAR_2] != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_6 = &VAR_1[VAR_2]->slotinfo[VAR_4];
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
    if (VAR_6->si_intpins[VAR_5].ii_count != 0)
     VAR_3++;
   }
  }
 }
 return (VAR_3);
}
