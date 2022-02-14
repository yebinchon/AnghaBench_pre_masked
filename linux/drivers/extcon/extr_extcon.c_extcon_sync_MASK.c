
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct extcon_dev {int state; TYPE_1__ dev; int lock; int nh_all; int * nh; } ;
typedef int state_buf ;
typedef int name_buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct extcon_dev*,unsigned int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,char**) ;
 int FUNC_7 (TYPE_1__*,int *,char*) ;
 int FUNC_8 (int *,int,struct extcon_dev*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_1__*,int *,char*) ;

int FUNC_13(struct extcon_dev *VAR_4, unsigned int VAR_5)
{
 char VAR_6[120];
 char VAR_7[120];
 char *VAR_8;
 char *VAR_9[3];
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 if (!VAR_4)
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_4, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_10(&VAR_4->lock, VAR_14);
 VAR_13 = !!(VAR_4->state & FUNC_0(VAR_12));
 FUNC_11(&VAR_4->lock, VAR_14);





 FUNC_8(&VAR_4->nh[VAR_12], VAR_13, VAR_4);





 FUNC_8(&VAR_4->nh_all, VAR_13, VAR_4);

 FUNC_10(&VAR_4->lock, VAR_14);

 VAR_8 = (char *)FUNC_4(VAR_2);
 if (!VAR_8) {

  FUNC_11(&VAR_4->lock, VAR_14);

  FUNC_1(&VAR_4->dev, "out of memory in extcon_set_state\n");
  FUNC_5(&VAR_4->dev.kobj, VAR_3);

  return -VAR_1;
 }

 VAR_11 = FUNC_7(&VAR_4->dev, ((void*)0), VAR_8);
 if (VAR_11 > 0) {
  if (VAR_8[VAR_11 - 1] == '\n')
   VAR_8[VAR_11 - 1] = 0;
  FUNC_9(VAR_6, sizeof(VAR_6), "NAME=%s", VAR_8);
  VAR_9[VAR_10++] = VAR_6;
 }

 VAR_11 = FUNC_12(&VAR_4->dev, ((void*)0), VAR_8);
 if (VAR_11 > 0) {
  if (VAR_8[VAR_11 - 1] == '\n')
   VAR_8[VAR_11 - 1] = 0;
  FUNC_9(VAR_7, sizeof(VAR_7), "STATE=%s", VAR_8);
  VAR_9[VAR_10++] = VAR_7;
 }
 VAR_9[VAR_10] = ((void*)0);


 FUNC_11(&VAR_4->lock, VAR_14);
 FUNC_6(&VAR_4->dev.kobj, VAR_3, VAR_9);
 FUNC_3((unsigned long)VAR_8);

 return 0;
}
