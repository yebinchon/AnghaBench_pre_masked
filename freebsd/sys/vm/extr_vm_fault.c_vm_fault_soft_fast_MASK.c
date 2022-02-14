
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;


typedef int vm_prot_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct faultstate {TYPE_9__* first_object; TYPE_15__* entry; TYPE_14__* map; int first_pindex; int * vp; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_28__ {int flags; } ;
struct TYPE_27__ {int flags; size_t psind; } ;
struct TYPE_25__ {int ru_minflt; } ;
struct TYPE_26__ {TYPE_1__ td_ru; } ;
struct TYPE_24__ {int start; scalar_t__ end; } ;
struct TYPE_23__ {int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_11 ;
 TYPE_20__* VAR_12 ;
 int* VAR_13 ;
 int FUNC_3 (int ,int,TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_15__*,TYPE_2__*,int,int,int,int) ;
 int FUNC_8 (struct faultstate*,int,int ,int ,int) ;
 int FUNC_9 (TYPE_14__*,TYPE_15__*) ;
 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int,TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_2__* FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_18(struct faultstate *VAR_14, vm_offset_t VAR_15, vm_prot_t VAR_16,
    int VAR_17, int VAR_18, boolean_t VAR_19, vm_page_t *VAR_20)
{
 vm_page_t VAR_21, VAR_22;






 int VAR_23, VAR_24;

 FUNC_0(VAR_14->vp == ((void*)0));
 FUNC_10(VAR_14->first_object);
 VAR_21 = FUNC_14(VAR_14->first_object, VAR_14->first_pindex);

 if (VAR_21 == ((void*)0) || ((VAR_16 & VAR_11) != 0 &&
     FUNC_13(VAR_21)) || !FUNC_12(VAR_21)) {
  VAR_24 = VAR_0;
  goto out;
 }
 VAR_22 = VAR_21;
 VAR_23 = 0;
 VAR_24 = FUNC_3(VAR_14->map->pmap, VAR_15, VAR_22, VAR_16, VAR_17 |
     VAR_6 | (VAR_19 ? VAR_7 : 0), VAR_23);
 if (VAR_24 != VAR_1)
  goto out;
 if (VAR_20 != ((void*)0)) {
  *VAR_20 = VAR_21;
  FUNC_16(VAR_21);
 }
 FUNC_7(VAR_14->entry, VAR_21, VAR_16, VAR_17, VAR_18, 0);
 if (VAR_23 == 0 && !VAR_19)
  FUNC_8(VAR_14, VAR_15, VAR_3, VAR_4, 1);
 FUNC_1(VAR_14->first_object);
 FUNC_9(VAR_14->map, VAR_14->entry);
 VAR_12->td_ru.ru_minflt++;

out:
 FUNC_11(VAR_14->first_object);
 return (VAR_24);
}
