
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int class; int devfn; TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 if ((VAR_4->class >> 8) == VAR_3) {
  u32 VAR_5, VAR_6;

  if (VAR_4->class & 0x80) {
   VAR_5 = 0x1f0;
   VAR_6 = 0x3f4;
  } else {
   VAR_5 = 0x170;
   VAR_6 = 0x374;
  }

  FUNC_2(VAR_4, VAR_0,
           VAR_5 | VAR_2);
  FUNC_2(VAR_4, VAR_1,
           VAR_6 | VAR_2);

  VAR_4->resource[0].start = 0;
  VAR_4->resource[0].end = 0;
  VAR_4->resource[0].flags = 0;

  VAR_4->resource[1].start = 0;
  VAR_4->resource[1].end = 0;
  VAR_4->resource[1].flags = 0;
 } else if (FUNC_0(VAR_4->devfn) == 0) {



  FUNC_1(VAR_4, 0x4b, 14);
  FUNC_1(VAR_4, 0x4c, 15);




  FUNC_1(VAR_4, 0x4d, 0x41);




  FUNC_1(VAR_4, 0x44, 0x17);




  FUNC_1(VAR_4, 0x45, 0x03);
 }
}
