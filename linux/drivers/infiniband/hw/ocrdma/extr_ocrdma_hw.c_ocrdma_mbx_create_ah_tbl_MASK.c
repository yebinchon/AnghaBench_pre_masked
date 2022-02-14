
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct pci_dev {int dev; } ;
struct ocrdma_pbe {void* pa_hi; void* pa_lo; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_7__ {int pa; int * va; } ;
struct TYPE_8__ {int size; int pa; int num_ah; int ahid; TYPE_3__ pbl; int * va; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_4__ av_tbl; TYPE_1__ nic_info; } ;
struct ocrdma_create_ah_tbl_rsp {int ahid; } ;
struct ocrdma_create_ah_tbl {int ah_conf; TYPE_2__* tbl_addr; } ;
struct ocrdma_av {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {void* hi; void* lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int *,int,int*,int ) ;
 int FUNC_2 (int *,int,int *,int) ;
 int FUNC_3 (struct ocrdma_create_ah_tbl*) ;
 struct ocrdma_create_ah_tbl* FUNC_4 (int ,int) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_14)
{
 int VAR_15;
 int VAR_16 = -VAR_0;
 int VAR_17;
 struct ocrdma_create_ah_tbl *VAR_18;
 struct ocrdma_create_ah_tbl_rsp *VAR_19;
 struct pci_dev *VAR_20 = VAR_14->nic_info.pdev;
 dma_addr_t VAR_21;
 struct ocrdma_pbe *VAR_22;

 VAR_18 = FUNC_4(VAR_3, sizeof(*VAR_18));
 if (!VAR_18)
  return VAR_16;

 VAR_17 = VAR_10;
 VAR_14->av_tbl.size = sizeof(struct ocrdma_av) * VAR_17;


 VAR_18->ah_conf = (VAR_2 <<
    VAR_7) &
    VAR_6;


 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  if (VAR_13 == (VAR_12 << VAR_15))
   break;
 }
 VAR_18->ah_conf |= (VAR_15 << VAR_9) &
    VAR_8;


 VAR_18->ah_conf |= (sizeof(struct ocrdma_av) <<
    VAR_5) &
    VAR_4;

 VAR_14->av_tbl.pbl.va = FUNC_1(&VAR_20->dev, VAR_13,
      &VAR_14->av_tbl.pbl.pa,
      VAR_1);
 if (VAR_14->av_tbl.pbl.va == ((void*)0))
  goto mem_err;

 VAR_14->av_tbl.va = FUNC_1(&VAR_20->dev, VAR_14->av_tbl.size,
         &VAR_21, VAR_1);
 if (VAR_14->av_tbl.va == ((void*)0))
  goto mem_err_ah;
 VAR_14->av_tbl.pa = VAR_21;
 VAR_14->av_tbl.num_ah = VAR_17;

 VAR_22 = (struct ocrdma_pbe *)VAR_14->av_tbl.pbl.va;
 for (VAR_15 = 0; VAR_15 < VAR_14->av_tbl.size / VAR_12; VAR_15++) {
  VAR_22[VAR_15].pa_lo = (u32)FUNC_0(VAR_21 & 0xffffffff);
  VAR_22[VAR_15].pa_hi = (u32)FUNC_0(FUNC_6(VAR_21));
  VAR_21 += VAR_13;
 }
 VAR_18->tbl_addr[0].lo = (u32)(VAR_14->av_tbl.pbl.pa & 0xFFFFFFFF);
 VAR_18->tbl_addr[0].hi = (u32)FUNC_6(VAR_14->av_tbl.pbl.pa);
 VAR_16 = FUNC_5(VAR_14, (struct ocrdma_mqe *)VAR_18);
 if (VAR_16)
  goto mbx_err;
 VAR_19 = (struct ocrdma_create_ah_tbl_rsp *)VAR_18;
 VAR_14->av_tbl.ahid = VAR_19->ahid & 0xFFFF;
 FUNC_3(VAR_18);
 return 0;

mbx_err:
 FUNC_2(&VAR_20->dev, VAR_14->av_tbl.size, VAR_14->av_tbl.va,
     VAR_14->av_tbl.pa);
 VAR_14->av_tbl.va = ((void*)0);
mem_err_ah:
 FUNC_2(&VAR_20->dev, VAR_13, VAR_14->av_tbl.pbl.va,
     VAR_14->av_tbl.pbl.pa);
 VAR_14->av_tbl.pbl.va = ((void*)0);
 VAR_14->av_tbl.size = 0;
mem_err:
 FUNC_3(VAR_18);
 return VAR_16;
}
