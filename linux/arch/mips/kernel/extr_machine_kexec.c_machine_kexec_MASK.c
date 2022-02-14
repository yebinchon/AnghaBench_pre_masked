
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {unsigned long start; scalar_t__ type; unsigned long head; int control_code_page; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned long* FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,...) ;
 long VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void
FUNC_11(struct kimage *VAR_14)
{
 unsigned long VAR_15;
 unsigned long *VAR_16;

 VAR_10 =
   (unsigned long)FUNC_5(VAR_14->control_code_page);

 VAR_9 =
  (unsigned long) FUNC_6(VAR_14->start);

 if (VAR_14->type == VAR_4) {
  VAR_6 =
   (unsigned long) FUNC_6(VAR_14->head & VAR_5);
 } else {
  VAR_6 = (unsigned long)&VAR_14->head;
 }

 FUNC_4((void*)VAR_10, VAR_11,
        VAR_12);







 for (VAR_16 = &VAR_14->head; (VAR_15 = *VAR_16) && !(VAR_15 &VAR_1);
      VAR_16 = (VAR_15 & VAR_2) ?
        FUNC_6(VAR_15 & VAR_5) : VAR_16 + 1) {
  if (*VAR_16 & VAR_3 || *VAR_16 & VAR_2 ||
      *VAR_16 & VAR_0)
   *VAR_16 = (unsigned long) FUNC_6(*VAR_16);
 }


 FUNC_8(FUNC_9(), 0);




 FUNC_3();

 FUNC_7("Will call new kernel at %08lx\n", VAR_14->start);
 FUNC_7("Bye ...\n");

 FUNC_0();







 FUNC_2();
}
