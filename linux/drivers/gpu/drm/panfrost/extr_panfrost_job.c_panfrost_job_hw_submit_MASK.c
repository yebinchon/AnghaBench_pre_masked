
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct panfrost_job {int jc; int flush_id; int requirements; TYPE_1__* file_priv; struct panfrost_device* pfdev; } ;
struct panfrost_device {int dev; } ;
struct TYPE_2__ {int mmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,struct panfrost_job*,int,int) ;
 int FUNC_8 (struct panfrost_device*,int ) ;
 int FUNC_9 (struct panfrost_device*,int ,int) ;
 int FUNC_10 (struct panfrost_device*,int) ;
 scalar_t__ FUNC_11 (struct panfrost_device*,int ) ;
 scalar_t__ FUNC_12 (struct panfrost_device*,int ) ;
 int FUNC_13 (struct panfrost_device*,int ,int) ;
 int FUNC_14 (struct panfrost_device*,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct panfrost_job *VAR_7, int VAR_8)
{
 struct panfrost_device *VAR_9 = VAR_7->pfdev;
 u32 VAR_10;
 u64 VAR_11 = VAR_7->jc;
 int VAR_12;

 VAR_12 = FUNC_15(VAR_9->dev);
 if (VAR_12 < 0)
  return;

 if (FUNC_6(FUNC_8(VAR_9, FUNC_0(VAR_8)))) {
  FUNC_16(VAR_9->dev);
  return;
 }

 VAR_10 = FUNC_14(VAR_9, &VAR_7->file_priv->mmu);

 FUNC_10(VAR_9, VAR_8);

 FUNC_9(VAR_9, FUNC_5(VAR_8), VAR_11 & 0xFFFFFFFF);
 FUNC_9(VAR_9, FUNC_4(VAR_8), VAR_11 >> 32);

 FUNC_13(VAR_9, VAR_7->requirements, VAR_8);



 VAR_10 |= FUNC_2(8) |
  VAR_5 |
  VAR_4;

 if (FUNC_11(VAR_9, VAR_0))
  VAR_10 |= VAR_3;

 if (FUNC_12(VAR_9, VAR_1))
  VAR_10 |= VAR_6;

 FUNC_9(VAR_9, FUNC_1(VAR_8), VAR_10);

 if (FUNC_11(VAR_9, VAR_0))
  FUNC_9(VAR_9, FUNC_3(VAR_8), VAR_7->flush_id);


 FUNC_7(VAR_9->dev, "JS: Submitting atom %p to js[%d] with head=0x%llx",
    VAR_7, VAR_8, VAR_11);

 FUNC_9(VAR_9, FUNC_0(VAR_8), VAR_2);
}
