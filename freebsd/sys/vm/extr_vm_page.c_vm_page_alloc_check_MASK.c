
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {scalar_t__ queue; int aflags; scalar_t__ ref_count; scalar_t__ dirty; scalar_t__ valid; int * object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(vm_page_t VAR_3)
{

 FUNC_0(VAR_3->object == ((void*)0), ("page %p has object", VAR_3));
 FUNC_0(VAR_3->queue == VAR_1 && (VAR_3->aflags & VAR_0) == 0,
     ("page %p has unexpected queue %d, flags %#x",
     VAR_3, VAR_3->queue, (VAR_3->aflags & VAR_0)));
 FUNC_0(VAR_3->ref_count == 0, ("page %p has references", VAR_3));
 FUNC_0(!FUNC_2(VAR_3), ("page %p is busy", VAR_3));
 FUNC_0(VAR_3->dirty == 0, ("page %p is dirty", VAR_3));
 FUNC_0(FUNC_1(VAR_3) == VAR_2,
     ("page %p has unexpected memattr %d",
     VAR_3, FUNC_1(VAR_3)));
 FUNC_0(VAR_3->valid == 0, ("free page %p is valid", VAR_3));
}
