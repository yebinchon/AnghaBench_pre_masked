
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_vv {int video_status; struct saa7146_fh* video_fh; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct saa7146_dev*,struct saa7146_fh*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct saa7146_fh*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct saa7146_fh*) ;
 int FUNC_4 (struct saa7146_fh*,int) ;

int FUNC_5(struct saa7146_fh *VAR_4)
{
 struct saa7146_dev *VAR_5 = VAR_4->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;

 FUNC_1("dev:%p, fh:%p\n", VAR_5, VAR_4);


 if (FUNC_2(VAR_4) != 0) {
  FUNC_0("streaming capture is active\n");
  return -VAR_0;
 }


 if ((VAR_6->video_status & VAR_3) == 0) {
  FUNC_0("no active overlay\n");
  return 0;
 }

 if (VAR_6->video_fh != VAR_4) {
  FUNC_0("overlay is active, but in another open\n");
  return -VAR_0;
 }

 VAR_6->video_status = 0;
 VAR_6->video_fh = ((void*)0);

 FUNC_3(VAR_4);

 FUNC_4(VAR_4, VAR_1|VAR_2);

 return 0;
}
