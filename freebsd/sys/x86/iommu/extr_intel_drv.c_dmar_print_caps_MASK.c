
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
typedef int u_int ;
struct dmar_unit {int hw_cap; int hw_ecap; int hw_ver; } ;
typedef int device_t ;
struct TYPE_3__ {int Flags; int Segment; scalar_t__ Address; } ;
typedef TYPE_1__ ACPI_DMAR_HARDWARE_UNIT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,char*,...) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_1, struct dmar_unit *VAR_2,
    ACPI_DMAR_HARDWARE_UNIT *VAR_3)
{
 uint32_t VAR_4, VAR_5;

 FUNC_11(VAR_1, "regs@0x%08jx, ver=%d.%d, seg=%d, flags=<%b>\n",
     (uintmax_t)VAR_3->Address, FUNC_9(VAR_2->hw_ver),
     FUNC_10(VAR_2->hw_ver), VAR_3->Segment,
     VAR_3->Flags, "\020\001INCLUDE_ALL_PCI");
 VAR_4 = VAR_2->hw_cap >> 32;
 FUNC_11(VAR_1, "cap=%b,", (u_int)VAR_2->hw_cap,
     "\020\004AFL\005WBF\006PLMR\007PHMR\010CM\027ZLR\030ISOCH");
 FUNC_12("%b, ", VAR_4, "\020\010PSI\027DWD\030DRD\031FL1GP\034PSI");
 FUNC_12("ndoms=%d, sagaw=%d, mgaw=%d, fro=%d, nfr=%d, superp=%d",
     FUNC_3(VAR_2->hw_cap), FUNC_5(VAR_2->hw_cap),
     FUNC_2(VAR_2->hw_cap), FUNC_0(VAR_2->hw_cap),
     FUNC_4(VAR_2->hw_cap), FUNC_6(VAR_2->hw_cap));
 if ((VAR_2->hw_cap & VAR_0) != 0)
  FUNC_12(", mamv=%d", FUNC_1(VAR_2->hw_cap));
 FUNC_12("\n");
 VAR_5 = VAR_2->hw_ecap >> 32;
 FUNC_11(VAR_1, "ecap=%b,", (u_int)VAR_2->hw_ecap,
     "\020\001C\002QI\003DI\004IR\005EIM\007PT\010SC\031ECS\032MTS"
     "\033NEST\034DIS\035PASID\036PRS\037ERS\040SRS");
 FUNC_12("%b, ", VAR_5, "\020\002NWFS\003EAFS");
 FUNC_12("mhmw=%d, iro=%d\n", FUNC_8(VAR_2->hw_ecap),
     FUNC_7(VAR_2->hw_ecap));
}
