
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
struct buf {int b_ioflags; scalar_t__ b_error; scalar_t__ b_iocmd; int b_npages; int b_pgbefore; int b_pgafter; int b_flags; int * b_bufobj; int * b_vp; TYPE_1__** b_pages; scalar_t__ b_kvabase; scalar_t__ b_data; scalar_t__ b_bcount; scalar_t__ b_blkno; } ;
struct TYPE_18__ {int handle; } ;
struct TYPE_17__ {int oflags; scalar_t__ dirty; TYPE_2__* object; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct buf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*,char*,long,long,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,struct buf*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int*) ;

__attribute__((used)) static void
FUNC_23(struct buf *VAR_11)
{
 int VAR_12;
 vm_object_t VAR_13 = ((void*)0);





 if (VAR_11->b_ioflags & VAR_0 && VAR_11->b_error != VAR_3) {
  FUNC_10(
      "swap_pager: I/O error - %s failed; blkno %ld,"
   "size %ld, error %d\n",
      ((VAR_11->b_iocmd == VAR_1) ? "pagein" : "pageout"),
      (long)VAR_11->b_blkno,
      (long)VAR_11->b_bcount,
      VAR_11->b_error
  );
 }




 if (FUNC_4(VAR_11))
  FUNC_9((vm_offset_t)VAR_11->b_data, VAR_11->b_npages);
 else
  VAR_11->b_data = VAR_11->b_kvabase;

 if (VAR_11->b_npages) {
  VAR_13 = VAR_11->b_pages[0]->object;
  FUNC_2(VAR_13);
 }
 for (VAR_12 = 0; VAR_12 < VAR_11->b_npages; ++VAR_12) {
  vm_page_t VAR_14 = VAR_11->b_pages[VAR_12];

  VAR_14->oflags &= ~VAR_5;
  if (VAR_14->oflags & VAR_6) {
   VAR_14->oflags &= ~VAR_6;
   FUNC_22(&VAR_13->handle);
  }

  if (VAR_11->b_ioflags & VAR_0) {






   if (VAR_11->b_iocmd == VAR_1) {





    FUNC_15(VAR_14);
   } else {





    FUNC_1(VAR_14->dirty == VAR_4);
    FUNC_16(VAR_14);
    FUNC_13(VAR_14);
    FUNC_20(VAR_14);
    FUNC_18(VAR_14);
   }
  } else if (VAR_11->b_iocmd == VAR_1) {
   FUNC_0(!FUNC_7(VAR_14),
       ("swp_pager_async_iodone: page %p is mapped", VAR_14));
   FUNC_0(VAR_14->dirty == 0,
       ("swp_pager_async_iodone: page %p is dirty", VAR_14));

   FUNC_21(VAR_14);
   if (VAR_12 < VAR_11->b_pgbefore ||
       VAR_12 >= VAR_11->b_npages - VAR_11->b_pgafter)
    FUNC_17(VAR_14);
  } else {
   FUNC_0(!FUNC_8(VAR_14),
       ("swp_pager_async_iodone: page %p is not write"
       " protected", VAR_14));
   FUNC_19(VAR_14);
   FUNC_16(VAR_14);
   FUNC_14(VAR_14);
   FUNC_20(VAR_14);
   FUNC_18(VAR_14);
  }
 }





 if (VAR_13 != ((void*)0)) {
  FUNC_12(VAR_13, VAR_11->b_npages);
  FUNC_3(VAR_13);
 }






 if (VAR_11->b_vp) {
      VAR_11->b_vp = ((void*)0);
      VAR_11->b_bufobj = ((void*)0);
 }



 if (VAR_11->b_flags & VAR_2) {
  FUNC_5(&VAR_8);
  if (++VAR_7 == 1)
   FUNC_22(&VAR_7);
  FUNC_6(&VAR_8);
 }
 FUNC_11((VAR_11->b_iocmd == VAR_1) ? VAR_9 : VAR_10, VAR_11);
}
