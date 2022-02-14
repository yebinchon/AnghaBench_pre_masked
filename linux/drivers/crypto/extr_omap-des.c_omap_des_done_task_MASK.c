
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_des_dev {int flags; int total_save; int * orig_out; int out_sgl; int in_sgl; int out_sg_len; int out_sg; int dev; int in_sg_len; int in_sg; int pio_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct omap_des_dev*) ;
 int FUNC_4 (struct omap_des_dev*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 struct omap_des_dev *VAR_5 = (struct omap_des_dev *)VAR_4;

 FUNC_5("enter done_task\n");

 if (!VAR_5->pio_only) {
  FUNC_0(VAR_5->dev, VAR_5->out_sg, VAR_5->out_sg_len,
           VAR_0);
  FUNC_1(VAR_5->dev, VAR_5->in_sg, VAR_5->in_sg_len, VAR_1);
  FUNC_1(VAR_5->dev, VAR_5->out_sg, VAR_5->out_sg_len,
        VAR_0);
  FUNC_3(VAR_5);
 }

 FUNC_2(&VAR_5->in_sgl, ((void*)0), 0, VAR_5->total_save,
       VAR_2, VAR_5->flags);

 FUNC_2(&VAR_5->out_sgl, VAR_5->orig_out, 0, VAR_5->total_save,
       VAR_3, VAR_5->flags);

 FUNC_4(VAR_5, 0);

 FUNC_5("exit\n");
}
