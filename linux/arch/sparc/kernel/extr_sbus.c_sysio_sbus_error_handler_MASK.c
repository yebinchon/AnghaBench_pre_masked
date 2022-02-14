
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct iommu* iommu; } ;
struct TYPE_4__ {int of_node; TYPE_1__ archdata; } ;
struct platform_device {TYPE_2__ dev; } ;
struct iommu {int write_complete_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_12, void *VAR_13)
{
 struct platform_device *VAR_14 = VAR_13;
 struct iommu *VAR_15 = VAR_14->dev.archdata.iommu;
 unsigned long VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_18 = VAR_15->write_complete_reg - 0x2000UL;
 VAR_16 = VAR_18 + VAR_11;
 VAR_17 = VAR_18 + VAR_10;

 VAR_19 = FUNC_2(VAR_16);
 VAR_20 = FUNC_2(VAR_17);


 VAR_21 = VAR_19 &
  (VAR_3 | VAR_4 | VAR_2 |
   VAR_8 | VAR_9 | VAR_6);
 FUNC_3(VAR_21, VAR_16);

 VAR_23 = FUNC_0(VAR_14->dev.of_node, "portid", -1);


 FUNC_1("SYSIO[%x]: SBUS Error, primary error type[%s] read(%d)\n",
        VAR_23,
        (((VAR_21 & VAR_3) ?
   "Late PIO Error" :
   ((VAR_21 & VAR_4) ?
    "Time Out" :
    ((VAR_21 & VAR_2) ?
     "Error Ack" : "???")))),
        (VAR_19 & VAR_5) ? 1 : 0);
 FUNC_1("SYSIO[%x]: size[%lx] MID[%lx]\n",
        VAR_23,
        (VAR_19 & VAR_7) >> 42UL,
        (VAR_19 & VAR_1) >> 37UL);
 FUNC_1("SYSIO[%x]: AFAR[%016lx]\n", VAR_23, VAR_20);
 FUNC_1("SYSIO[%x]: Secondary SBUS errors [", VAR_23);
 VAR_22 = 0;
 if (VAR_19 & VAR_8) {
  VAR_22++;
  FUNC_1("(Late PIO Error)");
 }
 if (VAR_19 & VAR_9) {
  VAR_22++;
  FUNC_1("(Time Out)");
 }
 if (VAR_19 & VAR_6) {
  VAR_22++;
  FUNC_1("(Error Ack)");
 }
 if (!VAR_22)
  FUNC_1("(none)");
 FUNC_1("]\n");



 return VAR_0;
}
