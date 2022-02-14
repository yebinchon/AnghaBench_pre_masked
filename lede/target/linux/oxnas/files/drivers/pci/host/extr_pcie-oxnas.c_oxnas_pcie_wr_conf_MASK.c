
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int sysdata; } ;
struct oxnas_pcie {int lock; scalar_t__ cfgbase; int haslink; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct oxnas_pcie*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct oxnas_pcie* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_2, u32 VAR_3,
         int VAR_4, int VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 struct oxnas_pcie *VAR_8 = FUNC_5(VAR_2->sysdata);
 unsigned VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 if (FUNC_0(VAR_3) > 0)
  return VAR_0;

 if (!VAR_8->haslink)
  return VAR_0;

 VAR_9 = FUNC_1(VAR_2->sysdata, VAR_2->number, VAR_3,
       VAR_4);

 VAR_10 = VAR_6 << (8 * (VAR_4 & 3));
 VAR_11 = (0xf >> (4-VAR_5)) << (VAR_4 & 3);





 FUNC_3(&VAR_8->lock, VAR_7);
 FUNC_2(VAR_8, VAR_11);
 FUNC_6(VAR_10, VAR_8->cfgbase + VAR_9);
 FUNC_2(VAR_8, 0xf);
 FUNC_4(&VAR_8->lock, VAR_7);

 return VAR_1;
}
