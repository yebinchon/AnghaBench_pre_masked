
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct throtl_grp {unsigned long* slice_start; unsigned long* bytes_disp; unsigned long* io_disp; int * slice_end; int service_queue; TYPE_1__* td; } ;
struct TYPE_2__ {unsigned long throtl_slice; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (struct throtl_grp*,int) ;
 unsigned long FUNC_3 (struct throtl_grp*,int) ;
 int FUNC_4 (int *,char*,char,unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_5 (struct throtl_grp*,int,unsigned long) ;
 scalar_t__ FUNC_6 (struct throtl_grp*,int) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_8(struct throtl_grp *VAR_3, bool VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 u64 VAR_8, VAR_9;

 FUNC_0(FUNC_7(VAR_3->slice_end[VAR_4], VAR_3->slice_start[VAR_4]));






 if (FUNC_6(VAR_3, VAR_4))
  return;
 FUNC_5(VAR_3, VAR_4, VAR_2 + VAR_3->td->throtl_slice);

 VAR_6 = VAR_2 - VAR_3->slice_start[VAR_4];

 VAR_5 = VAR_6 / VAR_3->td->throtl_slice;

 if (!VAR_5)
  return;
 VAR_9 = FUNC_2(VAR_3, VAR_4) * VAR_3->td->throtl_slice * VAR_5;
 FUNC_1(VAR_9, VAR_0);
 VAR_8 = VAR_9;

 VAR_7 = (FUNC_3(VAR_3, VAR_4) * VAR_3->td->throtl_slice * VAR_5) /
  VAR_0;

 if (!VAR_8 && !VAR_7)
  return;

 if (VAR_3->bytes_disp[VAR_4] >= VAR_8)
  VAR_3->bytes_disp[VAR_4] -= VAR_8;
 else
  VAR_3->bytes_disp[VAR_4] = 0;

 if (VAR_3->io_disp[VAR_4] >= VAR_7)
  VAR_3->io_disp[VAR_4] -= VAR_7;
 else
  VAR_3->io_disp[VAR_4] = 0;

 VAR_3->slice_start[VAR_4] += VAR_5 * VAR_3->td->throtl_slice;

 FUNC_4(&VAR_3->service_queue,
     "[%c] trim slice nr=%lu bytes=%llu io=%lu start=%lu end=%lu jiffies=%lu",
     VAR_4 == VAR_1 ? 'R' : 'W', VAR_5, VAR_8, VAR_7,
     VAR_3->slice_start[VAR_4], VAR_3->slice_end[VAR_4], VAR_2);
}
