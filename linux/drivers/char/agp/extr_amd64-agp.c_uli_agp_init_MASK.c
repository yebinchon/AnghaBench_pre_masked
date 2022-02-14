
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; int bus; } ;
struct TYPE_5__ {struct pci_dev* misc; } ;
struct TYPE_4__ {unsigned int size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_7)
{
 u32 VAR_8,VAR_9,VAR_10;
 struct pci_dev *VAR_11;
 int VAR_12, VAR_13;
 unsigned VAR_14 = FUNC_2();

 FUNC_3(&VAR_7->dev, "setting up ULi AGP\n");
 VAR_11 = FUNC_6 (VAR_7->bus,FUNC_1(0,0));
 if (VAR_11 == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "can't find ULi secondary device\n");
  return -VAR_1;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++)
  if (VAR_6[VAR_12].size == VAR_14)
   break;

 if (VAR_12 == FUNC_0(VAR_6)) {
  FUNC_3(&VAR_7->dev, "no ULi size found for %d\n", VAR_14);
  VAR_13 = -VAR_1;
  goto put;
 }


 FUNC_7 (FUNC_4(0)->misc, VAR_0,
          &VAR_8);


 if ((VAR_8 & 0x7fff) >> (32 - 25)) {
  VAR_13 = -VAR_1;
  goto put;
 }

 VAR_8 = (VAR_8& 0x7fff) << 25;

 FUNC_7(VAR_7, VAR_3, &VAR_9);
 VAR_9&= ~VAR_2;
 VAR_9|= VAR_8;
 FUNC_8(VAR_7, VAR_3, VAR_9);

 VAR_10= VAR_8+ (VAR_14 * 1024 * 1024) - 1;
 FUNC_8(VAR_11, VAR_5, VAR_8);
 FUNC_8(VAR_11, VAR_4, VAR_10);
 VAR_13 = 0;
put:
 FUNC_5(VAR_11);
 return VAR_13;
}
