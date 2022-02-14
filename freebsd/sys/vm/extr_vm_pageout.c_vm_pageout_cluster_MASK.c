
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_20__ {int size; } ;
struct TYPE_19__ {int pindex; scalar_t__ dirty; TYPE_2__* object; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__**,int,int ,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_13(vm_page_t VAR_2)
{
 vm_object_t VAR_3;
 vm_page_t VAR_4[2 * VAR_1], VAR_5, VAR_6, VAR_7;
 vm_pindex_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_3 = VAR_2->object;
 FUNC_0(VAR_3);
 VAR_8 = VAR_2->pindex;

 FUNC_1(VAR_2);

 VAR_4[VAR_1] = VAR_6 = VAR_7 = VAR_2;
 VAR_12 = 1;
 VAR_11 = VAR_1;
 VAR_9 = 1;
 VAR_10 = 1;
more:
 while (VAR_9 != 0 && VAR_12 < VAR_1) {
  if (VAR_9 > VAR_8) {
   VAR_9 = 0;
   break;
  }
  if ((VAR_5 = FUNC_5(VAR_6)) == ((void*)0) ||
      FUNC_8(VAR_5) == 0) {
   VAR_9 = 0;
   break;
  }
  if (FUNC_10(VAR_5)) {
   VAR_9 = 0;
   FUNC_11(VAR_5);
   break;
  }
  FUNC_6(VAR_5);
  if (VAR_5->dirty == 0) {
   VAR_9 = 0;
   FUNC_11(VAR_5);
   break;
  }
  FUNC_3(VAR_5);
  if (!FUNC_2(VAR_5) || !FUNC_7(VAR_5)) {
   FUNC_9(VAR_5);
   FUNC_11(VAR_5);
   VAR_9 = 0;
   break;
  }
  FUNC_9(VAR_5);
  VAR_4[--VAR_11] = VAR_6 = VAR_5;
  ++VAR_12;
  ++VAR_9;





  if ((VAR_8 - (VAR_9 - 1)) % VAR_1 == 0)
   break;
 }
 while (VAR_12 < VAR_1 &&
     VAR_8 + VAR_10 < VAR_3->size) {
  if ((VAR_5 = FUNC_4(VAR_7)) == ((void*)0) ||
      FUNC_8(VAR_5) == 0)
   break;
  if (FUNC_10(VAR_5)) {
   FUNC_11(VAR_5);
   break;
  }
  FUNC_6(VAR_5);
  if (VAR_5->dirty == 0) {
   FUNC_11(VAR_5);
   break;
  }
  FUNC_3(VAR_5);
  if (!FUNC_2(VAR_5) || !FUNC_7(VAR_5)) {
   FUNC_9(VAR_5);
   FUNC_11(VAR_5);
   break;
  }
  FUNC_9(VAR_5);
  VAR_4[VAR_11 + VAR_12] = VAR_7 = VAR_5;
  ++VAR_12;
  ++VAR_10;
 }






 if (VAR_9 != 0 && VAR_12 < VAR_1)
  goto more;

 return (FUNC_12(&VAR_4[VAR_11], VAR_12,
     VAR_0, 0, ((void*)0), ((void*)0)));
}
