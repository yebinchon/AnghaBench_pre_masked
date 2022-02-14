
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;



 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int VAR_35 ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_36)
{
 if (FUNC_1(VAR_22))
  FUNC_2(VAR_36, "Chip RAM:\t%ldK\n", VAR_31>>10);
 FUNC_2(VAR_36, "PS Freq:\t%dHz\nEClock Freq:\t%ldHz\n",
   VAR_34, VAR_33);
 if (FUNC_1(VAR_20)) {
  char *VAR_37;
  switch (VAR_32) {
  case 128:
   VAR_37 = "OCS";
   break;
  case 129:
   VAR_37 = "ECS";
   break;
  case 130:
   VAR_37 = "AGA";
   break;
  default:
   VAR_37 = "Old or Unknown";
   break;
  }
  FUNC_2(VAR_36, "Graphics:\t%s\n", VAR_37);
 }





 FUNC_3(VAR_36, "Detected hardware:\n");
 if (FUNC_1(VAR_20)) FUNC_2 (VAR_36, "\t%s\n", "Amiga Video");
 if (FUNC_1(VAR_14)) FUNC_2 (VAR_36, "\t%s\n", "Blitter");
 if (FUNC_1(VAR_12)) FUNC_2 (VAR_36, "\t%s\n", "Amber Flicker Fixer");
 if (FUNC_1(VAR_13)) FUNC_2 (VAR_36, "\t%s\n", "Amiga Audio");
 if (FUNC_1(VAR_15)) FUNC_2 (VAR_36, "\t%s\n", "Floppy Controller");
 if (FUNC_1(VAR_3)) FUNC_2 (VAR_36, "\t%s\n", "SCSI Controller WD33C93 (A3000 style)");
 if (FUNC_1(VAR_5)) FUNC_2 (VAR_36, "\t%s\n", "SCSI Controller NCR53C710 (A4000T style)");
 if (FUNC_1(VAR_0)) FUNC_2 (VAR_36, "\t%s\n", "IDE Interface (A1200 style)");
 if (FUNC_1(VAR_4)) FUNC_2 (VAR_36, "\t%s\n", "IDE Interface (A4000 style)");
 if (FUNC_1(VAR_21)) FUNC_2 (VAR_36, "\t%s\n", "Internal CD ROM drive");
 if (FUNC_1(VAR_16)) FUNC_2 (VAR_36, "\t%s\n", "Keyboard");
 if (FUNC_1(VAR_17)) FUNC_2 (VAR_36, "\t%s\n", "Mouse Port");
 if (FUNC_1(VAR_19)) FUNC_2 (VAR_36, "\t%s\n", "Serial Port");
 if (FUNC_1(VAR_18)) FUNC_2 (VAR_36, "\t%s\n", "Parallel Port");
 if (FUNC_1(VAR_1)) FUNC_2 (VAR_36, "\t%s\n", "Hardware Clock (A2000 style)");
 if (FUNC_1(VAR_2)) FUNC_2 (VAR_36, "\t%s\n", "Hardware Clock (A3000 style)");
 if (FUNC_1(VAR_22)) FUNC_2 (VAR_36, "\t%s\n", "Chip RAM");
 if (FUNC_1(VAR_27)) FUNC_2 (VAR_36, "\t%s\n", "Paula 8364");
 if (FUNC_1(VAR_23)) FUNC_2 (VAR_36, "\t%s\n", "Denise 8362");
 if (FUNC_1(VAR_24)) FUNC_2 (VAR_36, "\t%s\n", "Denise 8373");
 if (FUNC_1(VAR_25)) FUNC_2 (VAR_36, "\t%s\n", "Lisa 8375");
 if (FUNC_1(VAR_9)) FUNC_2 (VAR_36, "\t%s\n", "Normal/Fat PAL Agnus 8367/8371");
 if (FUNC_1(VAR_8)) FUNC_2 (VAR_36, "\t%s\n", "Normal/Fat NTSC Agnus 8361/8370");
 if (FUNC_1(VAR_7)) FUNC_2 (VAR_36, "\t%s\n", "Fat Hires PAL Agnus 8372");
 if (FUNC_1(VAR_6)) FUNC_2 (VAR_36, "\t%s\n", "Fat Hires NTSC Agnus 8372");
 if (FUNC_1(VAR_11)) FUNC_2 (VAR_36, "\t%s\n", "PAL Alice 8374");
 if (FUNC_1(VAR_10)) FUNC_2 (VAR_36, "\t%s\n", "NTSC Alice 8374");
 if (FUNC_1(VAR_26)) FUNC_2 (VAR_36, "\t%s\n", "Magic Hard Rekick");
 if (FUNC_1(VAR_28)) FUNC_2 (VAR_36, "\t%s\n", "PCMCIA Slot");
}
