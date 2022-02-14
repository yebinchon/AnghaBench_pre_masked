
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {void* state; int fh; int fid; int bus; } ;
struct zpci_ccdf_avail {int fid; int fh; int pec; } ;
struct pci_dev {int error_state; } ;
typedef enum zpci_state { ____Placeholder_zpci_state } zpci_state ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 () ;
 struct zpci_dev* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 char* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*,int ,int) ;
 int FUNC_14 (struct zpci_dev*) ;
 int FUNC_15 (struct zpci_dev*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct zpci_ccdf_avail*,int) ;
 int FUNC_18 (struct zpci_dev*) ;

__attribute__((used)) static void FUNC_19(struct zpci_ccdf_avail *VAR_5)
{
 struct zpci_dev *VAR_6 = FUNC_3(VAR_5->fid);
 struct pci_dev *VAR_7 = ((void*)0);
 enum zpci_state VAR_8;
 int VAR_9;

 if (VAR_6)
  VAR_7 = FUNC_5(VAR_6->bus, VAR_0);

 FUNC_11("%s: Event 0x%x reconfigured PCI function 0x%x\n",
  VAR_7 ? FUNC_7(VAR_7) : "n/a", VAR_5->pec, VAR_5->fid);
 FUNC_16("avail CCDF:\n");
 FUNC_17(VAR_5, sizeof(*VAR_5));

 switch (VAR_5->pec) {
 case 0x0301:
  if (!VAR_6) {
   VAR_9 = FUNC_0(VAR_5->fid, VAR_5->fh, 0);
   if (VAR_9)
    break;
   VAR_6 = FUNC_3(VAR_5->fid);
  }
  if (!VAR_6 || VAR_6->state != VAR_3)
   break;
  VAR_6->state = VAR_1;
  VAR_6->fh = VAR_5->fh;
  VAR_9 = FUNC_15(VAR_6);
  if (VAR_9)
   break;
  FUNC_6();
  FUNC_8(VAR_6->bus);
  FUNC_10();
  break;
 case 0x0302:
  if (!VAR_6)
   FUNC_0(VAR_5->fid, VAR_5->fh, 0);
  break;
 case 0x0303:
  if (!VAR_6)
   break;
  if (VAR_7)
   FUNC_9(VAR_7);

  VAR_9 = FUNC_14(VAR_6);
  if (VAR_9)
   break;

  VAR_9 = FUNC_12(VAR_6->fid);
  FUNC_13(3, "deconf fid:%x, rc:%d\n", VAR_6->fid, VAR_9);
  if (!VAR_9)
   VAR_6->state = VAR_3;

  break;
 case 0x0304:
  if (!VAR_6)
   break;
  if (VAR_7) {


   VAR_7->error_state = VAR_4;
   FUNC_9(VAR_7);
  }

  VAR_6->fh = VAR_5->fh;
  FUNC_14(VAR_6);
  VAR_6->state = VAR_3;
  if (!FUNC_1(VAR_5->fid, &VAR_8) &&
      VAR_8 == VAR_2) {
   FUNC_18(VAR_6);
  }
  break;
 case 0x0306:
  FUNC_2();
  break;
 case 0x0308:
  if (!VAR_6)
   break;
  FUNC_18(VAR_6);
  break;
 default:
  break;
 }
 FUNC_4(VAR_7);
}
