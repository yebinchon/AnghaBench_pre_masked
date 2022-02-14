
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_cvp_conf {scalar_t__ vsec_offset; int pci_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct altera_cvp_conf *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1->pci_dev, VAR_1->vsec_offset + VAR_0,
          VAR_2);
}
