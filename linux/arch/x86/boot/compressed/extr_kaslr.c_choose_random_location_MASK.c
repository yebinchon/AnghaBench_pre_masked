
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loadflags; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,unsigned long) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (int ,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*) ;

void FUNC_11(unsigned long VAR_8,
       unsigned long VAR_9,
       unsigned long *VAR_10,
       unsigned long VAR_11,
       unsigned long *VAR_12)
{
 unsigned long VAR_13, VAR_14;

 if (FUNC_3("nokaslr")) {
  FUNC_10("KASLR disabled: 'nokaslr' on cmdline.");
  return;
 }
 VAR_5->hdr.loadflags |= VAR_1;


 FUNC_7();


 FUNC_8(VAR_8, VAR_9, *VAR_10);






 VAR_14 = FUNC_9(*VAR_10, 512UL << 20);


 VAR_13 = FUNC_5(VAR_14, VAR_11);
 if (!VAR_13) {
  FUNC_10("Physical KASLR disabled: no suitable memory region!");
 } else {

  if (*VAR_10 != VAR_13) {
   FUNC_2(VAR_13, VAR_11);
   *VAR_10 = VAR_13;
  }
  FUNC_4();
 }



 if (FUNC_0(VAR_0))
  VAR_13 = FUNC_6(VAR_2, VAR_11);
 *VAR_12 = VAR_13;
}
