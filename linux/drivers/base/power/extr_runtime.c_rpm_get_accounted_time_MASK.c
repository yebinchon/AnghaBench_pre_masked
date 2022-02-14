
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int lock; int active_time; int suspended_time; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static u64 FUNC_3(struct device *VAR_0, bool VAR_1)
{
 u64 VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->power.lock, VAR_3);

 FUNC_2(VAR_0);
 VAR_2 = VAR_1 ? VAR_0->power.suspended_time : VAR_0->power.active_time;

 FUNC_1(&VAR_0->power.lock, VAR_3);

 return VAR_2;
}
