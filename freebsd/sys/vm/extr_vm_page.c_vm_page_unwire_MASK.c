
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ uint8_t ;
typedef int u_int ;
struct TYPE_10__ {int oflags; scalar_t__ ref_count; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int) ;

void
FUNC_11(vm_page_t VAR_3, uint8_t VAR_4)
{
 u_int VAR_5;
 bool VAR_6;

 FUNC_0(VAR_4 < VAR_1,
     ("vm_page_unwire: invalid queue %u request for page %p", VAR_4, VAR_3));

 if ((VAR_3->oflags & VAR_2) != 0) {
  if (FUNC_9(VAR_3) && VAR_3->ref_count == 0)
   FUNC_3(VAR_3);
  return;
 }







 VAR_5 = VAR_3->ref_count;
 VAR_6 = 0;
 do {
  FUNC_0(FUNC_1(VAR_5) > 0,
      ("vm_page_unwire: wire count underflow for page %p", VAR_3));
  if (!VAR_6 && FUNC_1(VAR_5) == 1) {
   FUNC_4(VAR_3);
   VAR_6 = 1;
   if (VAR_4 == VAR_0 && FUNC_6(VAR_3) == VAR_0)
    FUNC_7(VAR_3);
   else
    FUNC_5(VAR_3, VAR_4);
  }
 } while (!FUNC_2(&VAR_3->ref_count, &VAR_5, VAR_5 - 1));






 if (VAR_6)
  FUNC_8(VAR_3);

 if (FUNC_1(VAR_5) == 1) {
  FUNC_10(1);
  if (VAR_5 == 1)
   FUNC_3(VAR_3);
 }
}
