
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_smmu {TYPE_2__* mc; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* soc; } ;
struct TYPE_3__ {int atom_size; int num_address_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_smmu*,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct tegra_smmu *VAR_4, dma_addr_t VAR_5,
      unsigned long VAR_6)
{
 u32 VAR_7;

 VAR_6 &= ~(VAR_4->mc->soc->atom_size - 1);

 if (VAR_4->mc->soc->num_address_bits > 32) {



  VAR_7 = 0;

  FUNC_0(VAR_4, VAR_7, VAR_1);
 }

 VAR_7 = (VAR_5 + VAR_6) | VAR_3;
 FUNC_0(VAR_4, VAR_7, VAR_0);
}
