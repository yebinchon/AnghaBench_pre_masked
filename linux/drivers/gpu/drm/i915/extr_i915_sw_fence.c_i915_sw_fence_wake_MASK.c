
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int private; int entry; } ;
typedef TYPE_1__ wait_queue_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(wait_queue_entry_t *VAR_1, unsigned VAR_2, int VAR_3, void *VAR_4)
{
 FUNC_1(VAR_1->private, VAR_3);

 FUNC_3(&VAR_1->entry);
 FUNC_0(VAR_1->private, VAR_4);

 if (VAR_1->flags & VAR_0)
  FUNC_2(VAR_1);
 return 0;
}
