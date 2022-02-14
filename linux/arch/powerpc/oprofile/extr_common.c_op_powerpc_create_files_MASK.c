
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_6__ {int enabled; int event; int count; int kernel; int user; int unit_mask; } ;
struct TYPE_5__ {int num_counters; } ;
struct TYPE_4__ {int mmcr0; int mmcr1; int mmcra; int cell_support; int enable_kernel; int enable_user; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct dentry*,char*,int*) ;
 struct dentry* FUNC_1 (struct dentry*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->num_counters; ++VAR_4) {
  struct dentry *VAR_5;
  char VAR_6[4];

  FUNC_2(VAR_6, sizeof VAR_6, "%d", VAR_4);
  VAR_5 = FUNC_1(VAR_3, VAR_6);

  FUNC_0(VAR_5, "enabled", &VAR_0[VAR_4].enabled);
  FUNC_0(VAR_5, "event", &VAR_0[VAR_4].event);
  FUNC_0(VAR_5, "count", &VAR_0[VAR_4].count);
  FUNC_0(VAR_5, "kernel", &VAR_0[VAR_4].kernel);
  FUNC_0(VAR_5, "user", &VAR_0[VAR_4].user);

  FUNC_0(VAR_5, "unit_mask", &VAR_0[VAR_4].unit_mask);
 }

 FUNC_0(VAR_3, "enable_kernel", &VAR_2.enable_kernel);
 FUNC_0(VAR_3, "enable_user", &VAR_2.enable_user);


 VAR_2.enable_kernel = 1;
 VAR_2.enable_user = 1;

 return 0;
}
