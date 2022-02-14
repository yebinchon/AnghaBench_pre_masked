
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slotinfo {TYPE_1__* si_funcs; } ;
struct pci_devinst {TYPE_2__* pi_d; } ;
struct businfo {int iobase; int iolimit; int membase32; int memlimit32; int membase64; int memlimit64; struct slotinfo* slotinfo; } ;
struct TYPE_4__ {int (* pe_write_dsdt ) (struct pci_devinst*) ;} ;
struct TYPE_3__ {struct pci_devinst* fi_devi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 struct businfo** VAR_4 ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int,int ,int *) ;
 int FUNC_7 (struct pci_devinst*) ;

__attribute__((used)) static void
FUNC_8(int VAR_6)
{
 struct businfo *VAR_7;
 struct slotinfo *VAR_8;
 struct pci_devinst *VAR_9;
 int VAR_10, VAR_11, VAR_12;




 if ((VAR_7 = VAR_4[VAR_6]) == ((void*)0)) {





  if (VAR_6 != 0)
   return;
 }

 FUNC_3("  Device (PC%02X)", VAR_6);
 FUNC_3("  {");
 FUNC_3("    Name (_HID, EisaId (\"PNP0A03\"))");

 FUNC_3("    Method (_BBN, 0, NotSerialized)");
 FUNC_3("    {");
 FUNC_3("        Return (0x%08X)", VAR_6);
 FUNC_3("    }");
 FUNC_3("    Name (_CRS, ResourceTemplate ()");
 FUNC_3("    {");
 FUNC_3("      WordBusNumber (ResourceProducer, MinFixed, "
     "MaxFixed, PosDecode,");
 FUNC_3("        0x0000,             // Granularity");
 FUNC_3("        0x%04X,             // Range Minimum", VAR_6);
 FUNC_3("        0x%04X,             // Range Maximum", VAR_6);
 FUNC_3("        0x0000,             // Translation Offset");
 FUNC_3("        0x0001,             // Length");
 FUNC_3("        ,, )");

 if (VAR_6 == 0) {
  FUNC_2(3);
  FUNC_1(0xCF8, 8);
  FUNC_4(3);

  FUNC_3("      WordIO (ResourceProducer, MinFixed, MaxFixed, "
      "PosDecode, EntireRange,");
  FUNC_3("        0x0000,             // Granularity");
  FUNC_3("        0x0000,             // Range Minimum");
  FUNC_3("        0x0CF7,             // Range Maximum");
  FUNC_3("        0x0000,             // Translation Offset");
  FUNC_3("        0x0CF8,             // Length");
  FUNC_3("        ,, , TypeStatic)");

  FUNC_3("      WordIO (ResourceProducer, MinFixed, MaxFixed, "
      "PosDecode, EntireRange,");
  FUNC_3("        0x0000,             // Granularity");
  FUNC_3("        0x0D00,             // Range Minimum");
  FUNC_3("        0x%04X,             // Range Maximum",
      VAR_2 - 1);
  FUNC_3("        0x0000,             // Translation Offset");
  FUNC_3("        0x%04X,             // Length",
      VAR_2 - 0x0D00);
  FUNC_3("        ,, , TypeStatic)");

  if (VAR_7 == ((void*)0)) {
   FUNC_3("    })");
   goto done;
  }
 }
 FUNC_0(VAR_7 != ((void*)0));


 FUNC_3("      WordIO (ResourceProducer, MinFixed, MaxFixed, "
     "PosDecode, EntireRange,");
 FUNC_3("        0x0000,             // Granularity");
 FUNC_3("        0x%04X,             // Range Minimum", VAR_7->iobase);
 FUNC_3("        0x%04X,             // Range Maximum",
     VAR_7->iolimit - 1);
 FUNC_3("        0x0000,             // Translation Offset");
 FUNC_3("        0x%04X,             // Length",
     VAR_7->iolimit - VAR_7->iobase);
 FUNC_3("        ,, , TypeStatic)");


 FUNC_3("      DWordMemory (ResourceProducer, PosDecode, "
     "MinFixed, MaxFixed, NonCacheable, ReadWrite,");
 FUNC_3("        0x00000000,         // Granularity");
 FUNC_3("        0x%08X,         // Range Minimum\n", VAR_7->membase32);
 FUNC_3("        0x%08X,         // Range Maximum\n",
     VAR_7->memlimit32 - 1);
 FUNC_3("        0x00000000,         // Translation Offset");
 FUNC_3("        0x%08X,         // Length\n",
     VAR_7->memlimit32 - VAR_7->membase32);
 FUNC_3("        ,, , AddressRangeMemory, TypeStatic)");


 FUNC_3("      QWordMemory (ResourceProducer, PosDecode, "
     "MinFixed, MaxFixed, NonCacheable, ReadWrite,");
 FUNC_3("        0x0000000000000000, // Granularity");
 FUNC_3("        0x%016lX, // Range Minimum\n", VAR_7->membase64);
 FUNC_3("        0x%016lX, // Range Maximum\n",
     VAR_7->memlimit64 - 1);
 FUNC_3("        0x0000000000000000, // Translation Offset");
 FUNC_3("        0x%016lX, // Length\n",
     VAR_7->memlimit64 - VAR_7->membase64);
 FUNC_3("        ,, , AddressRangeMemory, TypeStatic)");
 FUNC_3("    })");

 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 != 0) {
  FUNC_2(2);
  FUNC_3("Name (PPRT, Package ()");
  FUNC_3("{");
  FUNC_6(VAR_6, VAR_5, ((void*)0));
  FUNC_3("})");
  FUNC_3("Name (APRT, Package ()");
  FUNC_3("{");
  FUNC_6(VAR_6, VAR_3, ((void*)0));
  FUNC_3("})");
  FUNC_3("Method (_PRT, 0, NotSerialized)");
  FUNC_3("{");
  FUNC_3("  If (PICM)");
  FUNC_3("  {");
  FUNC_3("    Return (APRT)");
  FUNC_3("  }");
  FUNC_3("  Else");
  FUNC_3("  {");
  FUNC_3("    Return (PPRT)");
  FUNC_3("  }");
  FUNC_3("}");
  FUNC_4(2);
 }

 FUNC_2(2);
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_8 = &VAR_7->slotinfo[VAR_12];
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   VAR_9 = VAR_8->si_funcs[VAR_11].fi_devi;
   if (VAR_9 != ((void*)0) && VAR_9->pi_d->pe_write_dsdt != ((void*)0))
    VAR_9->pi_d->pe_write_dsdt(VAR_9);
  }
 }
 FUNC_4(2);
done:
 FUNC_3("  }");
}
