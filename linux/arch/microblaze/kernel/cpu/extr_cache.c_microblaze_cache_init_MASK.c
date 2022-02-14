
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scache {int dummy; } ;
struct TYPE_2__ {int use_instr; scalar_t__ ver_code; scalar_t__ dcache_wb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct scache* VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_4(void)
{
 if (VAR_3.use_instr & VAR_2) {
  if (VAR_3.dcache_wb) {
   FUNC_3("wb_msr\n");
   VAR_4 = (struct scache *)&VAR_5;
   if (VAR_3.ver_code <= VAR_1) {

    FUNC_3("WB won't work properly\n");
   }
  } else {
   if (VAR_3.ver_code >= VAR_0) {
    FUNC_3("wt_msr_noirq\n");
    VAR_4 = (struct scache *)&VAR_8;
   } else {
    FUNC_3("wt_msr\n");
    VAR_4 = (struct scache *)&VAR_7;
   }
  }
 } else {
  if (VAR_3.dcache_wb) {
   FUNC_3("wb_nomsr\n");
   VAR_4 = (struct scache *)&VAR_6;
   if (VAR_3.ver_code <= VAR_1) {

    FUNC_3("WB won't work properly\n");
   }
  } else {
   if (VAR_3.ver_code >= VAR_0) {
    FUNC_3("wt_nomsr_noirq\n");
    VAR_4 = (struct scache *)&VAR_10;
   } else {
    FUNC_3("wt_nomsr\n");
    VAR_4 = (struct scache *)&VAR_9;
   }
  }
 }






 FUNC_0();

 FUNC_2();
 FUNC_1();
}
