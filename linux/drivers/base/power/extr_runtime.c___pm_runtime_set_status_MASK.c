
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int runtime_status; int lock; scalar_t__ runtime_error; int child_count; int ignore_children; scalar_t__ disable_depth; } ;
struct device {TYPE_1__ power; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,unsigned int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct device *VAR_6, unsigned int VAR_7)
{
 struct device *VAR_8 = VAR_6->parent;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_7 != VAR_3 && VAR_7 != VAR_4)
  return -VAR_2;

 FUNC_11(&VAR_6->power.lock);





 if (VAR_6->power.runtime_error || VAR_6->power.disable_depth)
  VAR_6->power.disable_depth++;
 else
  VAR_10 = -VAR_0;

 FUNC_14(&VAR_6->power.lock);

 if (VAR_10)
  return VAR_10;







 if (VAR_7 == VAR_3) {
  int VAR_11 = FUNC_5();

  VAR_10 = FUNC_9(VAR_6);
  if (VAR_10)
   VAR_7 = VAR_4;

  FUNC_6(VAR_11);
 }

 FUNC_11(&VAR_6->power.lock);

 if (VAR_6->power.runtime_status == VAR_7 || !VAR_8)
  goto out_set;

 if (VAR_7 == VAR_4) {
  FUNC_1(&VAR_8->power.child_count, -1, 0);
  VAR_9 = !VAR_8->power.ignore_children;
 } else {
  FUNC_12(&VAR_8->power.lock, VAR_5);






  if (!VAR_8->power.disable_depth
      && !VAR_8->power.ignore_children
      && VAR_8->power.runtime_status != VAR_3) {
   FUNC_3(VAR_6, "runtime PM trying to activate child device %s but parent (%s) is not active\n",
    FUNC_4(VAR_6),
    FUNC_4(VAR_8));
   VAR_10 = -VAR_1;
  } else if (VAR_6->power.runtime_status == VAR_4) {
   FUNC_2(&VAR_8->power.child_count);
  }

  FUNC_13(&VAR_8->power.lock);

  if (VAR_10) {
   VAR_7 = VAR_4;
   goto out;
  }
 }

 out_set:
 FUNC_0(VAR_6, VAR_7);
 if (!VAR_10)
  VAR_6->power.runtime_error = 0;

 out:
 FUNC_14(&VAR_6->power.lock);

 if (VAR_9)
  FUNC_7(VAR_8);

 if (VAR_7 == VAR_4) {
  int VAR_12 = FUNC_5();

  FUNC_10(VAR_6);

  FUNC_6(VAR_12);
 }

 FUNC_8(VAR_6);

 return VAR_10;
}
