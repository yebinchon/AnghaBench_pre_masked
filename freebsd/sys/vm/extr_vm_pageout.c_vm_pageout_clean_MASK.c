
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vnode {scalar_t__ v_type; TYPE_2__* v_object; int v_mount; } ;
struct mount {int dummy; } ;
struct TYPE_19__ {scalar_t__ type; struct vnode* handle; } ;
struct TYPE_18__ {scalar_t__ pindex; scalar_t__ dirty; TYPE_2__* object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (struct vnode*,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct mount*) ;
 scalar_t__ FUNC_18 (struct vnode*,struct mount**,int ) ;
 int FUNC_19 (struct vnode*) ;

__attribute__((used)) static int
FUNC_20(vm_page_t VAR_13, int *VAR_14)
{
 struct vnode *VAR_15;
 struct mount *VAR_16;
 vm_object_t VAR_17;
 vm_pindex_t VAR_18;
 int VAR_19, VAR_20;

 FUNC_8(VAR_13);
 VAR_17 = VAR_13->object;
 FUNC_2(VAR_17);
 VAR_19 = 0;
 VAR_15 = ((void*)0);
 VAR_16 = ((void*)0);
 if (VAR_17->type == VAR_9) {
  FUNC_14(VAR_13);
  FUNC_15(VAR_13);
  VAR_15 = VAR_17->handle;
  if (VAR_15->v_type == VAR_10 &&
      FUNC_18(VAR_15, &VAR_16, VAR_11) != 0) {
   VAR_16 = ((void*)0);
   VAR_19 = VAR_1;
   goto unlock_all;
  }
  FUNC_0(VAR_16 != ((void*)0),
      ("vp %p with NULL v_mount", VAR_15));
  FUNC_7(VAR_17);
  VAR_18 = VAR_13->pindex;
  FUNC_4(VAR_17);
  VAR_20 = FUNC_1(VAR_15->v_mount) ?
      VAR_6 : VAR_5;
  if (FUNC_5(VAR_15, VAR_20 | VAR_7, VAR_12)) {
   VAR_15 = ((void*)0);
   VAR_19 = VAR_1;
   goto unlock_mp;
  }
  FUNC_3(VAR_17);





  if (VAR_15->v_object != VAR_17) {
   VAR_19 = VAR_3;
   goto unlock_all;
  }
  FUNC_10(VAR_13);
  if (!FUNC_9(VAR_13) || VAR_13->object != VAR_17 ||
      VAR_13->pindex != VAR_18 || VAR_13->dirty == 0) {
   FUNC_14(VAR_13);
   VAR_19 = VAR_4;
   goto unlock_all;
  }





  if (FUNC_13(VAR_13) == 0) {
   FUNC_14(VAR_13);
   VAR_19 = VAR_0;
   goto unlock_all;
  }
 }




 if (!FUNC_12(VAR_13)) {
  FUNC_15(VAR_13);
  FUNC_14(VAR_13);
  VAR_19 = VAR_0;
  goto unlock_all;
 }
 FUNC_14(VAR_13);







 if ((*VAR_14 = FUNC_16(VAR_13)) == 0)
  VAR_19 = VAR_2;

unlock_all:
 FUNC_4(VAR_17);

unlock_mp:
 FUNC_11(VAR_13, VAR_8);
 if (VAR_16 != ((void*)0)) {
  if (VAR_15 != ((void*)0))
   FUNC_19(VAR_15);
  FUNC_6(VAR_17);
  FUNC_17(VAR_16);
 }

 return (VAR_19);
}
