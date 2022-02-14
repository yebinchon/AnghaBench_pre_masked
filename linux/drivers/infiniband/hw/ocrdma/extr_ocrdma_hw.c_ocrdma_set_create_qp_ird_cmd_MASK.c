
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ocrdma_qp {scalar_t__ ird_q_va; struct ocrdma_pd* pd; } ;
struct TYPE_4__ {int device; } ;
struct ocrdma_pd {TYPE_1__ ibpd; } ;
struct ocrdma_hdr_wqe {int cw; } ;
struct TYPE_6__ {int ird_page_size; int num_ird_pages; scalar_t__ ird; int rqe_size; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_3__ attr; TYPE_2__ nic_info; } ;
struct ocrdma_create_qp_req {int * ird_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int,int *,int ) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_create_qp_req *VAR_6,
     struct ocrdma_qp *VAR_7)
{
 struct ocrdma_pd *VAR_8 = VAR_7->pd;
 struct ocrdma_dev *VAR_9 = FUNC_1(VAR_8->ibpd.device);
 struct pci_dev *VAR_10 = VAR_9->nic_info.pdev;
 dma_addr_t VAR_11 = 0;
 int VAR_12 = VAR_9->attr.ird_page_size;
 int VAR_13 = VAR_9->attr.num_ird_pages * VAR_12;
 struct ocrdma_hdr_wqe *VAR_14;
 int VAR_15 = 0;

 if (VAR_9->attr.ird == 0)
  return 0;

 VAR_7->ird_q_va = FUNC_0(&VAR_10->dev, VAR_13, &VAR_11,
       VAR_1);
 if (!VAR_7->ird_q_va)
  return -VAR_0;
 FUNC_2(&VAR_6->ird_addr[0], VAR_9->attr.num_ird_pages,
        VAR_11, VAR_12);
 for (; VAR_15 < VAR_13 / VAR_9->attr.rqe_size; VAR_15++) {
  VAR_14 = (struct ocrdma_hdr_wqe *)(VAR_7->ird_q_va +
   (VAR_15 * VAR_9->attr.rqe_size));
  VAR_14->cw = 0;
  VAR_14->cw |= 2;
  VAR_14->cw |= (VAR_2 << VAR_5);
  VAR_14->cw |= (8 << VAR_4);
  VAR_14->cw |= (8 << VAR_3);
 }
 return 0;
}
