
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_platform_data {int ocr_mask; } ;
struct device {struct pxamci_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct pxamci_platform_data* VAR_4 = VAR_2->platform_data;

 if ((1 << VAR_3) & VAR_4->ocr_mask) {
  FUNC_0(VAR_0, 1);
  FUNC_1(2);
  FUNC_0(VAR_1, 1);
 } else {
  FUNC_0(VAR_1, 0);
  FUNC_0(VAR_0, 0);
 }

 return 0;
}
