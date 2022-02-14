
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_crypto_info {int lock; int done_task; int err; int dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct rk_crypto_info*,int ) ;
 int FUNC_1 (struct rk_crypto_info*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 struct rk_crypto_info* FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct rk_crypto_info *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6;

 FUNC_4(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_2, VAR_6);

 if (VAR_6 & 0x0a) {
  FUNC_2(VAR_5->dev, "DMA Error\n");
  VAR_5->err = -VAR_0;
 }
 FUNC_6(&VAR_5->done_task);

 FUNC_5(&VAR_5->lock);
 return VAR_1;
}
