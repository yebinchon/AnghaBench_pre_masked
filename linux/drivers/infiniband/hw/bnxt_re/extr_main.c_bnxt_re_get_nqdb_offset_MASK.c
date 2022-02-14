
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct bnxt_re_dev {TYPE_1__* msix_entries; int chip_ctx; } ;
struct TYPE_2__ {int db_offset; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct bnxt_re_dev *VAR_0, u16 VAR_1)
{
 return FUNC_0(&VAR_0->chip_ctx) ?
    0x10000 : VAR_0->msix_entries[VAR_1].db_offset;
}
