
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_mr {int pbl_size; int pbl_hop_num; int pbl_buf_pg_sz; int pbl_ba_pg_sz; int pbl_dma_addr; int pbl_ba; int pbl_buf; } ;
struct TYPE_2__ {int pbl_buf_pg_sz; int pbl_ba_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_3, int VAR_4,
          struct hns_roce_mr *VAR_5, u32 VAR_6)
{
 struct device *VAR_7 = VAR_3->dev;

 if (VAR_4 > VAR_6 / 8) {
  FUNC_0(VAR_7, "npages %d is larger than buf_pg_sz!",
   VAR_4);
  return -VAR_0;
 }
 VAR_5->pbl_buf = FUNC_1(VAR_7, VAR_4 * 8,
      &(VAR_5->pbl_dma_addr),
      VAR_2);
 if (!VAR_5->pbl_buf)
  return -VAR_1;

 VAR_5->pbl_size = VAR_4;
 VAR_5->pbl_ba = VAR_5->pbl_dma_addr;
 VAR_5->pbl_hop_num = 1;
 VAR_5->pbl_ba_pg_sz = VAR_3->caps.pbl_ba_pg_sz;
 VAR_5->pbl_buf_pg_sz = VAR_3->caps.pbl_buf_pg_sz;
 return 0;

}
