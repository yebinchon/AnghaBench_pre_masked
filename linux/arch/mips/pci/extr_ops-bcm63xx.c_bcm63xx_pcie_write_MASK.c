
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pci_bus*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_4, unsigned int VAR_5,
         int VAR_6, int VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = VAR_6 & ~3;

 if (!FUNC_0(VAR_4, VAR_5))
  return VAR_0;

 if (VAR_4->number == VAR_2)
  VAR_10 += VAR_3;


 VAR_9 = FUNC_1(VAR_10);

 VAR_9 = FUNC_3(VAR_9, VAR_8, VAR_6, VAR_7);
 FUNC_2(VAR_9, VAR_10);

 return VAR_1;
}
