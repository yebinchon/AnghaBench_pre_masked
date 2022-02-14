
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event; } ;
struct TYPE_4__ {TYPE_1__ cm_event; int work; int local_id; } ;
struct cm_timewait_info {TYPE_2__ work; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct cm_timewait_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 struct cm_timewait_info* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cm_timewait_info * FUNC_3(__be32 VAR_4)
{
 struct cm_timewait_info *VAR_5;

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->work.local_id = VAR_4;
 FUNC_1(&VAR_5->work.work, VAR_3);
 VAR_5->work.cm_event.event = VAR_2;
 return VAR_5;
}
