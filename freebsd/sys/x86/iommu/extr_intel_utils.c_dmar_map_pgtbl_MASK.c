
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
struct sf_buf {int dummy; } ;
struct TYPE_5__ {int pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct sf_buf* FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (struct sf_buf*) ;
 TYPE_1__* FUNC_9 (int ,int ) ;

void *
FUNC_10(vm_object_t VAR_5, vm_pindex_t VAR_6, int VAR_7,
    struct sf_buf **VAR_8)
{
 vm_page_t VAR_9;
 bool VAR_10;

 if ((VAR_7 & VAR_1) == 0)
  FUNC_1(VAR_5);
 VAR_9 = FUNC_9(VAR_5, VAR_6);
 if (VAR_9 == ((void*)0) && (VAR_7 & VAR_0) != 0) {
  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7 | VAR_1);
  VAR_10 = 1;
 } else
  VAR_10 = 0;
 if (VAR_9 == ((void*)0)) {
  if ((VAR_7 & VAR_1) == 0)
   FUNC_2(VAR_5);
  return (((void*)0));
 }

 if ((VAR_7 & VAR_2) != 0)
  FUNC_2(VAR_5);
 FUNC_5();
 *VAR_8 = FUNC_7(VAR_9, VAR_3 | ((VAR_7 & VAR_2)
     == 0 ? VAR_4 : 0));
 if (*VAR_8 == ((void*)0)) {
  FUNC_6();
  if (VAR_10) {
   FUNC_0(VAR_5);
   FUNC_4(VAR_5, VAR_9->pindex, VAR_7 | VAR_1);
  }
  if ((VAR_7 & VAR_1) == 0)
   FUNC_2(VAR_5);
  return (((void*)0));
 }
 if ((VAR_7 & (VAR_2 | VAR_1)) ==
     (VAR_2 | VAR_1))
  FUNC_1(VAR_5);
 else if ((VAR_7 & (VAR_2 | VAR_1)) == 0)
  FUNC_2(VAR_5);
 return ((void *)FUNC_8(*VAR_8));
}
