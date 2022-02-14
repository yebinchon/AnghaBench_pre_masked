
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef size_t uint8_t ;
struct vm_pagequeue {int dummy; } ;
struct TYPE_6__ {struct vm_pagequeue* vmd_pagequeues; } ;
struct TYPE_5__ {int queue; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static struct vm_pagequeue *
FUNC_2(vm_page_t VAR_1)
{

 uint8_t VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1->queue)) == VAR_0)
  return (((void*)0));
 return (&FUNC_1(VAR_1)->vmd_pagequeues[VAR_2]);
}
