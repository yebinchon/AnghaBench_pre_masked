
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pci_devinst {int dummy; } ;
struct msicap {int dummy; } ;
typedef int msicap ;


 int FUNC_0 (struct msicap*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct pci_devinst *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct msicap VAR_5;
 u_char *VAR_6;

 FUNC_0(&VAR_5, VAR_1, VAR_2);







 VAR_3 = 256 - FUNC_2(sizeof(VAR_5), 4);
 VAR_6 = (u_char *)&VAR_5;
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_5); VAR_4++)
  FUNC_1(VAR_0, VAR_3 + VAR_4, VAR_6[VAR_4]);

 return (VAR_3);
}
