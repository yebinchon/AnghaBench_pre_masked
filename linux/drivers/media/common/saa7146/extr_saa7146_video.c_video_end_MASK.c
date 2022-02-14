
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pixelformat; } ;
struct saa7146_dmaqueue {scalar_t__ curr; } ;
struct saa7146_vv {int video_status; int * ov_suspend; struct saa7146_fh* video_fh; TYPE_1__ video_fmt; struct saa7146_dmaqueue video_dmaq; } ;
struct saa7146_format {int flags; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct saa7146_dev*,struct saa7146_fh*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_3 (struct saa7146_dev*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct saa7146_dev*,struct saa7146_dmaqueue*,int ) ;
 struct saa7146_format* FUNC_5 (struct saa7146_dev*,int ) ;
 int FUNC_6 (struct saa7146_fh*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct saa7146_dev*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct saa7146_fh *VAR_13, struct file *VAR_14)
{
 struct saa7146_dev *VAR_15 = VAR_13->dev;
 struct saa7146_vv *VAR_16 = VAR_15->vv_data;
 struct saa7146_dmaqueue *VAR_17 = &VAR_16->video_dmaq;
 struct saa7146_format *VAR_18 = ((void*)0);
 unsigned long VAR_19;
 unsigned int VAR_20;
 u32 VAR_21 = 0;
 FUNC_1("dev:%p, fh:%p\n", VAR_15, VAR_13);

 if ((VAR_16->video_status & VAR_11) != VAR_11) {
  FUNC_2("not capturing\n");
  return 0;
 }

 if (VAR_16->video_fh != VAR_13) {
  FUNC_2("capturing, but in another open\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_5(VAR_15, VAR_16->video_fmt.pixelformat);

 FUNC_0(((void*)0) == VAR_18);

 if (0 != (VAR_18->flags & VAR_1)) {
  VAR_20 = VAR_8|VAR_9|VAR_10;
  VAR_21 = VAR_4 | VAR_3 | VAR_2;
 } else {
  VAR_20 = VAR_8;
  VAR_21 = VAR_4;
 }
 FUNC_9(&VAR_15->slock,VAR_19);


 FUNC_8(VAR_15, VAR_7, VAR_6);


 FUNC_3(VAR_15, VAR_5);


 FUNC_8(VAR_15, VAR_7, VAR_21);

 if (VAR_17->curr)
  FUNC_4(VAR_15, VAR_17, VAR_12);

 FUNC_10(&VAR_15->slock, VAR_19);

 VAR_16->video_fh = ((void*)0);
 VAR_16->video_status = 0;

 FUNC_6(VAR_13, VAR_20);

 if (VAR_16->ov_suspend != ((void*)0)) {
  FUNC_7(VAR_16->ov_suspend);
  VAR_16->ov_suspend = ((void*)0);
 }

 return 0;
}
