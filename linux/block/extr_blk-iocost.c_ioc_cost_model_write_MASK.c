
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u ;
typedef int substring_t ;
struct kernfs_open_file {int dummy; } ;
struct TYPE_2__ {int * i_lcoefs; } ;
struct ioc {int user_cost_model; int lock; TYPE_1__ params; } ;
struct gendisk {int queue; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef int buf ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gendisk*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int ) ;
 struct gendisk* FUNC_3 (char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ioc*,int) ;
 int FUNC_5 (char*,int *,int) ;
 int FUNC_6 (char*,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct gendisk*) ;
 struct ioc* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_15(struct kernfs_open_file *VAR_5, char *VAR_6,
        size_t VAR_7, loff_t VAR_8)
{
 struct gendisk *VAR_9;
 struct ioc *VAR_10;
 u64 VAR_11[VAR_2];
 bool VAR_12;
 char *VAR_13;
 int VAR_14;

 VAR_9 = FUNC_3(&VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_10(VAR_9->queue);
 if (!VAR_10) {
  VAR_14 = FUNC_2(VAR_9->queue);
  if (VAR_14)
   goto err;
  VAR_10 = FUNC_10(VAR_9->queue);
 }

 FUNC_11(&VAR_10->lock);
 FUNC_8(VAR_11, VAR_10->params.i_lcoefs, sizeof(VAR_11));
 VAR_12 = VAR_10->user_cost_model;
 FUNC_12(&VAR_10->lock);

 while ((VAR_13 = FUNC_14(&VAR_6, " \t\n"))) {
  substring_t VAR_15[VAR_1];
  char VAR_16[32];
  int VAR_17;
  u64 VAR_18;

  if (!*VAR_13)
   continue;

  switch (FUNC_6(VAR_13, VAR_3, VAR_15)) {
  case 129:
   FUNC_5(VAR_16, &VAR_15[0], sizeof(VAR_16));
   if (!FUNC_13(VAR_16, "auto"))
    VAR_12 = 0;
   else if (!FUNC_13(VAR_16, "user"))
    VAR_12 = 1;
   else
    goto einval;
   continue;
  case 128:
   FUNC_5(VAR_16, &VAR_15[0], sizeof(VAR_16));
   if (FUNC_13(VAR_16, "linear"))
    goto einval;
   continue;
  }

  VAR_17 = FUNC_6(VAR_13, VAR_4, VAR_15);
  if (VAR_17 == VAR_2)
   goto einval;
  if (FUNC_7(&VAR_15[0], &VAR_18))
   goto einval;
  VAR_11[VAR_17] = VAR_18;
  VAR_12 = 1;
 }

 FUNC_11(&VAR_10->lock);
 if (VAR_12) {
  FUNC_8(VAR_10->params.i_lcoefs, VAR_11, sizeof(VAR_11));
  VAR_10->user_cost_model = 1;
 } else {
  VAR_10->user_cost_model = 0;
 }
 FUNC_4(VAR_10, 1);
 FUNC_12(&VAR_10->lock);

 FUNC_9(VAR_9);
 return VAR_7;

einval:
 VAR_14 = -VAR_0;
err:
 FUNC_9(VAR_9);
 return VAR_14;
}
