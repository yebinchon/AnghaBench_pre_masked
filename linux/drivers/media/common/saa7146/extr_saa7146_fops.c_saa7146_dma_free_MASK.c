
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {int dummy; } ;
struct saa7146_dev {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct saa7146_buf {TYPE_1__ vb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct saa7146_dev*,struct saa7146_buf*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct videobuf_dmabuf*) ;
 int FUNC_4 (int ,struct videobuf_dmabuf*) ;
 struct videobuf_dmabuf* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct videobuf_queue*,TYPE_1__*,int ,int ) ;

void FUNC_7(struct saa7146_dev *VAR_1,struct videobuf_queue *VAR_2,
      struct saa7146_buf *VAR_3)
{
 struct videobuf_dmabuf *VAR_4=FUNC_5(&VAR_3->vb);
 FUNC_1("dev:%p, buf:%p\n", VAR_1, VAR_3);

 FUNC_0(FUNC_2());

 FUNC_6(VAR_2, &VAR_3->vb, 0, 0);
 FUNC_4(VAR_2->dev, VAR_4);
 FUNC_3(VAR_4);
 VAR_3->vb.state = VAR_0;
}
