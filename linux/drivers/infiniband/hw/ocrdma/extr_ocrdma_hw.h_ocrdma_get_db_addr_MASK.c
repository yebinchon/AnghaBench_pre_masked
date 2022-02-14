
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {int db_page_size; scalar_t__ unmapped_db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;



__attribute__((used)) static inline u64 FUNC_0(struct ocrdma_dev *VAR_0, u32 VAR_1)
{
 return VAR_0->nic_info.unmapped_db + (VAR_1 * VAR_0->nic_info.db_page_size);
}
