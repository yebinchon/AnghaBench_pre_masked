
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etb_drvdata {scalar_t__ mode; int spinlock; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct etb_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (struct etb_drvdata*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct coresight_device *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct etb_drvdata *VAR_7 = FUNC_1(VAR_4->dev.parent);

 FUNC_3(&VAR_7->spinlock, VAR_6);


 if (VAR_7->mode == VAR_1) {
  VAR_5 = -VAR_3;
  goto out;
 }

 if (VAR_7->mode == VAR_0) {
  VAR_5 = FUNC_2(VAR_7);
  if (VAR_5)
   goto out;

  VAR_7->mode = VAR_2;
 }

 FUNC_0(VAR_4->refcnt);
out:
 FUNC_4(&VAR_7->spinlock, VAR_6);
 return VAR_5;
}
