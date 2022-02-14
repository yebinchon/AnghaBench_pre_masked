
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int height; int top; int left; int width; } ;
struct TYPE_6__ {int field; TYPE_1__ w; } ;
struct TYPE_7__ {TYPE_2__ win; } ;
struct saa7146_vv {TYPE_4__* ov_fmt; TYPE_3__ ov; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct TYPE_8__ {int trans; int pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7146_fh*) ;
 int FUNC_1 (struct saa7146_dev*,int ) ;
 int FUNC_2 (struct saa7146_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ,int ,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ,int) ;

int FUNC_5(struct saa7146_fh *VAR_3)
{
 struct saa7146_dev *VAR_4 = VAR_3->dev;
 struct saa7146_vv *VAR_5 = VAR_4->vv_data;

 FUNC_3(VAR_4, VAR_5->ov.win.w.width, VAR_5->ov.win.w.height, VAR_5->ov.win.field);
 FUNC_2(VAR_4, VAR_5->ov.win.w.left, VAR_5->ov.win.w.top, VAR_5->ov.win.w.height, VAR_5->ov.win.field, VAR_5->ov_fmt->pixelformat);
 FUNC_1(VAR_4, VAR_5->ov_fmt->trans);
 FUNC_0(VAR_3);


 FUNC_4(VAR_4, VAR_2, (VAR_0 | VAR_1));
 return 0;
}
