
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_grp {unsigned long* slice_start; scalar_t__* slice_end; int service_queue; TYPE_1__* td; scalar_t__* io_disp; scalar_t__* bytes_disp; } ;
struct TYPE_2__ {scalar_t__ throtl_slice; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char,unsigned long,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct throtl_grp *VAR_2,
  bool VAR_3, unsigned long VAR_4)
{
 VAR_2->bytes_disp[VAR_3] = 0;
 VAR_2->io_disp[VAR_3] = 0;







 if (FUNC_1(VAR_4, VAR_2->slice_start[VAR_3]))
  VAR_2->slice_start[VAR_3] = VAR_4;

 VAR_2->slice_end[VAR_3] = VAR_1 + VAR_2->td->throtl_slice;
 FUNC_0(&VAR_2->service_queue,
     "[%c] new slice with credit start=%lu end=%lu jiffies=%lu",
     VAR_3 == VAR_0 ? 'R' : 'W', VAR_2->slice_start[VAR_3],
     VAR_2->slice_end[VAR_3], VAR_1);
}
