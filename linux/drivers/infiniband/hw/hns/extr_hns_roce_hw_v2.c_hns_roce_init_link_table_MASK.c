
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int map; struct hns_roce_link_table_entry* buf; } ;
struct hns_roce_link_table {int npages; int pg_sz; TYPE_2__ table; TYPE_3__* pg_list; } ;
struct hns_roce_v2_priv {struct hns_roce_link_table tpq; struct hns_roce_link_table tsq; } ;
struct hns_roce_link_table_entry {int blk_ba0; int blk_ba1_nxt_ptr; } ;
struct TYPE_5__ {int tsq_buf_pg_sz; int num_qps; int sl_num; int tpq_buf_pg_sz; int num_cqs; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; struct hns_roce_v2_priv* priv; } ;
struct device {int dummy; } ;
typedef enum hns_roce_link_table_type { ____Placeholder_hns_roce_link_table_type } hns_roce_link_table_type ;
typedef int dma_addr_t ;
struct TYPE_7__ {int map; struct hns_roce_link_table_entry* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 void* FUNC_0 (struct device*,int,int*,int ) ;
 int FUNC_1 (struct device*,int,struct hns_roce_link_table_entry*,int) ;
 int FUNC_2 (struct hns_roce_dev*,int) ;
 TYPE_3__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_5,
        enum hns_roce_link_table_type VAR_6)
{
 struct hns_roce_v2_priv *VAR_7 = VAR_5->priv;
 struct hns_roce_link_table *VAR_8;
 struct hns_roce_link_table_entry *VAR_9;
 struct device *VAR_10 = VAR_5->dev;
 u32 VAR_11;
 dma_addr_t VAR_12;
 int VAR_13 = 1;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 switch (VAR_6) {
 case 128:
  VAR_8 = &VAR_7->tsq;
  VAR_11 = 1 << (VAR_5->caps.tsq_buf_pg_sz + VAR_4);
  VAR_14 = VAR_5->caps.num_qps * 8 / VAR_11;
  VAR_15 = VAR_5->caps.sl_num * 4 + 2;
  break;
 case 129:
  VAR_8 = &VAR_7->tpq;
  VAR_11 = 1 << (VAR_5->caps.tpq_buf_pg_sz + VAR_4);
  VAR_14 = VAR_5->caps.num_cqs * 4 / VAR_11;
  VAR_15 = 2 * 4 * VAR_13 + 2;
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = FUNC_5(VAR_14, VAR_15);
 VAR_17 = VAR_16 * sizeof(struct hns_roce_link_table_entry);

 VAR_8->table.buf = FUNC_0(VAR_10, VAR_17,
       &VAR_8->table.map,
       VAR_2);
 if (!VAR_8->table.buf)
  goto out;

 VAR_8->pg_list = FUNC_3(VAR_16, sizeof(*VAR_8->pg_list),
        VAR_2);
 if (!VAR_8->pg_list)
  goto err_kcalloc_failed;

 VAR_9 = VAR_8->table.buf;
 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18) {
  VAR_8->pg_list[VAR_18].buf = FUNC_0(VAR_10, VAR_11,
             &VAR_12, VAR_2);
  if (!VAR_8->pg_list[VAR_18].buf)
   goto err_alloc_buf_failed;

  VAR_8->pg_list[VAR_18].map = VAR_12;

  VAR_9[VAR_18].blk_ba0 = (u32)(VAR_12 >> 12);
  VAR_9[VAR_18].blk_ba1_nxt_ptr = (u32)(VAR_12 >> 44);

  if (VAR_18 < (VAR_16 - 1))
   VAR_9[VAR_18].blk_ba1_nxt_ptr |=
    (VAR_18 + 1) << VAR_3;

 }
 VAR_8->npages = VAR_16;
 VAR_8->pg_sz = VAR_11;

 return FUNC_2(VAR_5, VAR_6);

err_alloc_buf_failed:
 for (VAR_18 -= 1; VAR_18 >= 0; VAR_18--)
  FUNC_1(VAR_10, VAR_11,
      VAR_8->pg_list[VAR_18].buf,
      VAR_8->pg_list[VAR_18].map);
 FUNC_4(VAR_8->pg_list);

err_kcalloc_failed:
 FUNC_1(VAR_10, VAR_17, VAR_8->table.buf,
     VAR_8->table.map);

out:
 return -VAR_1;
}
