
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {TYPE_1__* phb; int devfn; int busno; } ;
struct TYPE_2__ {unsigned long buid; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int*,int,int ,int ,int,int,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dn *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9[3];
 unsigned long VAR_10;
 int VAR_11;

 VAR_7 = FUNC_5(VAR_4->busno, VAR_4->devfn, 0);
 VAR_10 = VAR_4->phb->buid;

 VAR_8 = 1;
 do {
  if (VAR_5 == VAR_2 || VAR_5 == VAR_1 ||
      VAR_5 == VAR_0)
   VAR_11 = FUNC_4(VAR_3, 6, 4, VAR_9, VAR_7,
     FUNC_0(VAR_10), FUNC_1(VAR_10),
     VAR_5, VAR_6, VAR_8);
  else
   VAR_11 = FUNC_4(VAR_3, 6, 3, VAR_9, VAR_7,
     FUNC_0(VAR_10), FUNC_1(VAR_10),
     VAR_5, VAR_6, VAR_8);

  VAR_8 = VAR_9[1];
 } while (FUNC_3(VAR_11));





 if (VAR_11 == 0)
  VAR_11 = VAR_9[0];
 else if (VAR_11 > 0)
  VAR_11 = -VAR_11;

 FUNC_2("rtas_msi: ibm,change_msi(func=%d,num=%d), got %d rc = %d\n",
   VAR_5, VAR_6, VAR_9[0], VAR_11);

 return VAR_11;
}
