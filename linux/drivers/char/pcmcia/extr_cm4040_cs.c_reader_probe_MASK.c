
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_dev {int poll_timer; int write_wait; int read_wait; int poll_wait; int devq; struct pcmcia_device* p_dev; scalar_t__ buffer_status; int timeout; } ;
struct pcmcia_device {struct reader_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcmcia_device** VAR_7 ;
 int FUNC_1 (int ,int *,int ,int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct reader_dev*) ;
 struct reader_dev* FUNC_4 (int,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct pcmcia_device*,int) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_9)
{
 struct reader_dev *VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (VAR_7[VAR_11] == ((void*)0))
   break;
 }

 if (VAR_11 == VAR_1)
  return -VAR_2;

 VAR_10 = FUNC_4(sizeof(struct reader_dev), VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_3;

 VAR_10->timeout = VAR_0;
 VAR_10->buffer_status = 0;

 VAR_9->priv = VAR_10;
 VAR_10->p_dev = VAR_9;

 VAR_7[VAR_11] = VAR_9;

 FUNC_2(&VAR_10->devq);
 FUNC_2(&VAR_10->poll_wait);
 FUNC_2(&VAR_10->read_wait);
 FUNC_2(&VAR_10->write_wait);
 FUNC_6(&VAR_10->poll_timer, VAR_5, 0);

 VAR_12 = FUNC_5(VAR_9, VAR_11);
 if (VAR_12) {
  VAR_7[VAR_11] = ((void*)0);
  FUNC_3(VAR_10);
  return VAR_12;
 }

 FUNC_1(VAR_6, ((void*)0), FUNC_0(VAR_8, VAR_11), ((void*)0), "cmx%d", VAR_11);

 return 0;
}
