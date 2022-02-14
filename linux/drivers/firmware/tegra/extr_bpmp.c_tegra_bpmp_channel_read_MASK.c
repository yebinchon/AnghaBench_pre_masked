
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {struct tegra_bpmp* bpmp; } ;
struct TYPE_2__ {int lock; int allocated; } ;
struct tegra_bpmp {TYPE_1__ threaded; int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (struct tegra_bpmp_channel*,void*,size_t,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tegra_bpmp_channel*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct tegra_bpmp_channel *VAR_0,
           void *VAR_1, size_t VAR_2, int *VAR_3)
{
 struct tegra_bpmp *VAR_4 = VAR_0->bpmp;
 unsigned long VAR_5;
 ssize_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_0);
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  goto unlock;
 }

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_7, VAR_4->threaded.allocated);
 FUNC_3(&VAR_4->lock, VAR_5);

unlock:
 FUNC_5(&VAR_4->threaded.lock);

 return VAR_6;
}
