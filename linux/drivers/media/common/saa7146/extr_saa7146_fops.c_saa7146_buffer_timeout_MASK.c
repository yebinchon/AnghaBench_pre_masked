
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct saa7146_dmaqueue {scalar_t__ curr; struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,struct saa7146_dev*,struct saa7146_dmaqueue*) ;
 int VAR_0 ;
 struct saa7146_dmaqueue* FUNC_2 (int ,struct timer_list*,int ) ;
 struct saa7146_dmaqueue* VAR_1 ;
 int FUNC_3 (struct saa7146_dev*,struct saa7146_dmaqueue*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_2 ;

void FUNC_6(struct timer_list *VAR_3)
{
 struct saa7146_dmaqueue *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 struct saa7146_dev *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;

 FUNC_1("dev:%p, dmaq:%p\n", VAR_5, VAR_4);

 FUNC_4(&VAR_5->slock,VAR_6);
 if (VAR_4->curr) {
  FUNC_0("timeout on %p\n", VAR_4->curr);
  FUNC_3(VAR_5,VAR_4,VAR_0);
 }
 FUNC_5(&VAR_5->slock,VAR_6);
}
