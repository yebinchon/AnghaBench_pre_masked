
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ,int,int,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

vm_page_t
FUNC_6(vm_object_t VAR_15, vm_pindex_t VAR_16, int VAR_17)
{
 vm_page_t VAR_18;
 int VAR_19, VAR_20;

 VAR_19 = (VAR_17 & VAR_3) != 0 ? VAR_11 : 0;
 VAR_20 = VAR_19 | VAR_6 | VAR_9 | VAR_7 |
     ((VAR_17 & VAR_2) != 0 ? VAR_10 :
     VAR_8);
 for (;;) {
  if ((VAR_17 & VAR_1) == 0)
   FUNC_0(VAR_15);
  VAR_18 = FUNC_5(VAR_15, VAR_16);
  if ((VAR_17 & VAR_0) != 0 || VAR_18 != ((void*)0)) {
   if ((VAR_17 & VAR_1) == 0)
    FUNC_1(VAR_15);
   break;
  }
  VAR_18 = FUNC_4(VAR_15, VAR_16, VAR_20, 1, 0,
      VAR_13, VAR_4, 0, VAR_12);
  if ((VAR_17 & VAR_1) == 0)
   FUNC_1(VAR_15);
  if (VAR_18 != ((void*)0)) {
   if (VAR_19 && (VAR_18->flags & VAR_5) == 0)
    FUNC_3(VAR_18);
   FUNC_2(&VAR_14, 1);
   break;
  }
  if ((VAR_17 & VAR_2) == 0)
   break;
 }
 return (VAR_18);
}
