
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int pri; } ;
typedef TYPE_1__ collpri_t ;
struct TYPE_9__ {int wc; int * ref; } ;
struct TYPE_8__ {int * ref; } ;
struct TYPE_7__ {int * ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_10 ;
 int* VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int ,int,int ) ;

void
FUNC_2(void)
{
 int VAR_13;
 int32_t VAR_14;
 int32_t VAR_15;
 collpri_t *VAR_16;


 VAR_14 = VAR_10;

 switch (VAR_6) {
 case 132:
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (((VAR_15 = VAR_11[VAR_13]) < 0) ||
       ((VAR_16 = FUNC_0(VAR_15)) == ((void*)0)) ||
       (VAR_16->pri == -1)) {

    FUNC_1(VAR_4->ref[VAR_13], VAR_14, VAR_3);
   } else {
    FUNC_1(VAR_4->ref[VAR_13], VAR_15, VAR_2);
   }
   VAR_11[VAR_13] = -1;
  }


  VAR_8 = VAR_4->wc + 1;
  VAR_4 = ((void*)0);
  break;

 case 130:

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_9[VAR_13] = VAR_11[VAR_13];
   VAR_11[VAR_13] = -1;
  }
  break;

 case 131:
  if (VAR_5 == ((void*)0)) {
   VAR_0;
  } else {
   for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {

    if (((VAR_15 = VAR_11[VAR_13]) < 0) ||
        ((VAR_16 = FUNC_0(VAR_15)) == ((void*)0)) ||
        (VAR_16->pri == -1)) {
     FUNC_1(VAR_5->ref[VAR_13], VAR_14,
         VAR_3);
    } else {
     FUNC_1(VAR_5->ref[VAR_13], VAR_15, VAR_2);
    }
    VAR_11[VAR_13] = -1;
   }
  }
  break;

 case 128:
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (((VAR_15 = VAR_11[VAR_13]) < 0) ||
       ((VAR_16 = FUNC_0(VAR_15)) == ((void*)0)) ||
       (VAR_16->pri == -1)) {
    FUNC_1(VAR_12[VAR_13], -1, VAR_3);
   } else {
    FUNC_1(VAR_12[VAR_13], VAR_15, VAR_2);
   }
   VAR_11[VAR_13] = -1;
  }
  break;

 case 129:
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (((VAR_15 = VAR_11[VAR_13]) < 0) ||
       ((VAR_16 = FUNC_0(VAR_15)) == ((void*)0)) ||
       (VAR_16->pri == -1)) {
    FUNC_1(VAR_7->ref[VAR_13], VAR_14, VAR_3);
   } else {
    FUNC_1(VAR_7->ref[VAR_13], VAR_15, VAR_2);
   }
   VAR_11[VAR_13] = -1;
  }
  break;

 default:
  VAR_0;
 }

 VAR_10++;
}
