
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct file* priv_data; } ;
struct videobuf_dmabuf {int sglen; int sglist; } ;
struct videobuf_buffer {int dummy; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int pci; } ;
struct TYPE_3__ {scalar_t__ baddr; int bsize; int size; scalar_t__ state; int width; int height; int field; } ;
struct saa7146_buf {int activate; TYPE_1__ vb; int * pt; } ;
struct file {struct saa7146_fh* private_data; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct saa7146_dev*,struct videobuf_queue*,struct saa7146_buf*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (struct videobuf_queue*,TYPE_1__*,int *) ;
 struct videobuf_dmabuf* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct videobuf_queue *VAR_5, struct videobuf_buffer *VAR_6,enum v4l2_field VAR_7)
{
 struct file *VAR_8 = VAR_5->priv_data;
 struct saa7146_fh *VAR_9 = VAR_8->private_data;
 struct saa7146_dev *VAR_10 = VAR_9->dev;
 struct saa7146_buf *VAR_11 = (struct saa7146_buf *)VAR_6;

 int VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = 16 * 2 ;
 VAR_14 = VAR_4;
 VAR_15 = VAR_13 * VAR_14;

 FUNC_0("vb:%p\n", VAR_6);

 if (0 != VAR_11->vb.baddr && VAR_11->vb.bsize < VAR_15) {
  FUNC_0("size mismatch\n");
  return -VAR_0;
 }

 if (VAR_11->vb.size != VAR_15)
  FUNC_1(VAR_10,VAR_5,VAR_11);

 if (VAR_1 == VAR_11->vb.state) {
  struct videobuf_dmabuf *VAR_16=FUNC_6(&VAR_11->vb);

  VAR_11->vb.width = VAR_14;
  VAR_11->vb.height = VAR_13;
  VAR_11->vb.size = VAR_15;
  VAR_11->vb.field = VAR_7;

  FUNC_4(VAR_10->pci, &VAR_11->pt[2]);
  FUNC_2(VAR_10->pci, &VAR_11->pt[2]);

  VAR_12 = FUNC_5(VAR_5,&VAR_11->vb, ((void*)0));
  if (VAR_12)
   goto oops;
  VAR_12 = FUNC_3(VAR_10->pci, &VAR_11->pt[2],
       VAR_16->sglist, VAR_16->sglen);
  if (0 != VAR_12)
   return VAR_12;
 }
 VAR_11->vb.state = VAR_2;
 VAR_11->activate = VAR_3;

 return 0;

 oops:
 FUNC_0("error out\n");
 FUNC_1(VAR_10,VAR_5,VAR_11);

 return VAR_12;
}
