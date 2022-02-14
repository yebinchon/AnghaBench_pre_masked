
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thunderx_lmc {int node; int dimm_lsb; int rank_lsb; int row_lsb; int col_hi_lsb; int bank_lsb; int xbits; int bank_width; scalar_t__ l2c_alias; TYPE_1__* pdev; scalar_t__ xor_bank; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int devfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int,int) ;

__attribute__((used)) static phys_addr_t FUNC_7(u64 VAR_0, struct thunderx_lmc *VAR_1)
{
 phys_addr_t VAR_2 = 0;
 int VAR_3, VAR_4;

 VAR_2 |= VAR_1->node << 40;
 VAR_2 |= FUNC_3(VAR_0) << VAR_1->dimm_lsb;
 VAR_2 |= FUNC_1(VAR_0) << VAR_1->rank_lsb;
 VAR_2 |= FUNC_4(VAR_0) << VAR_1->row_lsb;
 VAR_2 |= (FUNC_2(VAR_0) >> 4) << VAR_1->col_hi_lsb;

 VAR_3 = FUNC_0(VAR_0) << VAR_1->bank_lsb;

 if (VAR_1->xor_bank)
  VAR_3 ^= FUNC_6(VAR_2, 12 + VAR_1->xbits, VAR_1->bank_width);

 VAR_2 |= VAR_3 << VAR_1->bank_lsb;

 VAR_4 = FUNC_5(VAR_1->pdev->devfn);

 if (VAR_1->l2c_alias)
  VAR_4 ^= FUNC_6(VAR_2, 20, VAR_1->xbits) ^
    FUNC_6(VAR_2, 12, VAR_1->xbits);

 VAR_2 |= VAR_4 << 7;

 return VAR_2;
}
