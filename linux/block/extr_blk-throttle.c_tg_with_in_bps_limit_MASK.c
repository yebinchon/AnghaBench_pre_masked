
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct throtl_grp {unsigned long* slice_start; unsigned int* bytes_disp; TYPE_1__* td; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {unsigned long throtl_slice; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 unsigned long FUNC_1 (unsigned int,unsigned long) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct throtl_grp*,int) ;
 unsigned int FUNC_5 (struct bio*) ;

__attribute__((used)) static bool FUNC_6(struct throtl_grp *VAR_2, struct bio *VAR_3,
     unsigned long *VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_3);
 u64 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = FUNC_5(VAR_3);

 VAR_9 = VAR_11 = VAR_1 - VAR_2->slice_start[VAR_5];


 if (!VAR_9)
  VAR_11 = VAR_2->td->throtl_slice;

 VAR_11 = FUNC_3(VAR_11, VAR_2->td->throtl_slice);

 VAR_8 = FUNC_4(VAR_2, VAR_5) * VAR_11;
 FUNC_2(VAR_8, VAR_0);
 VAR_6 = VAR_8;

 if (VAR_2->bytes_disp[VAR_5] + VAR_12 <= VAR_6) {
  if (VAR_4)
   *VAR_4 = 0;
  return 1;
 }


 VAR_7 = VAR_2->bytes_disp[VAR_5] + VAR_12 - VAR_6;
 VAR_10 = FUNC_1(VAR_7 * VAR_0, FUNC_4(VAR_2, VAR_5));

 if (!VAR_10)
  VAR_10 = 1;





 VAR_10 = VAR_10 + (VAR_11 - VAR_9);
 if (VAR_4)
  *VAR_4 = VAR_10;
 return 0;
}
