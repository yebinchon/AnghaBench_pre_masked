
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exclude_user; int exclude_kernel; int exclude_hv; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct perf_event **VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct perf_event *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!(VAR_2->flags & VAR_1))
  return 0;

 VAR_11 = VAR_4 + VAR_5;
 if (VAR_11 <= 1)
  return 0;

 VAR_12 = 1;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_9 = VAR_3[VAR_10];
  if (VAR_12) {
   VAR_6 = VAR_9->attr.exclude_user;
   VAR_7 = VAR_9->attr.exclude_kernel;
   VAR_8 = VAR_9->attr.exclude_hv;
   VAR_12 = 0;
  } else if (VAR_9->attr.exclude_user != VAR_6 ||
      VAR_9->attr.exclude_kernel != VAR_7 ||
      VAR_9->attr.exclude_hv != VAR_8) {
   return -VAR_0;
  }
 }

 return 0;
}
