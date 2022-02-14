
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {int extra; int user; int kernel; int unit_mask; int count; int event; int enabled; } ;
struct TYPE_3__ {unsigned int num_virt_counters; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dentry*,char*,int *) ;
 struct dentry* FUNC_3 (struct dentry*,char*) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_virt_counters; ++VAR_3) {
  struct dentry *VAR_4;
  char VAR_5[4];






  if (!FUNC_0(FUNC_1(VAR_3)))
   continue;

  FUNC_4(VAR_5, sizeof(VAR_5), "%d", VAR_3);
  VAR_4 = FUNC_3(VAR_2, VAR_5);
  FUNC_2(VAR_4, "enabled", &VAR_0[VAR_3].enabled);
  FUNC_2(VAR_4, "event", &VAR_0[VAR_3].event);
  FUNC_2(VAR_4, "count", &VAR_0[VAR_3].count);
  FUNC_2(VAR_4, "unit_mask", &VAR_0[VAR_3].unit_mask);
  FUNC_2(VAR_4, "kernel", &VAR_0[VAR_3].kernel);
  FUNC_2(VAR_4, "user", &VAR_0[VAR_3].user);
  FUNC_2(VAR_4, "extra", &VAR_0[VAR_3].extra);
 }

 return 0;
}
