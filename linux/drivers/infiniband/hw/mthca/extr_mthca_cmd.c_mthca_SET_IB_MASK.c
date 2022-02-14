
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_set_ib_param {int si_guid; int cap_mask; scalar_t__ reset_qkey_viol; scalar_t__ set_si_guid; } ;
struct mthca_mailbox {int dma; int * buf; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,int ,int,int ,int ,int ) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;

int FUNC_7(struct mthca_dev *VAR_9, struct mthca_set_ib_param *VAR_10,
   int VAR_11)
{
 struct mthca_mailbox *VAR_12;
 u32 *VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;
 VAR_12 = FUNC_4(VAR_9, VAR_2);
 if (FUNC_0(VAR_12))
  return FUNC_2(VAR_12);
 VAR_13 = VAR_12->buf;

 FUNC_3(VAR_13, 0, 0x40);

 VAR_15 |= VAR_10->set_si_guid ? (1 << 18) : 0;
 VAR_15 |= VAR_10->reset_qkey_viol ? (1 << 0) : 0;
 FUNC_1(VAR_13, VAR_15, 0x00);

 FUNC_1(VAR_13, VAR_10->cap_mask, 0x04);
 FUNC_1(VAR_13, VAR_10->si_guid, 0x08);

 VAR_14 = FUNC_5(VAR_9, VAR_12->dma, VAR_11, 0, VAR_0,
   VAR_1);

 FUNC_6(VAR_9, VAR_12);
 return VAR_14;
}
