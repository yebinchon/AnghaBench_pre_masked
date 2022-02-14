
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ishtp_msg_hdr {unsigned int length; } ;
struct ishtp_device {scalar_t__ ishtp_host_dma_rx_buf_phys; scalar_t__ ishtp_host_dma_rx_buf_size; void* ishtp_host_dma_rx_buf; int devc; int ishtp_msg_hdr; } ;
struct dma_xfer_hbm {scalar_t__ msg_addr; scalar_t__ msg_length; int hbm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_msg_hdr*,unsigned int) ;
 int FUNC_2 (struct ishtp_device*,struct ishtp_msg_hdr*,unsigned char*) ;
 int FUNC_3 (struct ishtp_device*,void*,struct dma_xfer_hbm*) ;

__attribute__((used)) static void FUNC_4(struct ishtp_device *VAR_1,
          struct dma_xfer_hbm *VAR_2)
{
 void *VAR_3;
 uint64_t VAR_4;
 struct ishtp_msg_hdr VAR_5;
 struct ishtp_msg_hdr *VAR_6 =
  (struct ishtp_msg_hdr *) &VAR_1->ishtp_msg_hdr;
 struct dma_xfer_hbm *VAR_7 = VAR_2;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->length;
  VAR_8 += sizeof(struct dma_xfer_hbm)) {

  VAR_4 = VAR_2->msg_addr - VAR_1->ishtp_host_dma_rx_buf_phys;
  if (VAR_4 > VAR_1->ishtp_host_dma_rx_buf_size) {
   FUNC_0(VAR_1->devc, "Bad DMA Rx message address\n");
   return;
  }
  if (VAR_2->msg_length >
    VAR_1->ishtp_host_dma_rx_buf_size - VAR_4) {
   FUNC_0(VAR_1->devc, "Bad DMA Rx message size\n");
   return;
  }
  VAR_3 = VAR_1->ishtp_host_dma_rx_buf + VAR_4;
  FUNC_3(VAR_1, VAR_3, VAR_2);
  VAR_2->hbm = VAR_0;
  ++VAR_2;
 }


 FUNC_1(&VAR_5, VAR_6->length);
 FUNC_2(VAR_1, &VAR_5, (unsigned char *)VAR_7);
}
