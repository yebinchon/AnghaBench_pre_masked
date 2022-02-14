
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int broken_parity_status; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct pci_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_9)
{
 unsigned long VAR_10;
 u16 VAR_11;
 u8 VAR_12;


 FUNC_6(VAR_10);


 VAR_11 = FUNC_4(VAR_9, 0);


 FUNC_8(VAR_9, VAR_2, &VAR_12);

 FUNC_5(VAR_10);

 FUNC_2(4, "PCI STATUS= 0x%04x %s\n", VAR_11, FUNC_1(&VAR_9->dev));




 if (VAR_11 && !VAR_9->broken_parity_status) {
  if (VAR_11 & (VAR_6)) {
   FUNC_3(VAR_1, VAR_0,
    "Signaled System Error on %s\n",
    FUNC_7(VAR_9));
   FUNC_0(&VAR_7);
  }

  if (VAR_11 & (VAR_5)) {
   FUNC_3(VAR_1, VAR_0,
    "Master Data Parity Error on %s\n",
    FUNC_7(VAR_9));

   FUNC_0(&VAR_8);
  }

  if (VAR_11 & (VAR_4)) {
   FUNC_3(VAR_1, VAR_0,
    "Detected Parity Error on %s\n",
    FUNC_7(VAR_9));

   FUNC_0(&VAR_8);
  }
 }


 FUNC_2(4, "PCI HEADER TYPE= 0x%02x %s\n",
   VAR_12, FUNC_1(&VAR_9->dev));

 if ((VAR_12 & 0x7F) == VAR_3) {

  VAR_11 = FUNC_4(VAR_9, 1);

  FUNC_2(4, "PCI SEC_STATUS= 0x%04x %s\n",
    VAR_11, FUNC_1(&VAR_9->dev));




  if (VAR_11 && !VAR_9->broken_parity_status) {
   if (VAR_11 & (VAR_6)) {
    FUNC_3(VAR_1, VAR_0, "Bridge "
     "Signaled System Error on %s\n",
     FUNC_7(VAR_9));
    FUNC_0(&VAR_7);
   }

   if (VAR_11 & (VAR_5)) {
    FUNC_3(VAR_1, VAR_0, "Bridge "
     "Master Data Parity Error on "
     "%s\n", FUNC_7(VAR_9));

    FUNC_0(&VAR_8);
   }

   if (VAR_11 & (VAR_4)) {
    FUNC_3(VAR_1, VAR_0, "Bridge "
     "Detected Parity Error on %s\n",
     FUNC_7(VAR_9));

    FUNC_0(&VAR_8);
   }
  }
 }
}
