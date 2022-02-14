
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct svc_debugfs_pwrmon_rail {int id; struct gb_svc* svc; int * name; } ;
struct gb_svc_pwrmon_rail_names_get_response {int id; struct gb_svc* svc; int * name; } ;
struct gb_svc {struct svc_debugfs_pwrmon_rail* pwrmon_rails; struct dentry* debugfs_dentry; } ;
struct dentry {int dummy; } ;
typedef int fname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,struct svc_debugfs_pwrmon_rail*,int *) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct gb_svc*,int*) ;
 scalar_t__ FUNC_5 (struct gb_svc*,struct svc_debugfs_pwrmon_rail*,size_t) ;
 struct svc_debugfs_pwrmon_rail* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct svc_debugfs_pwrmon_rail*) ;
 struct svc_debugfs_pwrmon_rail* FUNC_8 (size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_10(struct gb_svc *VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 struct dentry *VAR_9;
 struct gb_svc_pwrmon_rail_names_get_response *VAR_10;
 u8 VAR_11;

 VAR_9 = FUNC_1("pwrmon", VAR_6->debugfs_dentry);
 if (FUNC_0(VAR_9))
  return;

 if (FUNC_4(VAR_6, &VAR_11))
  goto err_pwrmon_debugfs;

 if (!VAR_11 || VAR_11 > VAR_0)
  goto err_pwrmon_debugfs;

 VAR_8 = sizeof(*VAR_10) +
  VAR_1 * VAR_11;

 VAR_10 = FUNC_8(VAR_8, VAR_2);
 if (!VAR_10)
  goto err_pwrmon_debugfs;

 VAR_6->pwrmon_rails = FUNC_6(VAR_11, sizeof(*VAR_6->pwrmon_rails),
        VAR_2);
 if (!VAR_6->pwrmon_rails)
  goto err_pwrmon_debugfs_free;

 if (FUNC_5(VAR_6, VAR_10, VAR_8))
  goto err_pwrmon_debugfs_free;

 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
  struct dentry *VAR_12;
  struct svc_debugfs_pwrmon_rail *VAR_13 = &VAR_6->pwrmon_rails[VAR_7];
  char VAR_14[VAR_1];

  FUNC_9(VAR_14, sizeof(VAR_14), "%s",
    (char *)&VAR_10->name[VAR_7]);

  VAR_13->id = VAR_7;
  VAR_13->svc = VAR_6;

  VAR_12 = FUNC_1(VAR_14, VAR_9);
  FUNC_2("voltage_now", 0444, VAR_12, VAR_13,
        &VAR_5);
  FUNC_2("current_now", 0444, VAR_12, VAR_13,
        &VAR_3);
  FUNC_2("power_now", 0444, VAR_12, VAR_13,
        &VAR_4);
 }

 FUNC_7(VAR_10);
 return;

err_pwrmon_debugfs_free:
 FUNC_7(VAR_10);
 FUNC_7(VAR_6->pwrmon_rails);
 VAR_6->pwrmon_rails = ((void*)0);

err_pwrmon_debugfs:
 FUNC_3(VAR_9);
}
