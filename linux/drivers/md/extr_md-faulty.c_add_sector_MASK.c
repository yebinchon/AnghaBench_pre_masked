
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct faulty_conf {int nfaults; scalar_t__* faults; int* modes; } ;
typedef scalar_t__ sector_t ;


 void* VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static void FUNC_0(struct faulty_conf *VAR_2, sector_t VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_2->nfaults;
 for (VAR_5=0; VAR_5<VAR_2->nfaults; VAR_5++)
  if (VAR_2->faults[VAR_5] == VAR_3) {
   switch(VAR_4) {
   case 131: VAR_2->modes[VAR_5] = VAR_4; return;
   case 128:
    if (VAR_2->modes[VAR_5] == 129 ||
        VAR_2->modes[VAR_5] == 130)
     VAR_2->modes[VAR_5] = VAR_0;
    else
     VAR_2->modes[VAR_5] = 128;
    return;
   case 129:
    if (VAR_2->modes[VAR_5] == 128)
     VAR_2->modes[VAR_5] = VAR_0;
    else
     VAR_2->modes[VAR_5] = 129;
    return;
   case 130:
    if (VAR_2->modes[VAR_5] == 128 ||
        VAR_2->modes[VAR_5] == 129)
     VAR_2->modes[VAR_5] = VAR_0;
    else
     VAR_2->modes[VAR_5] = 130;
    return;
   }
  } else if (VAR_2->modes[VAR_5] == 131)
   VAR_6 = VAR_5;

 if (VAR_6 >= VAR_1)
  return;
 VAR_2->faults[VAR_6] = VAR_3;
 VAR_2->modes[VAR_6] = VAR_4;
 if (VAR_2->nfaults == VAR_6)
  VAR_2->nfaults = VAR_6+1;
}
