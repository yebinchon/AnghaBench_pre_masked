
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {int unit_mask; int exl; int user; int kernel; int count; int event; int enabled; } ;
struct TYPE_3__ {int num_counters; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct dentry*,char*,int *) ;
 struct dentry* FUNC_1 (struct dentry*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_counters; ++VAR_3) {
  struct dentry *VAR_4;
  char VAR_5[4];

  FUNC_2(VAR_5, sizeof VAR_5, "%d", VAR_3);
  VAR_4 = FUNC_1(VAR_2, VAR_5);

  FUNC_0(VAR_4, "enabled", &VAR_0[VAR_3].enabled);
  FUNC_0(VAR_4, "event", &VAR_0[VAR_3].event);
  FUNC_0(VAR_4, "count", &VAR_0[VAR_3].count);
  FUNC_0(VAR_4, "kernel", &VAR_0[VAR_3].kernel);
  FUNC_0(VAR_4, "user", &VAR_0[VAR_3].user);
  FUNC_0(VAR_4, "exl", &VAR_0[VAR_3].exl);

  FUNC_0(VAR_4, "unit_mask", &VAR_0[VAR_3].unit_mask);
 }

 return 0;
}
