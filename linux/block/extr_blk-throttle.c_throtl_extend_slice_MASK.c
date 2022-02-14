
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_grp {int * slice_end; int * slice_start; int service_queue; TYPE_1__* td; } ;
struct TYPE_2__ {int throtl_slice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *,char*,char,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct throtl_grp *VAR_2, bool VAR_3,
           unsigned long VAR_4)
{
 VAR_2->slice_end[VAR_3] = FUNC_0(VAR_4, VAR_2->td->throtl_slice);
 FUNC_1(&VAR_2->service_queue,
     "[%c] extend slice start=%lu end=%lu jiffies=%lu",
     VAR_3 == VAR_0 ? 'R' : 'W', VAR_2->slice_start[VAR_3],
     VAR_2->slice_end[VAR_3], VAR_1);
}
