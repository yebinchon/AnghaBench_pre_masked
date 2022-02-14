
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct e752x_pvt {int* map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1,
    struct e752x_pvt *VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
  FUNC_0(VAR_1, VAR_0 + VAR_3, &VAR_4);

  if (VAR_4 == VAR_5) {

   VAR_2->map[VAR_3] = 0xff;
   VAR_2->map[VAR_3 + 1] = 0xff;
  } else {
   VAR_2->map[VAR_3] = VAR_6;
   VAR_6++;
   VAR_5 = VAR_4;



   FUNC_0(VAR_1, VAR_0 + VAR_3 + 1,
     &VAR_4);



   VAR_2->map[VAR_3 + 1] = (VAR_4 == VAR_5) ? 0xff : VAR_6;
   VAR_6++;
   VAR_5 = VAR_4;
  }
 }
}
