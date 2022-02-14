
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_cvp_conf {scalar_t__ vsec_offset; int pci_dev; } ;


 int FUNC_0 (int ,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct altera_cvp_conf *VAR_0,
        int VAR_1, u32 *VAR_2)
{
 return FUNC_0(VAR_0->pci_dev, VAR_0->vsec_offset + VAR_1,
         VAR_2);
}
