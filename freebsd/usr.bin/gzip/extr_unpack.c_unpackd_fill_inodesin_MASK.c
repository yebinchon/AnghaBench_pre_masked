
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int treelevels; int* inodesin; int* symbolsin; } ;
typedef TYPE_1__ unpack_descriptor_t ;



__attribute__((used)) static void
FUNC_0(const unpack_descriptor_t *VAR_0, int VAR_1)
{






 if (VAR_1 < VAR_0->treelevels) {
  FUNC_0(VAR_0, VAR_1 + 1);
  VAR_0->inodesin[VAR_1] = (VAR_0->inodesin[VAR_1 + 1] +
      VAR_0->symbolsin[VAR_1 + 1]) / 2;
 } else
  VAR_0->inodesin[VAR_1] = 0;
}
