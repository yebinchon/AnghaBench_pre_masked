
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int uint8_t ;
struct TYPE_4__ {int queue; int busy_lock; int aflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(vm_page_t VAR_2, int VAR_3, uint8_t VAR_4)
{

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->flags = VAR_0;
 VAR_2->aflags = VAR_4;
 VAR_2->busy_lock = VAR_1;
 VAR_2->queue = VAR_3;
}
