
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;
struct pci_bar_io {int pbi_reg; int pbi_base; scalar_t__ pbi_enabled; scalar_t__ pbi_length; int pbi_sel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct pci_bar_io*) ;
 int FUNC_2 (char*,char const*,...) ;

void
FUNC_3(int VAR_4, struct pci_conf *VAR_5, const char *VAR_6, uint16_t VAR_7)
{
 uint64_t VAR_8;
 const char *VAR_9;
 struct pci_bar_io VAR_10;
 int VAR_11;

 VAR_10.pbi_sel = VAR_5->pc_sel;
 VAR_10.pbi_reg = VAR_7;
 if (FUNC_1(VAR_4, VAR_3, &VAR_10) < 0)
  return;
 if (FUNC_0(VAR_10.pbi_base)) {
  VAR_9 = "I/O Port";
  VAR_11 = 32;
  VAR_8 = VAR_10.pbi_base & VAR_0;
 } else {
  if (VAR_10.pbi_base & VAR_1)
   VAR_9 = "Prefetchable Memory";
  else
   VAR_9 = "Memory";
  switch (VAR_10.pbi_base & VAR_2) {
  case 129:
   VAR_11 = 32;
   break;
  case 130:
   VAR_11 = 20;
   break;
  case 128:
   VAR_11 = 64;
   break;
  default:
   VAR_11 = -1;
  }
  VAR_8 = VAR_10.pbi_base & ~((uint64_t)0xf);
 }
 FUNC_2("    %s[%02x] = type %s, range %2d, base %#jx, ",
     VAR_6, VAR_7, VAR_9, VAR_11, (uintmax_t)VAR_8);
 FUNC_2("size %ju, %s\n", (uintmax_t)VAR_10.pbi_length,
     VAR_10.pbi_enabled ? "enabled" : "disabled");
}
