
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef size_t uint8_t ;
struct vm_pagequeue {int dummy; } ;
struct vm_batchqueue {int dummy; } ;
struct TYPE_10__ {struct vm_pagequeue* vmd_pagequeues; } ;
struct TYPE_9__ {int oflags; size_t queue; int aflags; int * object; } ;


 struct vm_batchqueue* FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int ** VAR_4 ;
 scalar_t__ FUNC_6 (struct vm_batchqueue*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_4__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct vm_pagequeue*) ;
 int FUNC_10 (struct vm_pagequeue*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct vm_pagequeue*,struct vm_batchqueue*,size_t) ;
 int FUNC_13 (struct vm_pagequeue*,TYPE_1__*) ;

void
FUNC_14(vm_page_t VAR_5, uint8_t VAR_6)
{
 struct vm_batchqueue *VAR_7;
 struct vm_pagequeue *VAR_8;
 int VAR_9;

 FUNC_1((VAR_5->oflags & VAR_3) == 0,
     ("page %p is unmanaged", VAR_5));
 FUNC_1(FUNC_5(FUNC_7(VAR_5)) || VAR_5->object == ((void*)0),
     ("missing synchronization for page %p", VAR_5));
 FUNC_1(VAR_6 < VAR_1, ("invalid queue %d", VAR_6));

 VAR_9 = FUNC_11(VAR_5);
 VAR_8 = &FUNC_8(VAR_5)->vmd_pagequeues[VAR_6];

 FUNC_3();
 VAR_7 = FUNC_0(VAR_4[VAR_9][VAR_6]);
 if (FUNC_6(VAR_7, VAR_5)) {
  FUNC_4();
  return;
 }
 FUNC_4();
 FUNC_9(VAR_8);
 FUNC_3();
 VAR_7 = FUNC_0(VAR_4[VAR_9][VAR_6]);
 FUNC_12(VAR_8, VAR_7, VAR_6);







 if (FUNC_2(VAR_5->queue == VAR_6))
  FUNC_13(VAR_8, VAR_5);
 else {
  FUNC_1(VAR_5->queue == VAR_2,
      ("invalid queue transition for page %p", VAR_5));
  FUNC_1((VAR_5->aflags & VAR_0) == 0,
      ("page %p is enqueued with invalid queue index", VAR_5));
 }
 FUNC_10(VAR_8);
 FUNC_4();
}
