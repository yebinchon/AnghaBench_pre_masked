
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int cmd_buf_tail; scalar_t__ mmio_base; int * cmd_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct iommu_cmd*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct amd_iommu *VAR_2,
          struct iommu_cmd *VAR_3)
{
 u8 *VAR_4;

 VAR_4 = VAR_2->cmd_buf + VAR_2->cmd_buf_tail;

 VAR_2->cmd_buf_tail += sizeof(*VAR_3);
 VAR_2->cmd_buf_tail %= VAR_0;


 FUNC_0(VAR_4, VAR_3, sizeof(*VAR_3));


 FUNC_1(VAR_2->cmd_buf_tail, VAR_2->mmio_base + VAR_1);
}
