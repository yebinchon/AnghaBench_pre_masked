
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct tpm_chip {int flags; TYPE_1__* ops; int dev; } ;
struct st33zp24_dev {scalar_t__ intrs; int irq; } ;
struct TYPE_2__ {int (* status ) (struct tpm_chip*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct st33zp24_dev*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct st33zp24_dev* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned long VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (struct tpm_chip*) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int ,int,unsigned long) ;
 int FUNC_11 (struct tpm_chip*,int,int,int*) ;

__attribute__((used)) static int FUNC_12(struct tpm_chip *VAR_8, u8 VAR_9, unsigned long VAR_10,
   wait_queue_head_t *VAR_11, bool VAR_12)
{
 struct st33zp24_dev *VAR_13 = FUNC_2(&VAR_8->dev);
 unsigned long VAR_14;
 int VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17;
 u32 VAR_18;
 u8 VAR_19;


 VAR_19 = FUNC_7(VAR_8);
 if ((VAR_19 & VAR_9) == VAR_9)
  return 0;

 VAR_14 = VAR_7 + VAR_10;

 if (VAR_8->flags & VAR_4) {
  VAR_18 = VAR_13->intrs;
  FUNC_0(VAR_13);
  FUNC_4(VAR_13->irq);

  do {
   if (VAR_15 == -VAR_1 && FUNC_5(VAR_6))
    FUNC_1(VAR_3);

   VAR_10 = VAR_14 - VAR_7;
   if ((long) VAR_10 <= 0)
    return -1;

   VAR_15 = FUNC_10(*VAR_11,
      VAR_18 != VAR_13->intrs,
      VAR_10);
   FUNC_0(VAR_13);
   VAR_17 = FUNC_11(VAR_8, VAR_9,
      VAR_12, &VAR_16);
   if (VAR_15 >= 0 && VAR_17) {
    if (VAR_16)
     return -VAR_0;
    return 0;
   }
  } while (VAR_15 == -VAR_1 && FUNC_5(VAR_6));

  FUNC_3(VAR_13->irq);

 } else {
  do {
   FUNC_6(VAR_5);
   VAR_19 = VAR_8->ops->status(VAR_8);
   if ((VAR_19 & VAR_9) == VAR_9)
    return 0;
  } while (FUNC_9(VAR_7, VAR_14));
 }

 return -VAR_2;
}
