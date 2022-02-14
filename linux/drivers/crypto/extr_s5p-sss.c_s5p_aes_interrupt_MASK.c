
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_aes_dev {int busy; int hash_tasklet; int lock; int hash_sg_iter; struct ablkcipher_request* req; int sg_src; int sg_dst; int tasklet; int hash_flags; } ;
struct platform_device {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct s5p_aes_dev*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct s5p_aes_dev*,int ,int) ;
 struct s5p_aes_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct ablkcipher_request*,int) ;
 int FUNC_4 (struct s5p_aes_dev*) ;
 int FUNC_5 (struct s5p_aes_dev*) ;
 int FUNC_6 (struct s5p_aes_dev*) ;
 int FUNC_7 (struct s5p_aes_dev*,int ,int) ;
 int FUNC_8 (struct s5p_aes_dev*,int ) ;
 int FUNC_9 (struct s5p_aes_dev*,int ) ;
 int FUNC_10 (struct s5p_aes_dev*,int ) ;
 int FUNC_11 (struct s5p_aes_dev*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_14, void *VAR_15)
{
 struct platform_device *VAR_16 = VAR_15;
 struct s5p_aes_dev *VAR_17 = FUNC_2(VAR_16);
 struct ablkcipher_request *VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 unsigned long VAR_24;
 u32 VAR_25, VAR_26;
 int VAR_27;

 FUNC_14(&VAR_17->lock, VAR_24);
 VAR_25 = FUNC_0(VAR_17, VAR_1);
 if (VAR_25 & VAR_4)
  VAR_20 = FUNC_4(VAR_17);

 if (VAR_25 & VAR_5) {
  if (FUNC_13(VAR_17->sg_dst))
   VAR_22 = 1;
  VAR_19 = FUNC_5(VAR_17);
 }

 if (VAR_25 & VAR_8)
  VAR_21 = FUNC_6(VAR_17);

 VAR_26 = VAR_25 & (VAR_4 | VAR_5 |
    VAR_8);

 FUNC_1(VAR_17, VAR_0, VAR_26);


 if (VAR_25 & (VAR_6 | VAR_7)) {

  if (VAR_25 & VAR_7)
   VAR_26 = VAR_11;

  if (VAR_25 & VAR_6)
   VAR_26 = VAR_10;

  FUNC_12(VAR_2, &VAR_17->hash_flags);
  FUNC_7(VAR_17, VAR_13, VAR_26);
  VAR_23 = 1;

  VAR_21 = 0;
 }

 if (VAR_20 < 0) {
  VAR_27 = VAR_20;
  goto error;
 }
 if (VAR_19 < 0) {
  VAR_27 = VAR_19;
  goto error;
 }

 if (VAR_22) {
  FUNC_11(VAR_17);
  if (VAR_21 == 1)
   FUNC_8(VAR_17, VAR_17->hash_sg_iter);

  FUNC_15(&VAR_17->lock, VAR_24);

  FUNC_3(VAR_17->req, 0);

  FUNC_16(&VAR_17->tasklet);
 } else {






  if (VAR_19 == 1)
   FUNC_10(VAR_17, VAR_17->sg_dst);
  if (VAR_20 == 1)
   FUNC_9(VAR_17, VAR_17->sg_src);
  if (VAR_21 == 1)
   FUNC_8(VAR_17, VAR_17->hash_sg_iter);

  FUNC_15(&VAR_17->lock, VAR_24);
 }

 goto hash_irq_end;

error:
 FUNC_11(VAR_17);
 VAR_17->busy = 0;
 VAR_18 = VAR_17->req;
 if (VAR_21 == 1)
  FUNC_8(VAR_17, VAR_17->hash_sg_iter);

 FUNC_15(&VAR_17->lock, VAR_24);
 FUNC_3(VAR_18, VAR_27);

hash_irq_end:





 if (VAR_23)
  FUNC_16(&VAR_17->hash_tasklet);
 else if (VAR_21 == 2)
  FUNC_7(VAR_17, VAR_12,
          VAR_9);

 return VAR_3;
}
