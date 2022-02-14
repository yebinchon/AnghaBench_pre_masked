
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct throtl_grp {unsigned long* slice_start; int* io_disp; TYPE_1__* td; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int throtl_slice; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 (struct throtl_grp*,int) ;

__attribute__((used)) static bool FUNC_4(struct throtl_grp *VAR_3, struct bio *VAR_4,
      unsigned long *VAR_5)
{
 bool VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;
 u64 VAR_11;

 VAR_8 = VAR_2 - VAR_3->slice_start[VAR_6];


 VAR_10 = FUNC_2(VAR_8 + 1, VAR_3->td->throtl_slice);
 VAR_11 = (u64)FUNC_3(VAR_3, VAR_6) * VAR_10;
 FUNC_1(VAR_11, VAR_0);

 if (VAR_11 > VAR_1)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_11;

 if (VAR_3->io_disp[VAR_6] + 1 <= VAR_7) {
  if (VAR_5)
   *VAR_5 = 0;
  return 1;
 }


 VAR_9 = VAR_10 - VAR_8;

 if (VAR_5)
  *VAR_5 = VAR_9;
 return 0;
}
