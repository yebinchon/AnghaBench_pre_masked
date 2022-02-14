
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_vbi_format {int sampling_rate; int offset; int samples_per_line; int* start; int* count; int sample_format; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct v4l2_ctrl_handler {int error; } ;
struct TYPE_11__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_12__ {int flags; int capability; TYPE_3__ fmt; } ;
struct TYPE_9__ {int * cpu_addr; int dma_handle; } ;
struct saa7146_vv {TYPE_4__ ov_fb; int vbi_read_timeout; struct v4l2_vbi_format vbi_fmt; struct v4l2_pix_format video_fmt; TYPE_2__* standard; TYPE_1__ d_clipping; } ;
struct saa7146_ext_vv {int capabilities; int * core_ops; int vbi_ops; int vid_ops; } ;
struct TYPE_13__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct saa7146_dev {int * vv_callback; struct saa7146_vv* vv_data; struct saa7146_ext_vv* ext_vv_data; TYPE_8__* pci; TYPE_5__ v4l2_dev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_15__ {int (* init ) (struct saa7146_dev*,struct saa7146_vv*) ;} ;
struct TYPE_14__ {int (* init ) (struct saa7146_dev*,struct saa7146_vv*) ;} ;
struct TYPE_10__ {int h_max_out; int v_max_out; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct saa7146_dev*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
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
 int FUNC_2 (struct saa7146_vv*) ;
 struct saa7146_vv* FUNC_3 (int,int ) ;
 int * FUNC_4 (TYPE_8__*,int ,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_7__ VAR_23 ;
 int VAR_24 ;
 TYPE_6__ VAR_25 ;
 int FUNC_5 (struct saa7146_dev*,int ,int) ;
 int FUNC_6 (struct saa7146_dev*,struct saa7146_vv*) ;
 int FUNC_7 (struct saa7146_dev*,struct saa7146_vv*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (struct v4l2_ctrl_handler*) ;
 int FUNC_10 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_11 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_12 (int *,TYPE_5__*) ;
 int VAR_26 ;

int FUNC_13(struct saa7146_dev* VAR_27, struct saa7146_ext_vv *VAR_28)
{
 struct v4l2_ctrl_handler *VAR_29 = &VAR_27->ctrl_handler;
 struct v4l2_pix_format *VAR_30;
 struct v4l2_vbi_format *VAR_31;
 struct saa7146_vv *VAR_32;
 int VAR_33;

 VAR_33 = FUNC_12(&VAR_27->pci->dev, &VAR_27->v4l2_dev);
 if (VAR_33)
  return VAR_33;

 FUNC_10(VAR_29, 6);
 FUNC_11(VAR_29, &VAR_21,
  VAR_8, 0, 255, 1, 128);
 FUNC_11(VAR_29, &VAR_21,
  VAR_9, 0, 127, 1, 64);
 FUNC_11(VAR_29, &VAR_21,
  VAR_11, 0, 127, 1, 64);
 FUNC_11(VAR_29, &VAR_21,
  VAR_12, 0, 1, 1, 0);
 FUNC_11(VAR_29, &VAR_21,
  VAR_10, 0, 1, 1, 0);
 if (VAR_29->error) {
  VAR_33 = VAR_29->error;
  FUNC_9(VAR_29);
  return VAR_33;
 }
 VAR_27->v4l2_dev.ctrl_handler = VAR_29;

 VAR_32 = FUNC_3(sizeof(struct saa7146_vv), VAR_2);
 if (VAR_32 == ((void*)0)) {
  FUNC_1("out of memory. aborting.\n");
  FUNC_9(VAR_29);
  return -VAR_1;
 }
 VAR_28->vid_ops = VAR_24;
 VAR_28->vbi_ops = VAR_22;
 VAR_28->core_ops = &VAR_24;

 FUNC_0("dev:%p\n", VAR_27);


 FUNC_5(VAR_27, VAR_0, 0x80400040);


 FUNC_5(VAR_27, VAR_5, (VAR_3 | VAR_4));




 VAR_27->ext_vv_data = VAR_28;

 VAR_32->d_clipping.cpu_addr =
  FUNC_4(VAR_27->pci, VAR_6,
          &VAR_32->d_clipping.dma_handle);
 if( ((void*)0) == VAR_32->d_clipping.cpu_addr ) {
  FUNC_1("out of memory. aborting.\n");
  FUNC_2(VAR_32);
  FUNC_9(VAR_29);
  return -1;
 }

 VAR_25.init(VAR_27,VAR_32);
 if (VAR_27->ext_vv_data->capabilities & VAR_7)
  VAR_23.init(VAR_27,VAR_32);

 VAR_32->ov_fb.fmt.width = VAR_32->standard->h_max_out;
 VAR_32->ov_fb.fmt.height = VAR_32->standard->v_max_out;
 VAR_32->ov_fb.fmt.pixelformat = VAR_20;
 VAR_32->ov_fb.fmt.bytesperline = 2 * VAR_32->ov_fb.fmt.width;
 VAR_32->ov_fb.fmt.sizeimage = VAR_32->ov_fb.fmt.bytesperline * VAR_32->ov_fb.fmt.height;
 VAR_32->ov_fb.fmt.colorspace = VAR_14;

 VAR_30 = &VAR_32->video_fmt;
 VAR_30->width = 384;
 VAR_30->height = 288;
 VAR_30->pixelformat = VAR_18;
 VAR_30->field = VAR_17;
 VAR_30->colorspace = VAR_13;
 VAR_30->bytesperline = 3 * VAR_30->width;
 VAR_30->sizeimage = VAR_30->bytesperline * VAR_30->height;

 VAR_31 = &VAR_32->vbi_fmt;
 VAR_31->sampling_rate = 27000000;
 VAR_31->offset = 248;
 VAR_31->samples_per_line = 720 * 2;
 VAR_31->sample_format = VAR_19;


 VAR_31->start[0] = 5;
 VAR_31->count[0] = 16;
 VAR_31->start[1] = 312;
 VAR_31->count[1] = 16;

 FUNC_8(&VAR_32->vbi_read_timeout, ((void*)0), 0);

 VAR_32->ov_fb.capability = VAR_15;
 VAR_32->ov_fb.flags = VAR_16;
 VAR_27->vv_data = VAR_32;
 VAR_27->vv_callback = &VAR_26;

 return 0;
}
