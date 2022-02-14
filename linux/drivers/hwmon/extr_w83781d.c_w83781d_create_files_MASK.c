
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_10__ {int dev_attr; } ;
struct TYPE_9__ {int dev_attr; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_8__ {TYPE_1__ dev_attr; } ;
struct TYPE_7__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int *) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_16, int VAR_17, int VAR_18)
{
 int VAR_19;

 VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_8);
 if (VAR_19)
  return VAR_19;

 if (VAR_17 != VAR_15) {
  VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_9);
  if (VAR_19)
   return VAR_19;
 }
 if (VAR_17 != VAR_2 && VAR_17 != VAR_7 && VAR_17 != VAR_15) {
  VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_10);
  if (VAR_19)
   return VAR_19;
 }
 if (VAR_17 != VAR_15) {
  VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_13);
  if (VAR_19)
   return VAR_19;

  if (VAR_17 != VAR_7) {
   VAR_19 = FUNC_1(&VAR_16->kobj,
    &VAR_5.dev_attr.attr,
    VAR_0 | VAR_1);
   if (VAR_19)
    return VAR_19;
  }
 }

 if (VAR_17 != VAR_7 && VAR_17 != VAR_2) {
  VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_11);
  if (VAR_19)
   return VAR_19;
 }
 if (VAR_17 == VAR_14 && !VAR_18) {
  VAR_19 = FUNC_2(&VAR_16->kobj, &VAR_12);
  if (VAR_19)
   return VAR_19;
 }

 if (VAR_17 != VAR_2 && VAR_17 != VAR_7) {
  VAR_19 = FUNC_0(VAR_16,
      &VAR_3.dev_attr);
  if (VAR_19)
   return VAR_19;
  VAR_19 = FUNC_0(VAR_16,
      &VAR_4.dev_attr);
  if (VAR_19)
   return VAR_19;
  if (VAR_17 != VAR_15) {
   VAR_19 = FUNC_0(VAR_16,
     &VAR_6.dev_attr);
   if (VAR_19)
    return VAR_19;
  }
 }

 return 0;
}
