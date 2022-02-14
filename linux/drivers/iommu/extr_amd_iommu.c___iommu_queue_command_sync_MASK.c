
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int cmd_buf_tail; int cmd_buf_head; int need_sync; scalar_t__ mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amd_iommu*,struct iommu_cmd*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amd_iommu *VAR_4,
          struct iommu_cmd *VAR_5,
          bool VAR_6)
{
 unsigned int VAR_7 = 0;
 u32 VAR_8, VAR_9;

 VAR_9 = (VAR_4->cmd_buf_tail + sizeof(*VAR_5)) % VAR_0;
again:
 VAR_8 = (VAR_4->cmd_buf_head - VAR_9) % VAR_0;

 if (VAR_8 <= 0x20) {

  if (VAR_7++) {
   if (VAR_7 == VAR_2) {
    FUNC_1("Command buffer timeout\n");
    return -VAR_1;
   }

   FUNC_3(1);
  }


  VAR_4->cmd_buf_head = FUNC_2(VAR_4->mmio_base +
         VAR_3);

  goto again;
 }

 FUNC_0(VAR_4, VAR_5);


 VAR_4->need_sync = VAR_6;

 return 0;
}
