
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
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_0(struct perf_event **VAR_5, unsigned int VAR_6[],
     int VAR_7, int VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14;
 struct perf_event *VAR_15;






 if (VAR_4->flags & VAR_1)
  return 0;

 VAR_13 = VAR_7 + VAR_8;
 if (VAR_13 <= 1)
  return 0;

 VAR_14 = 1;
 for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
  if (VAR_6[VAR_12] & VAR_2) {
   VAR_6[VAR_12] &= ~VAR_3;
   continue;
  }
  VAR_15 = VAR_5[VAR_12];
  if (VAR_14) {
   VAR_9 = VAR_15->attr.exclude_user;
   VAR_10 = VAR_15->attr.exclude_kernel;
   VAR_11 = VAR_15->attr.exclude_hv;
   VAR_14 = 0;
  } else if (VAR_15->attr.exclude_user != VAR_9 ||
      VAR_15->attr.exclude_kernel != VAR_10 ||
      VAR_15->attr.exclude_hv != VAR_11) {
   return -VAR_0;
  }
 }

 if (VAR_9 || VAR_10 || VAR_11)
  for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
   if (VAR_6[VAR_12] & VAR_2)
    VAR_6[VAR_12] |= VAR_3;

 return 0;
}
