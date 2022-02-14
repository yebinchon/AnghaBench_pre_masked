
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,int ,int,char*,TYPE_1__*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_12;

 if (VAR_7.irq >= 0) {

  VAR_12 = FUNC_1(VAR_7.irq, VAR_8,
      VAR_4 | VAR_1 |
      VAR_3 | VAR_2 |
      VAR_5,
      "mips_perf_pmu", &VAR_7);
  if (VAR_12) {
   FUNC_0("Unable to request IRQ%d for MIPS performance counters!\n",
    VAR_7.irq);
  }
 } else if (VAR_6 < 0) {



  VAR_11 = VAR_10;
  VAR_10 = VAR_9;
  VAR_12 = 0;
 } else {
  FUNC_0("The platform hasn't properly defined its interrupt controller\n");
  VAR_12 = -VAR_0;
 }

 return VAR_12;
}
