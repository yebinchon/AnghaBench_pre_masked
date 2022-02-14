
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ISO_SUSP_ATTRIBUTES {int dummy; } ;
struct TYPE_11__ {int head; TYPE_4__* node; int cn_children; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_12__ {TYPE_2__* inode; } ;
struct TYPE_9__ {int st_mode; } ;
struct TYPE_10__ {TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct ISO_SUSP_ATTRIBUTES*,TYPE_4__*) ;
 int FUNC_7 (struct ISO_SUSP_ATTRIBUTES*,TYPE_4__*) ;
 int FUNC_8 (struct ISO_SUSP_ATTRIBUTES*,TYPE_4__*) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_9 (int ,int ,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(cd9660node *VAR_6)
{
 struct ISO_SUSP_ATTRIBUTES *VAR_7;







 if ((VAR_6->node != ((void*)0)) && (VAR_6->node->inode != ((void*)0))) {

  VAR_7 = FUNC_9(VAR_4,
   VAR_1, "PX", VAR_3);
  FUNC_7(VAR_7, VAR_6->node);

  FUNC_4(&VAR_6->head, VAR_7, VAR_5);


  VAR_7 = FUNC_9(VAR_4,
   VAR_2, "TF", VAR_3);
  FUNC_8(VAR_7, VAR_6->node);
  FUNC_4(&VAR_6->head, VAR_7, VAR_5);



  if (FUNC_3(&VAR_6->cn_children) &&
      VAR_6->node->inode != ((void*)0) &&
      FUNC_2(VAR_6->node->inode->st.st_mode))
   FUNC_5(VAR_6);


  if (VAR_6->node->inode != ((void*)0) &&
      ((FUNC_1(VAR_6->node->inode->st.st_mode) ||
       FUNC_0(VAR_6->node->inode->st.st_mode)))) {
   VAR_7 =
       FUNC_9(VAR_4,
    VAR_0, "PN",
    VAR_3);
   FUNC_6(VAR_7, VAR_6->node);
   FUNC_4(&VAR_6->head, VAR_7, VAR_5);
  }
 }
}
