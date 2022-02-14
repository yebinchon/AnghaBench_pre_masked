
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
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct pci_dev *VAR_4;
 int VAR_5 = 1;
 int VAR_6;
 u8 VAR_7;


 VAR_6 = 0x78;
 VAR_4 = FUNC_1(VAR_3, VAR_0,
        ((void*)0));

 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_1(VAR_3,
         VAR_1, ((void*)0));

 if (VAR_4 == ((void*)0)) {
  VAR_6 = 0x76;
  VAR_4 = FUNC_1(VAR_3,
         VAR_2, ((void*)0));

  if (VAR_4 == ((void*)0))
   VAR_4 = FUNC_1(VAR_3, 0x7259, ((void*)0));
 }
 if (VAR_4 != ((void*)0)) {

  FUNC_2(VAR_4, VAR_6, &VAR_7);
  if (!(VAR_7 & 1<<7)) {
   VAR_7 |= 1<<7;
   FUNC_3(VAR_4, VAR_6, VAR_7);
   FUNC_2(VAR_4, VAR_6, &VAR_7);
   if (!(VAR_7 & 1<<7)) {
    FUNC_4("Can't enable access to port 0x22\n");
    VAR_5 = 0;
   }
  }
  FUNC_0(VAR_4);
  return VAR_5;
 }
 return 0;
}
