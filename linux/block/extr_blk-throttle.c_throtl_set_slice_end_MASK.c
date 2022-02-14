
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_grp {TYPE_1__* td; int * slice_end; } ;
struct TYPE_2__ {int throtl_slice; } ;


 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_1(struct throtl_grp *VAR_0, bool VAR_1,
     unsigned long VAR_2)
{
 VAR_0->slice_end[VAR_1] = FUNC_0(VAR_2, VAR_0->td->throtl_slice);
}
