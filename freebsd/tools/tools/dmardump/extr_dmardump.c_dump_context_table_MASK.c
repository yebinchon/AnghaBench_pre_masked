
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
struct TYPE_2__ {int pc_dev; int pc_func; } ;
struct pci_conf {char* pd_name; int pd_unit; TYPE_1__ pc_sel; } ;
struct dmar_ctx_entry {int ctx1; int ctx2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dmar_ctx_entry* FUNC_1 (int ,int ) ;
 struct pci_conf* FUNC_2 (int,int,int,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(int VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct dmar_ctx_entry *VAR_8;
 struct pci_conf *VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_10 = 0;
 VAR_8 = FUNC_1(VAR_7, VAR_4);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (!(VAR_8[VAR_11].ctx1 & VAR_2))
   continue;
  if (!VAR_10) {
   FUNC_3("\tPCI bus %d:\n", VAR_6);
   VAR_10 = 1;
  }


  VAR_9 = FUNC_2(VAR_5, VAR_6, 0, VAR_11);
  if (VAR_9 == ((void*)0))
   VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_11 >> 3, VAR_11 & 7);
  if (VAR_9 != ((void*)0)) {
   FUNC_3("\t    { %d,%d }", VAR_9->pc_sel.pc_dev,
       VAR_9->pc_sel.pc_func);
   if (VAR_9->pd_name[0] != '\0')
    FUNC_3(" (%s%lu)", VAR_9->pd_name,
        VAR_9->pd_unit);
  } else
   FUNC_3("\t    { %d,%d } (absent)", VAR_11 >> 3,
       VAR_11 & 7);
  if (VAR_8[VAR_11].ctx1 & VAR_1)
   FUNC_3(" FPD");
  switch (VAR_8[VAR_11].ctx1 & 0xc) {
  case 128:
   FUNC_3(" UNTR");
   break;
  case 129:
   FUNC_3(" TR");
   break;
  case 130:
   FUNC_3(" PASS");
   break;
  default:
   FUNC_3(" TT3?");
   break;
  }
  FUNC_3(" SLPT %#jx", (uintmax_t)(VAR_8[VAR_11].ctx1 &
      VAR_0));
  FUNC_3(" domain %d", (int)FUNC_0(VAR_8[VAR_11].ctx2));
  FUNC_3("\n");
 }
}
