
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int flags; int oflags; int aflags; scalar_t__ queue; scalar_t__ ref_count; scalar_t__ valid; int * object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;

bool
FUNC_16(vm_page_t VAR_12)
{





 FUNC_4();
 if ((VAR_12->oflags & VAR_9) == 0) {
  FUNC_0(!FUNC_7(VAR_12),
      ("vm_page_free_prep: freeing mapped page %p", VAR_12));
  FUNC_0((VAR_12->aflags & (VAR_1 | VAR_2)) == 0,
      ("vm_page_free_prep: mapping flags set in page %p", VAR_12));
 } else {
  FUNC_0(VAR_12->queue == VAR_7,
      ("vm_page_free_prep: unmanaged page %p is queued", VAR_12));
 }
 FUNC_2(VAR_11);

 if (FUNC_11(VAR_12))
  FUNC_5("vm_page_free_prep: freeing shared busy page %p", VAR_12);

 if (VAR_12->object != ((void*)0)) {
  FUNC_10(VAR_12);





  FUNC_0((VAR_12->flags & VAR_3) != 0 ||
      VAR_12->ref_count == VAR_10,
      ("vm_page_free_prep: page %p has unexpected ref_count %u",
      VAR_12, VAR_12->ref_count));
  VAR_12->object = ((void*)0);
  VAR_12->ref_count -= VAR_10;
 }

 if (FUNC_13(VAR_12))
  FUNC_14(VAR_12);





 if ((VAR_12->flags & VAR_3) != 0) {
  FUNC_0(VAR_12->ref_count == 1,
      ("fictitious page %p is referenced", VAR_12));
  FUNC_0(VAR_12->queue == VAR_7,
      ("fictitious page %p is queued", VAR_12));
  return (0);
 }






 if ((VAR_12->oflags & VAR_9) == 0)
  FUNC_9(VAR_12);

 VAR_12->valid = 0;
 FUNC_12(VAR_12);

 if (VAR_12->ref_count != 0)
  FUNC_5("vm_page_free_prep: page %p has references", VAR_12);




 if (FUNC_6(VAR_12) != VAR_8)
  FUNC_8(VAR_12, VAR_8);
 return (1);
}
