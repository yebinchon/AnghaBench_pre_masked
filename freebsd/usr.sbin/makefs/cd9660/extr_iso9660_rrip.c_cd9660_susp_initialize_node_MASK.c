
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ISO_SUSP_ATTRIBUTES {int dummy; } ;
struct TYPE_6__ {scalar_t__ rootNode; } ;
typedef TYPE_1__ iso9660_disk ;
struct TYPE_7__ {int type; scalar_t__ parent; int head; } ;
typedef TYPE_2__ cd9660node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 int FUNC_1 (struct ISO_SUSP_ATTRIBUTES*,TYPE_2__*) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_2 (int ,int ,char*,int ) ;
 int VAR_4 ;

int
FUNC_3(iso9660_disk *VAR_5, cd9660node *VAR_6)
{
 struct ISO_SUSP_ATTRIBUTES *VAR_7;
 if (VAR_6->type & VAR_0) {
  if (VAR_6->parent == VAR_5->rootNode) {
   VAR_7 = FUNC_2(VAR_3,
    VAR_1, "SP", VAR_2);
   FUNC_1(VAR_7, VAR_6);


   FUNC_0(&VAR_6->head, VAR_7, VAR_4);
  }
 }
 return 1;
}
