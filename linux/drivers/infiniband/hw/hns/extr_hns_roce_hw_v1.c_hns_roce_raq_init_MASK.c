
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_raq_table {TYPE_2__* e_raq_buf; } ;
struct hns_roce_v1_priv {struct hns_roce_raq_table raq_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_5__ {int map; int buf; } ;
struct TYPE_4__ {struct device dev; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int,int*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hns_roce_dev*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int) ;
 int FUNC_10 (struct hns_roce_dev*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct hns_roce_dev *VAR_24)
{
 int VAR_25;
 u32 VAR_26;
 __le32 VAR_27;
 int VAR_28 = 0;
 dma_addr_t VAR_29;
 struct hns_roce_v1_priv *VAR_30;
 struct hns_roce_raq_table *VAR_31;
 struct device *VAR_32 = &VAR_24->pdev->dev;

 VAR_30 = (struct hns_roce_v1_priv *)VAR_24->priv;
 VAR_31 = &VAR_30->raq_table;

 VAR_31->e_raq_buf = FUNC_5(sizeof(*(VAR_31->e_raq_buf)), VAR_1);
 if (!VAR_31->e_raq_buf)
  return -VAR_0;

 VAR_31->e_raq_buf->buf = FUNC_2(VAR_32, VAR_4,
       &VAR_29, VAR_1);
 if (!VAR_31->e_raq_buf->buf) {
  VAR_25 = -VAR_0;
  goto err_dma_alloc_raq;
 }
 VAR_31->e_raq_buf->map = VAR_29;


 FUNC_10(VAR_24, VAR_11, VAR_31->e_raq_buf->map >> 12);


 VAR_28 = FUNC_3(VAR_4 / VAR_3);
 VAR_26 = FUNC_7(VAR_24, VAR_10);
 VAR_27 = FUNC_0(VAR_26);
 FUNC_9(VAR_27, VAR_8,
         VAR_9, VAR_28);





 FUNC_9(VAR_27, VAR_6,
         VAR_7,
         VAR_31->e_raq_buf->map >> 44);
 VAR_26 = FUNC_6(VAR_27);
 FUNC_10(VAR_24, VAR_10, VAR_26);
 FUNC_1(VAR_32, "Configure raq_shift 0x%x.\n", VAR_26);


 VAR_26 = FUNC_7(VAR_24, VAR_14);
 VAR_27 = FUNC_0(VAR_26);
 FUNC_9(VAR_27, VAR_15,
         VAR_16,
         VAR_2);
 VAR_26 = FUNC_6(VAR_27);
 FUNC_10(VAR_24, VAR_14, VAR_26);
 FUNC_1(VAR_32, "Configure raq_wl 0x%x.\n", VAR_26);


 VAR_26 = FUNC_7(VAR_24, VAR_17);
 VAR_27 = FUNC_0(VAR_26);
 FUNC_9(VAR_27,
         VAR_19,
         VAR_20,
         VAR_5);
 FUNC_8(VAR_27, VAR_18, 1);
 FUNC_9(VAR_27,
         VAR_21,
         VAR_22,
         2);
 FUNC_8(VAR_27,
       VAR_23, 1);
 VAR_26 = FUNC_6(VAR_27);
 FUNC_10(VAR_24, VAR_17, VAR_26);
 FUNC_1(VAR_32, "Configure WrmsPolTimeInterval 0x%x.\n", VAR_26);


 VAR_26 = FUNC_7(VAR_24, VAR_12);
 VAR_27 = FUNC_0(VAR_26);
 FUNC_8(VAR_27, VAR_13, 1);
 VAR_26 = FUNC_6(VAR_27);
 FUNC_10(VAR_24, VAR_12, VAR_26);
 FUNC_1(VAR_32, "Configure GlbCfg = 0x%x.\n", VAR_26);

 return 0;

err_dma_alloc_raq:
 FUNC_4(VAR_31->e_raq_buf);
 return VAR_25;
}
