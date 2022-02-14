
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct dm_verity {int data_dev_block_bits; TYPE_1__* fec; } ;
struct TYPE_2__ {int rounds; int rsn; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct dm_verity *VAR_0, u64 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->fec->rsn);
 return VAR_1 + VAR_2 * (VAR_0->fec->rounds << VAR_0->data_dev_block_bits);
}
