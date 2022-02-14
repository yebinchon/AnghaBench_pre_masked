
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(const struct pci_dev *VAR_13, u8 VAR_14, u8 VAR_15)
{
 int VAR_16 = -1;

 switch (VAR_14) {
 case 12:
  FUNC_1(VAR_1,
           VAR_6,
           VAR_5);
  FUNC_0(VAR_1, VAR_4);
  VAR_16 = VAR_0;
  break;
 case 13:
  FUNC_1(VAR_3,
           VAR_6,
           VAR_5);
  FUNC_0(VAR_3, VAR_4);
  VAR_16 = VAR_2;
  break;
 case 14:
  switch (VAR_15) {
  case 1:
   FUNC_1(VAR_8,
            VAR_6,
            VAR_5);
   FUNC_0(VAR_8,
          VAR_4);
   VAR_16 = VAR_7;
   break;
  case 2:
   FUNC_1(VAR_10,
            VAR_6,
            VAR_5);
   FUNC_0(VAR_10,
          VAR_4);
   VAR_16 = VAR_9;
   break;
  case 3:
   FUNC_1(VAR_12,
            VAR_6,
            VAR_5);
   FUNC_0(VAR_12,
          VAR_4);
   VAR_16 = VAR_11;
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 return VAR_16;
}
