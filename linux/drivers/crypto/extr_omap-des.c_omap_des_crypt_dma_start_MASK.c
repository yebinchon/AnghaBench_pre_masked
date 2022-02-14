
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_des_dev {int out_sg_len; int out_sg; int dev; int in_sg_len; int in_sg; int pio_only; int total; int req; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct crypto_tfm* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct crypto_tfm*,int ,int ,int ,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct omap_des_dev *VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_1(
     FUNC_0(VAR_3->req));
 int VAR_5;

 FUNC_6("total: %d\n", VAR_3->total);

 if (!VAR_3->pio_only) {
  VAR_5 = FUNC_3(VAR_3->dev, VAR_3->in_sg, VAR_3->in_sg_len,
     VAR_1);
  if (!VAR_5) {
   FUNC_2(VAR_3->dev, "dma_map_sg() error\n");
   return -VAR_2;
  }

  VAR_5 = FUNC_3(VAR_3->dev, VAR_3->out_sg, VAR_3->out_sg_len,
     VAR_0);
  if (!VAR_5) {
   FUNC_2(VAR_3->dev, "dma_map_sg() error\n");
   return -VAR_2;
  }
 }

 VAR_5 = FUNC_5(VAR_4, VAR_3->in_sg, VAR_3->out_sg, VAR_3->in_sg_len,
     VAR_3->out_sg_len);
 if (VAR_5 && !VAR_3->pio_only) {
  FUNC_4(VAR_3->dev, VAR_3->in_sg, VAR_3->in_sg_len, VAR_1);
  FUNC_4(VAR_3->dev, VAR_3->out_sg, VAR_3->out_sg_len,
        VAR_0);
 }

 return VAR_5;
}
