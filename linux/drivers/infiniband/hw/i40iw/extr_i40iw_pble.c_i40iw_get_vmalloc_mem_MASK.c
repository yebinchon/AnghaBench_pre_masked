
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct page {int dummy; } ;
struct i40iw_hw {scalar_t__ dev_context; } ;
struct i40iw_chunk {int size; int pg_cnt; int type; int * dmaaddrs; scalar_t__ vaddr; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i40iw_hw*,struct i40iw_chunk*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct page* FUNC_6 (void*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_hw *VAR_5,
          struct i40iw_chunk *VAR_6,
          int VAR_7)
{
 struct pci_dev *VAR_8 = (struct pci_dev *)VAR_5->dev_context;
 struct page *VAR_9;
 u8 *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_6->dmaaddrs = FUNC_4(VAR_7 << 3, VAR_1);
 if (!VAR_6->dmaaddrs)
  return VAR_2;
 VAR_11 = VAR_4 * VAR_7;
 VAR_6->vaddr = FUNC_5(VAR_11);
 if (!VAR_6->vaddr) {
  FUNC_3(VAR_6->dmaaddrs);
  VAR_6->dmaaddrs = ((void*)0);
  return VAR_2;
 }
 VAR_6->size = VAR_11;
 VAR_10 = (u8 *)VAR_6->vaddr;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_9 = FUNC_6((void *)VAR_10);
  if (!VAR_9)
   break;
  VAR_6->dmaaddrs[VAR_12] = FUNC_0(&VAR_8->dev, VAR_9, 0,
        VAR_4, VAR_0);
  if (FUNC_1(&VAR_8->dev, VAR_6->dmaaddrs[VAR_12]))
   break;
  VAR_10 += VAR_4;
 }

 VAR_6->pg_cnt = VAR_12;
 VAR_6->type = VAR_3;
 if (VAR_12 == VAR_7)
  return 0;

 FUNC_2(VAR_5, VAR_6);
 return VAR_2;
}
