
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {char* buf; scalar_t__ mode; int spinlock; int size; scalar_t__ reading; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct tmc_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_8(struct coresight_device *VAR_4)
{
 int VAR_5 = 0;
 bool VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 struct tmc_drvdata *VAR_9 = FUNC_1(VAR_4->dev.parent);





 FUNC_5(&VAR_9->spinlock, VAR_8);
 if (!VAR_9->buf) {
  FUNC_6(&VAR_9->spinlock, VAR_8);


  VAR_7 = FUNC_3(VAR_9->size, VAR_3);
  if (!VAR_7)
   return -VAR_2;


  FUNC_5(&VAR_9->spinlock, VAR_8);
 }

 if (VAR_9->reading) {
  VAR_5 = -VAR_1;
  goto out;
 }






 if (VAR_9->mode == VAR_0) {
  FUNC_0(VAR_4->refcnt);
  goto out;
 }
 if (VAR_9->buf) {
  FUNC_4(VAR_9->buf, 0, VAR_9->size);
 } else {
  VAR_6 = 1;
  VAR_9->buf = VAR_7;
 }

 VAR_5 = FUNC_7(VAR_9);
 if (!VAR_5) {
  VAR_9->mode = VAR_0;
  FUNC_0(VAR_4->refcnt);
 } else {

  VAR_6 = 0;
 }
out:
 FUNC_6(&VAR_9->spinlock, VAR_8);


 if (!VAR_6)
  FUNC_2(VAR_7);

 return VAR_5;
}
