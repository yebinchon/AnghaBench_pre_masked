
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tags; } ;
struct skd_device {struct gendisk* disk; TYPE_1__ tag_set; int * queue; } ;
struct gendisk {int flags; int * queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*) ;

__attribute__((used)) static void FUNC_4(struct skd_device *VAR_1)
{
 struct gendisk *VAR_2 = VAR_1->disk;

 if (VAR_2 && (VAR_2->flags & VAR_0))
  FUNC_2(VAR_2);

 if (VAR_1->queue) {
  FUNC_0(VAR_1->queue);
  VAR_1->queue = ((void*)0);
  if (VAR_2)
   VAR_2->queue = ((void*)0);
 }

 if (VAR_1->tag_set.tags)
  FUNC_1(&VAR_1->tag_set);

 FUNC_3(VAR_2);
 VAR_1->disk = ((void*)0);
}
