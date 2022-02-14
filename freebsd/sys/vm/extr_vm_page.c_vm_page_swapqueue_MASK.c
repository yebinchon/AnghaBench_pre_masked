
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef TYPE_1__* vm_page_t ;
typedef size_t uint8_t ;
struct vm_pagequeue {int pq_pl; } ;
struct TYPE_19__ {struct vm_pagequeue* vmd_pagequeues; } ;
struct TYPE_18__ {size_t queue; int aflags; } ;
struct TYPE_17__ {int q; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_10__ VAR_4 ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,size_t) ;
 int FUNC_11 (TYPE_1__*,size_t,size_t,int ,int ) ;
 int FUNC_12 (struct vm_pagequeue*) ;
 TYPE_2__* FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct vm_pagequeue*) ;
 int FUNC_15 (struct vm_pagequeue*) ;

void
FUNC_16(vm_page_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct vm_pagequeue *VAR_8;
 vm_page_t VAR_9;
 bool VAR_10;

 FUNC_0(VAR_6 < VAR_3 && VAR_7 < VAR_3 && VAR_6 != VAR_7,
     ("vm_page_swapqueue: invalid queues (%d, %d)", VAR_6, VAR_7));
 FUNC_9(VAR_5);

 VAR_8 = &FUNC_13(VAR_5)->vmd_pagequeues[VAR_6];
 FUNC_14(VAR_8);






 if (FUNC_5(VAR_5->queue != VAR_6)) {
  FUNC_15(VAR_8);
  return;
 }







 if (FUNC_6((VAR_5->aflags & VAR_1) != 0)) {
  VAR_9 = FUNC_3(VAR_5, VAR_4.q);
  FUNC_4(&VAR_8->pq_pl, VAR_5, VAR_4.q);
  FUNC_7(VAR_5, VAR_1);
  VAR_10 = 1;
 } else {
  VAR_10 = 0;
 }





 if (FUNC_5(!FUNC_11(VAR_5, VAR_6, VAR_7, VAR_0,
     VAR_2))) {
  if (VAR_10) {
   FUNC_8(VAR_5, VAR_1);
   if (VAR_9 != ((void*)0))
    FUNC_1(VAR_9, VAR_5, VAR_4.q);
   else
    FUNC_2(&VAR_8->pq_pl, VAR_5, VAR_4.q);
  }
  FUNC_15(VAR_8);
  return;
 }
 FUNC_12(VAR_8);
 FUNC_15(VAR_8);
 FUNC_10(VAR_5, VAR_7);
}
