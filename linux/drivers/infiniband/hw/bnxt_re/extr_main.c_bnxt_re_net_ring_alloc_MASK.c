
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct hwrm_ring_alloc_output {int ring_id; } ;
struct hwrm_ring_alloc_input {int page_tbl_depth; int ring_type; int int_mode; int length; int logical_id; scalar_t__ fbo; int page_size; int page_tbl_addr; scalar_t__ enables; int member_0; } ;
struct bnxt_re_dev {struct bnxt_en_dev* en_dev; } ;
struct bnxt_fw_msg {int dummy; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
typedef int resp ;
typedef int req ;
typedef int fw_msg ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* bnxt_send_fw_msg ) (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_fw_msg*,void*,int,void*,int,int ) ;
 int FUNC_1 (struct bnxt_re_dev*,void*,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bnxt_fw_msg*,int ,int) ;
 int FUNC_7 (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;

__attribute__((used)) static int FUNC_8(struct bnxt_re_dev *VAR_6, dma_addr_t *VAR_7,
      int VAR_8, int VAR_9, u32 VAR_10,
      u32 VAR_11, u16 *VAR_12)
{
 struct bnxt_en_dev *VAR_13 = VAR_6->en_dev;
 struct hwrm_ring_alloc_input VAR_14 = {0};
 struct hwrm_ring_alloc_output VAR_15;
 struct bnxt_fw_msg VAR_16;
 int VAR_17 = -VAR_3;

 if (!VAR_13)
  return VAR_17;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 FUNC_1(VAR_6, (void *)&VAR_14, VAR_4, -1, -1);
 VAR_14.enables = 0;
 VAR_14.page_tbl_addr = FUNC_4(VAR_7[0]);
 if (VAR_8 > 1) {

  VAR_14.page_size = VAR_0;
  VAR_14.page_tbl_depth = 1;
 }
 VAR_14.fbo = 0;

 VAR_14.logical_id = FUNC_2(VAR_11);
 VAR_14.length = FUNC_3(VAR_10 + 1);
 VAR_14.ring_type = VAR_9;
 VAR_14.int_mode = VAR_5;
 FUNC_0(&VAR_16, (void *)&VAR_14, sizeof(VAR_14), (void *)&VAR_15,
       sizeof(VAR_15), VAR_2);
 VAR_17 = VAR_13->en_ops->bnxt_send_fw_msg(VAR_13, VAR_1, &VAR_16);
 if (!VAR_17)
  *VAR_12 = FUNC_5(VAR_15.ring_id);

 return VAR_17;
}
