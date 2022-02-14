
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ max_depth; } ;
struct iolatency_grp {scalar_t__ min_lat_nsec; TYPE_1__ rq_depth; } ;
struct bio_issue {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct bio_issue*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct iolatency_grp*) ;
 int FUNC_4 (struct iolatency_grp*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct iolatency_grp *VAR_1,
      struct bio_issue *VAR_2, u64 VAR_3,
      bool VAR_4)
{
 u64 VAR_5 = FUNC_1(VAR_2);
 u64 VAR_6;





 VAR_3 = FUNC_0(VAR_3);

 if (VAR_3 <= VAR_5)
  return;

 VAR_6 = VAR_3 - VAR_5;





 if (FUNC_5(VAR_4 && VAR_1->rq_depth.max_depth != VAR_0)) {
  u64 VAR_7 = VAR_1->min_lat_nsec;
  if (VAR_6 < VAR_7)
   FUNC_2(FUNC_3(VAR_1), VAR_3, VAR_7 - VAR_6);
  return;
 }

 FUNC_4(VAR_1, VAR_6);
}
