
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; int flags; void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;
struct st33zp24_phy_ops {int (* send ) (void*,scalar_t__,int*,int) ;} ;
struct st33zp24_dev {int irq; void* phy_id; struct st33zp24_phy_ops const* ops; scalar_t__ intrs; int read_queue; scalar_t__ locality; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct tpm_chip*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct st33zp24_dev*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct st33zp24_dev*) ;
 struct st33zp24_dev* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,struct tpm_chip*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct tpm_chip*) ;
 int VAR_13 ;
 int FUNC_12 (void*,scalar_t__,int*,int) ;
 int FUNC_13 (void*,scalar_t__,int*,int) ;
 int FUNC_14 (struct tpm_chip*) ;
 int VAR_14 ;
 struct tpm_chip* FUNC_15 (struct device*,int *) ;

int FUNC_16(void *VAR_15, const struct st33zp24_phy_ops *VAR_16,
     struct device *VAR_17, int VAR_18, int VAR_19)
{
 int VAR_20;
 u8 VAR_21 = 0;
 struct tpm_chip *VAR_22;
 struct st33zp24_dev *VAR_23;

 VAR_22 = FUNC_15(VAR_17, &VAR_13);
 if (FUNC_0(VAR_22))
  return FUNC_1(VAR_22);

 VAR_23 = FUNC_6(VAR_17, sizeof(struct st33zp24_dev),
          VAR_2);
 if (!VAR_23)
  return -VAR_1;

 VAR_23->phy_id = VAR_15;
 VAR_23->ops = VAR_16;
 FUNC_5(&VAR_22->dev, VAR_23);

 VAR_22->timeout_a = FUNC_10(VAR_6);
 VAR_22->timeout_b = FUNC_10(VAR_5);
 VAR_22->timeout_c = FUNC_10(VAR_6);
 VAR_22->timeout_d = FUNC_10(VAR_6);

 VAR_23->locality = VAR_4;

 if (VAR_18) {

  FUNC_9(&VAR_23->read_queue);
  VAR_23->intrs = 0;

  if (FUNC_11(VAR_22) != VAR_4) {
   VAR_20 = -VAR_0;
   goto _tpm_clean_answer;
  }

  FUNC_2(VAR_23);
  VAR_20 = FUNC_7(VAR_17, VAR_18, VAR_14,
    VAR_3, "TPM SERIRQ management",
    VAR_22);
  if (VAR_20 < 0) {
   FUNC_3(&VAR_22->dev, "TPM SERIRQ signals %d not available\n",
    VAR_18);
   goto _tpm_clean_answer;
  }

  VAR_21 |= VAR_9
   | VAR_11
   | VAR_10;

  VAR_20 = VAR_23->ops->send(VAR_23->phy_id, VAR_12,
      &VAR_21, 1);
  if (VAR_20 < 0)
   goto _tpm_clean_answer;

  VAR_21 = VAR_8;
  VAR_20 = VAR_23->ops->send(VAR_23->phy_id, (VAR_12 + 3),
      &VAR_21, 1);
  if (VAR_20 < 0)
   goto _tpm_clean_answer;

  VAR_23->irq = VAR_18;
  VAR_22->flags |= VAR_7;

  FUNC_8(VAR_23->irq);
 }

 return FUNC_14(VAR_22);
_tpm_clean_answer:
 FUNC_4(&VAR_22->dev, "TPM initialization fail\n");
 return VAR_20;
}
