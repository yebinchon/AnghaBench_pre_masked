
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct pci_devinst {int pi_capend; int pi_prevcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_devinst*,int ) ;
 int FUNC_2 (struct pci_devinst*,int ,int) ;
 int FUNC_3 (struct pci_devinst*,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(struct pci_devinst *VAR_5, u_char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 uint16_t VAR_11;

 FUNC_0(VAR_7 > 0);

 VAR_10 = FUNC_4(VAR_7, 4);

 VAR_11 = FUNC_1(VAR_5, VAR_3);
 if ((VAR_11 & VAR_1) == 0)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_5->pi_capend + 1;


 if (VAR_9 + VAR_10 > VAR_4 + 1)
  return (-1);


 if ((VAR_11 & VAR_1) == 0) {
  FUNC_3(VAR_5, VAR_2, VAR_9);
  FUNC_2(VAR_5, VAR_3, VAR_11|VAR_1);
 } else
  FUNC_3(VAR_5, VAR_5->pi_prevcap + 1, VAR_9);


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_3(VAR_5, VAR_9 + VAR_8, VAR_6[VAR_8]);


 FUNC_3(VAR_5, VAR_9 + 1, 0);

 VAR_5->pi_prevcap = VAR_9;
 VAR_5->pi_capend = VAR_9 + VAR_10 - 1;
 return (0);
}
