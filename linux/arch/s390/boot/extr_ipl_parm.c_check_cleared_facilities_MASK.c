
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* stfle_fac_list; } ;


 int FUNC_0 (unsigned long*) ;
 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_2[] = { VAR_0 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if ((VAR_1.stfle_fac_list[VAR_3] & VAR_2[VAR_3]) != VAR_2[VAR_3]) {
   FUNC_2("Warning: The Linux kernel requires facilities cleared via command line option\n");
   FUNC_1();
   break;
  }
 }
}
