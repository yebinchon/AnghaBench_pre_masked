
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int xfer_mode; int max_dma_buf_size; int max_fw_image_size; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int build; int hotfix; int minor; int major; } ;
struct shim_fw_info {TYPE_4__ ldr_capability; TYPE_3__ ldr_version; int protocol_version; TYPE_2__ ish_fw_version; } ;
struct loader_xfer_query_response {struct shim_fw_info fw_info; } ;
struct TYPE_5__ {int command; } ;
struct loader_xfer_query {int image_size; TYPE_1__ hdr; } ;
struct ishtp_cl_data {int flag_retry; } ;
struct firmware {int size; } ;
typedef int ldr_xfer_query_resp ;
typedef int ldr_xfer_query ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*,int ,int,int,int ,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_6 ;
 int FUNC_3 (struct ishtp_cl_data*,int *,int,int *,int) ;
 int FUNC_4 (struct loader_xfer_query*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ishtp_cl_data *VAR_7,
     const struct firmware *VAR_8,
     struct shim_fw_info *VAR_9)
{
 int VAR_10;
 struct loader_xfer_query VAR_11;
 struct loader_xfer_query_response VAR_12;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.hdr.command = VAR_4;
 VAR_11.image_size = VAR_8->size;
 VAR_10 = FUNC_3(VAR_7,
       (u8 *)&VAR_11,
       sizeof(VAR_11),
       (u8 *)&VAR_12,
       sizeof(VAR_12));
 if (VAR_10 < 0) {
  VAR_7->flag_retry = 1;
  return VAR_10;
 }


 if (VAR_10 != sizeof(struct loader_xfer_query_response)) {
  FUNC_2(FUNC_0(VAR_7),
   "data size %d is not equal to size of loader_xfer_query_response %zu\n",
   VAR_10, sizeof(struct loader_xfer_query_response));
  VAR_7->flag_retry = 1;
  return -VAR_1;
 }


 *VAR_9 = VAR_12.fw_info;


 FUNC_1(FUNC_0(VAR_7),
  "ish_fw_version: major=%d minor=%d hotfix=%d build=%d protocol_version=0x%x loader_version=%d\n",
  VAR_9->ish_fw_version.major,
  VAR_9->ish_fw_version.minor,
  VAR_9->ish_fw_version.hotfix,
  VAR_9->ish_fw_version.build,
  VAR_9->protocol_version,
  VAR_9->ldr_version.value);

 FUNC_1(FUNC_0(VAR_7),
  "loader_capability: max_fw_image_size=0x%x xfer_mode=%d max_dma_buf_size=0x%x dma_buf_size_limit=0x%x\n",
  VAR_9->ldr_capability.max_fw_image_size,
  VAR_9->ldr_capability.xfer_mode,
  VAR_9->ldr_capability.max_dma_buf_size,
  VAR_6);


 if (VAR_9->ldr_capability.max_fw_image_size < VAR_8->size) {
  FUNC_2(FUNC_0(VAR_7),
   "ISH firmware size %zu is greater than Shim firmware loader max supported %d\n",
   VAR_8->size,
   VAR_9->ldr_capability.max_fw_image_size);
  return -VAR_2;
 }


 if ((VAR_9->ldr_capability.xfer_mode & VAR_5) &&
     (VAR_9->ldr_capability.max_dma_buf_size % VAR_3)) {
  FUNC_2(FUNC_0(VAR_7),
   "Shim firmware loader buffer size %d should be multiple of cacheline\n",
   VAR_9->ldr_capability.max_dma_buf_size);
  return -VAR_0;
 }

 return 0;
}
