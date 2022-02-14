
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int sysdata; } ;
struct oxnas_pcie {scalar_t__ cfgbase; int haslink; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 struct oxnas_pcie* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, u32 VAR_3, int VAR_4,
         int VAR_5, u32 *VAR_6)
{
 struct oxnas_pcie *VAR_7 = FUNC_3(VAR_2->sysdata);
 unsigned VAR_8;
 u32 VAR_9;
 u32 VAR_10, VAR_11;


 if (FUNC_0(VAR_3) > 0) {
  *VAR_6 = 0xffffffff;
  return VAR_0;
 }

 if (!VAR_7->haslink) {
  *VAR_6 = 0xffffffff;
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_2->sysdata, VAR_2->number, VAR_3,
       VAR_4);
 VAR_9 = FUNC_2(VAR_7->cfgbase + VAR_8);
 VAR_10 = VAR_4 & 3;
 VAR_11 = 4 - VAR_10 - VAR_5;
 VAR_9 <<= VAR_11 * 8;
 VAR_9 >>= (VAR_10 + VAR_11) * 8;
 *VAR_6 = VAR_9;

 return VAR_1;
}
