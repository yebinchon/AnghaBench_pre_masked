
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scr24x_dev {int refcnt; int lock; int * dev; int devno; int c_dev; } ;
struct pcmcia_device {scalar_t__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pcmcia_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(struct pcmcia_device *VAR_4)
{
 struct scr24x_dev *VAR_5 = (struct scr24x_dev *)VAR_4->priv;

 FUNC_4(VAR_0, FUNC_1(FUNC_0(VAR_2), VAR_5->devno));
 FUNC_6(&VAR_5->lock);
 FUNC_8(VAR_4);
 FUNC_2(&VAR_5->c_dev);
 FUNC_3(VAR_5->devno, VAR_3);
 VAR_5->dev = ((void*)0);
 FUNC_7(&VAR_5->lock);

 FUNC_5(&VAR_5->refcnt, VAR_1);
}
