
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {scalar_t__ mode; } ;
struct kernfs_open_file {int kn; } ;
typedef size_t ssize_t ;
typedef scalar_t__ pid_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct rdtgroup* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,struct rdtgroup*,struct kernfs_open_file*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kernfs_open_file *VAR_4,
        char *VAR_5, size_t VAR_6, loff_t VAR_7)
{
 struct rdtgroup *VAR_8;
 int VAR_9 = 0;
 pid_t VAR_10;

 if (FUNC_0(FUNC_6(VAR_5), 0, &VAR_10) || VAR_10 < 0)
  return -VAR_0;
 VAR_8 = FUNC_3(VAR_4->kn);
 if (!VAR_8) {
  FUNC_4(VAR_4->kn);
  return -VAR_1;
 }
 FUNC_1();

 if (VAR_8->mode == VAR_2 ||
     VAR_8->mode == VAR_3) {
  VAR_9 = -VAR_0;
  FUNC_2("Pseudo-locking in progress\n");
  goto unlock;
 }

 VAR_9 = FUNC_5(VAR_10, VAR_8, VAR_4);

unlock:
 FUNC_4(VAR_4->kn);

 return VAR_9 ?: VAR_6;
}
