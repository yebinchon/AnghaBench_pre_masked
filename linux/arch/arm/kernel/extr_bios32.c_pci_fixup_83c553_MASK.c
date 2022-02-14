
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_4)
{



 FUNC_2(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_2, VAR_3);

 VAR_4->resource[0].end -= VAR_4->resource[0].start;
 VAR_4->resource[0].start = 0;




 FUNC_1(VAR_4, 0x48, 0xff);






 FUNC_1(VAR_4, 0x42, 0x01);




 FUNC_1(VAR_4, 0x40, 0x22);







 FUNC_1(VAR_4, 0x83, 0x02);





 FUNC_1(VAR_4, 0x80, 0x11);
 FUNC_1(VAR_4, 0x81, 0x00);





 FUNC_3(VAR_4, 0x44, 0xb000);
 FUNC_0(0x08, 0x4d1);
}
