
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long default_lma; int (* entry ) () ;int image_size; int dynsym_start; int rela_dyn_end; int rela_dyn_start; int bootdata_preserved_off; int bootdata_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (void*,void*,int ) ;
 int FUNC_9 (void*,void*,int ) ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 () ;
 unsigned long FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 TYPE_1__ VAR_5 ;

void FUNC_20(void)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 void *VAR_8;

 FUNC_17();
 VAR_7 = FUNC_7();
 VAR_7 = FUNC_12(VAR_7);
 FUNC_19();
 FUNC_13(VAR_7);
 FUNC_14();
 FUNC_15();
 FUNC_11();
 FUNC_16();
 FUNC_4();

 VAR_6 = VAR_3 = 0;
 if (FUNC_0(VAR_1) && VAR_4) {
  VAR_6 = FUNC_5(VAR_7);
  if (VAR_6) {
   VAR_3 = VAR_6 - VAR_5.default_lma;
   VAR_8 = (void *)VAR_5.default_lma;
   VAR_5.default_lma += VAR_3;
   VAR_5.entry += VAR_3;
   VAR_5.bootdata_off += VAR_3;
   VAR_5.bootdata_preserved_off += VAR_3;
   VAR_5.rela_dyn_start += VAR_3;
   VAR_5.rela_dyn_end += VAR_3;
   VAR_5.dynsym_start += VAR_3;
  }
 }

 if (!FUNC_0(VAR_0)) {
  VAR_8 = FUNC_3();
  FUNC_9((void *)VAR_5.default_lma, VAR_8, VAR_5.image_size);
 } else if (VAR_3)
  FUNC_8((void *)VAR_5.default_lma, VAR_8, VAR_5.image_size);

 FUNC_1();
 FUNC_2();
 if (FUNC_0(VAR_2))
  FUNC_6(VAR_3);

 if (VAR_3) {

  if (FUNC_0(VAR_0))
   FUNC_10(VAR_8, 0, VAR_5.image_size);
 }
 VAR_5.entry();
}
