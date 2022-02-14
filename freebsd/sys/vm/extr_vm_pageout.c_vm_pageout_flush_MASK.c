
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int boolean_t ;
struct TYPE_21__ {int type; } ;
struct TYPE_20__ {int aflags; TYPE_2__* object; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;






 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__**,int,int,int*) ;

int
FUNC_16(vm_page_t *VAR_4, int VAR_5, int VAR_6, int VAR_7, int *VAR_8,
    boolean_t *VAR_9)
{
 vm_object_t VAR_10 = VAR_4[0]->object;
 int VAR_11[VAR_5];
 int VAR_12 = 0;
 int VAR_13, VAR_14;

 FUNC_1(VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  FUNC_0(FUNC_6(VAR_4[VAR_13]),
      ("vm_pageout_flush: partially invalid page %p index %d/%d",
   VAR_4[VAR_13], VAR_13, VAR_5));
  FUNC_0((VAR_4[VAR_13]->aflags & VAR_2) == 0,
      ("vm_pageout_flush: writeable page %p", VAR_4[VAR_13]));
  FUNC_7(VAR_4[VAR_13]);
 }
 FUNC_3(VAR_10, VAR_5);

 FUNC_15(VAR_10, VAR_4, VAR_5, VAR_6, VAR_11);

 VAR_14 = VAR_5 - VAR_7;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  vm_page_t VAR_15 = VAR_4[VAR_13];

  FUNC_0(VAR_11[VAR_13] == 128 ||
      !FUNC_2(VAR_15),
      ("vm_pageout_flush: page %p is not write protected", VAR_15));
  switch (VAR_11[VAR_13]) {
  case 129:
   FUNC_10(VAR_15);
   if (FUNC_9(VAR_15))
    FUNC_8(VAR_15);
   FUNC_13(VAR_15);

  case 128:
   VAR_12++;
   break;
  case 132:






   FUNC_12(VAR_15);
   FUNC_10(VAR_15);
   if (FUNC_9(VAR_15))
    FUNC_8(VAR_15);
   FUNC_13(VAR_15);
   break;
  case 131:
  case 130:
   FUNC_10(VAR_15);
   if (VAR_10->type == VAR_1 &&
       VAR_11[VAR_13] == 130) {
    FUNC_14(VAR_15);
    VAR_12++;
   } else
    FUNC_5(VAR_15);
   FUNC_13(VAR_15);
   if (VAR_9 != ((void*)0) && VAR_13 >= VAR_7 && VAR_13 - VAR_7 < VAR_14)
    *VAR_9 = VAR_3;
   break;
  case 133:
   if (VAR_13 >= VAR_7 && VAR_13 - VAR_7 < VAR_14)
    VAR_14 = VAR_13 - VAR_7;
   break;
  }







  if (VAR_11[VAR_13] != 128) {
   FUNC_4(VAR_10);
   FUNC_11(VAR_15);
  }
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_14;
 return (VAR_12);
}
