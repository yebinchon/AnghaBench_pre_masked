
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ISO_SUSP_ATTRIBUTES {int dummy; } ;
struct TYPE_17__ {scalar_t__ rootNode; TYPE_3__* rr_moved_dir; } ;
typedef TYPE_2__ iso9660_disk ;
struct TYPE_18__ {int type; scalar_t__ parent; int head; int * rr_real_parent; int * rr_relocated; TYPE_1__* isoDirRecord; TYPE_4__* node; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_19__ {int name; int * inode; } ;
struct TYPE_16__ {scalar_t__* name_len; int name; } ;


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
 int FUNC_0 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ISO_SUSP_ATTRIBUTES*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct ISO_SUSP_ATTRIBUTES*,TYPE_3__*) ;
 int FUNC_5 (struct ISO_SUSP_ATTRIBUTES*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int,int ,int ,int ) ;
 int FUNC_9 (struct ISO_SUSP_ATTRIBUTES*,TYPE_4__*) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_10 (int ,int ,char*,int ) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (int ) ;

int
FUNC_13(iso9660_disk *VAR_14, cd9660node *VAR_15,
    cd9660node *VAR_16, cd9660node *VAR_17)
{
 struct ISO_SUSP_ATTRIBUTES *VAR_18 = ((void*)0);

 FUNC_1(VAR_15 != ((void*)0));

 if (VAR_15->type & VAR_0) {




  if (VAR_15->parent == VAR_14->rootNode) {
   FUNC_8(VAR_15, 1, VAR_10,
    VAR_9, VAR_11);
  }
  if (VAR_16 != ((void*)0) && VAR_16->node != ((void*)0) &&
      VAR_16->node->inode != ((void*)0)) {

   VAR_18 = FUNC_10(VAR_12,
    VAR_5, "PX", VAR_8);
   FUNC_9(VAR_18, VAR_16->node);
   FUNC_0(&VAR_15->head, VAR_18, VAR_13);
  }
 } else if (VAR_15->type & VAR_1) {
  if (VAR_17 != ((void*)0) && VAR_17->node != ((void*)0) &&
      VAR_17->node->inode != ((void*)0)) {

   VAR_18 = FUNC_10(VAR_12,
    VAR_5, "PX", VAR_8);
   FUNC_9(VAR_18, VAR_17->node);
   FUNC_0(&VAR_15->head, VAR_18, VAR_13);
  }

  if (VAR_16 != ((void*)0) && VAR_16->rr_real_parent != ((void*)0)) {
   VAR_18 = FUNC_10(VAR_12,
       VAR_4, "PL", VAR_7);
   FUNC_4(VAR_18,VAR_15);
   FUNC_0(&VAR_15->head, VAR_18, VAR_13);
  }
 } else {
  FUNC_7(VAR_15);
  if (VAR_15 == VAR_14->rr_moved_dir) {
   FUNC_6(VAR_15, VAR_2);
  }
  else if ((VAR_15->node != ((void*)0)) &&
   ((FUNC_12(VAR_15->node->name) !=
       (uint8_t)VAR_15->isoDirRecord->name_len[0]) ||
   (FUNC_11(VAR_15->node->name,VAR_15->isoDirRecord->name,
    (uint8_t)VAR_15->isoDirRecord->name_len[0]) != 0))) {
   FUNC_3(VAR_15);
  }






  if (VAR_15->rr_relocated != ((void*)0)) {
   VAR_18 = FUNC_10(VAR_12,
    VAR_3, "CL", VAR_8);
   FUNC_2(VAR_18, VAR_15);
   FUNC_0(&VAR_15->head, VAR_18, VAR_13);
  }


  if (VAR_15->rr_real_parent != ((void*)0)) {
   VAR_18 = FUNC_10(VAR_12,
    VAR_6, "RE", VAR_8);
   FUNC_5(VAR_18,VAR_15);
   FUNC_0(&VAR_15->head, VAR_18, VAR_13);
  }
 }
 return 1;
}
