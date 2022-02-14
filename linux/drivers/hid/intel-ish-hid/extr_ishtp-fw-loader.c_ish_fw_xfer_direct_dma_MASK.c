
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_4__ {int max_dma_buf_size; } ;
struct shim_fw_info {TYPE_1__ ldr_capability; } ;
struct TYPE_5__ {int command; } ;
struct TYPE_6__ {int is_last; int offset; int size; int xfer_mode; TYPE_2__ hdr; } ;
struct loader_xfer_dma_fragment {scalar_t__ ddr_phys_addr; TYPE_3__ fragment; } ;
struct loader_msg_hdr {int dummy; } ;
struct ishtp_cl_data {int flag_retry; int cl_device; } ;
struct firmware {int size; int * data; } ;
struct device {int dummy; } ;
typedef int ldr_xfer_dma_frag_ack ;
typedef int ldr_xfer_dma_frag ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,char*,int,int,int,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_5 (struct device*,scalar_t__) ;
 int FUNC_6 (struct device*,scalar_t__,int,int ) ;
 int FUNC_7 (struct device*,scalar_t__,int,int ) ;
 struct device* FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int,int) ;
 int FUNC_11 (struct ishtp_cl_data*,int *,int,int *,int) ;
 int FUNC_12 (void*,int *,int) ;
 int FUNC_13 (int,size_t,size_t) ;

__attribute__((used)) static int FUNC_14(struct ishtp_cl_data *VAR_8,
      const struct firmware *VAR_9,
      const struct shim_fw_info VAR_10)
{
 int VAR_11;
 void *VAR_12;
 dma_addr_t VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 struct loader_msg_hdr VAR_17;
 struct loader_xfer_dma_fragment VAR_18;
 struct device *VAR_19 = FUNC_8(VAR_8->cl_device);
 u32 VAR_20 =
  VAR_10.ldr_capability.max_dma_buf_size;







 VAR_16 = FUNC_13(VAR_9->size,
    (size_t)VAR_20,
    (size_t)VAR_7);





 VAR_16 &= ~(VAR_4 - 1);

 VAR_12 = FUNC_10(VAR_16, VAR_3 | VAR_2);
 if (!VAR_12) {
  VAR_8->flag_retry = 1;
  return -VAR_1;
 }

 VAR_13 = FUNC_4(VAR_19, VAR_12, VAR_16,
         VAR_0);
 if (FUNC_5(VAR_19, VAR_13)) {
  FUNC_3(FUNC_0(VAR_8), "DMA map failed\n");
  VAR_8->flag_retry = 1;
  VAR_11 = -VAR_1;
  goto end_err_dma_buf_release;
 }

 VAR_18.fragment.hdr.command = VAR_5;
 VAR_18.fragment.xfer_mode = VAR_6;
 VAR_18.ddr_phys_addr = (u64)VAR_13;


 VAR_14 = 0;
 while (VAR_14 < VAR_9->size) {
  if (VAR_14 + VAR_16 < VAR_9->size) {
   VAR_15 = VAR_16;
   VAR_18.fragment.is_last = 0;
  } else {
   VAR_15 = VAR_9->size - VAR_14;
   VAR_18.fragment.is_last = 1;
  }

  VAR_18.fragment.offset = VAR_14;
  VAR_18.fragment.size = VAR_15;
  FUNC_12(VAR_12, &VAR_9->data[VAR_14], VAR_15);

  FUNC_6(VAR_19, VAR_13,
        VAR_16,
        VAR_0);





  FUNC_1(VAR_12, VAR_16);

  FUNC_2(FUNC_0(VAR_8),
   "xfer_mode=dma offset=0x%08x size=0x%x is_last=%d ddr_phys_addr=0x%016llx\n",
   VAR_18.fragment.offset,
   VAR_18.fragment.size,
   VAR_18.fragment.is_last,
   VAR_18.ddr_phys_addr);

  VAR_11 = FUNC_11(VAR_8,
        (u8 *)&VAR_18,
        sizeof(VAR_18),
        (u8 *)&VAR_17,
        sizeof(VAR_17));
  if (VAR_11 < 0) {
   VAR_8->flag_retry = 1;
   goto end_err_resp_buf_release;
  }

  VAR_14 += VAR_15;
 }

 FUNC_7(VAR_19, VAR_13, VAR_16, VAR_0);
 FUNC_9(VAR_12);
 return 0;

end_err_resp_buf_release:

 FUNC_7(VAR_19, VAR_13, VAR_16, VAR_0);
end_err_dma_buf_release:
 FUNC_9(VAR_12);
 return VAR_11;
}
