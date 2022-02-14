
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {scalar_t__ mode; scalar_t__ type; } ;
struct kernfs_open_file {int kn; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef int cpumask_var_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct rdtgroup*,int ,int ,int ) ;
 int FUNC_5 (struct rdtgroup*,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct kernfs_open_file*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 struct rdtgroup* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_13(struct kernfs_open_file *VAR_9,
       char *VAR_10, size_t VAR_11, loff_t VAR_12)
{
 cpumask_var_t VAR_13, VAR_14, VAR_15;
 struct rdtgroup *VAR_16;
 int VAR_17;

 if (!VAR_10)
  return -VAR_0;

 if (!FUNC_12(&VAR_13, VAR_3))
  return -VAR_2;
 if (!FUNC_12(&VAR_14, VAR_3)) {
  FUNC_6(VAR_13);
  return -VAR_2;
 }
 if (!FUNC_12(&VAR_15, VAR_3)) {
  FUNC_6(VAR_13);
  FUNC_6(VAR_14);
  return -VAR_2;
 }

 VAR_16 = FUNC_10(VAR_9->kn);
 FUNC_8();
 if (!VAR_16) {
  VAR_17 = -VAR_1;
  FUNC_9("Directory was removed\n");
  goto unlock;
 }

 if (VAR_16->mode == VAR_6 ||
     VAR_16->mode == VAR_7) {
  VAR_17 = -VAR_0;
  FUNC_9("Pseudo-locking in progress\n");
  goto unlock;
 }

 if (FUNC_7(VAR_9))
  VAR_17 = FUNC_0(VAR_10, VAR_14);
 else
  VAR_17 = FUNC_2(VAR_10, VAR_14);

 if (VAR_17) {
  FUNC_9("Bad CPU list/mask\n");
  goto unlock;
 }


 FUNC_1(VAR_13, VAR_14, VAR_8);
 if (FUNC_3(VAR_13)) {
  VAR_17 = -VAR_0;
  FUNC_9("Can only assign online CPUs\n");
  goto unlock;
 }

 if (VAR_16->type == VAR_4)
  VAR_17 = FUNC_4(VAR_16, VAR_14, VAR_13, VAR_15);
 else if (VAR_16->type == VAR_5)
  VAR_17 = FUNC_5(VAR_16, VAR_14, VAR_13);
 else
  VAR_17 = -VAR_0;

unlock:
 FUNC_11(VAR_9->kn);
 FUNC_6(VAR_13);
 FUNC_6(VAR_14);
 FUNC_6(VAR_15);

 return VAR_17 ?: VAR_11;
}
