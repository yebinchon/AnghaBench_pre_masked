
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct child_latency_info {int scale_cookie; } ;
struct TYPE_4__ {TYPE_1__* q; } ;
struct blk_iolatency {TYPE_2__ rqos; } ;
struct TYPE_3__ {unsigned long nr_requests; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned long,int *) ;
 unsigned long FUNC_6 (unsigned long,int) ;

__attribute__((used)) static void FUNC_7(struct blk_iolatency *VAR_1,
    struct child_latency_info *VAR_2,
    bool VAR_3)
{
 unsigned long VAR_4 = VAR_1->rqos.q->nr_requests;
 unsigned long VAR_5 = FUNC_6(VAR_4, VAR_3);
 unsigned long VAR_6 = FUNC_3(&VAR_2->scale_cookie);
 unsigned long VAR_7 = VAR_4 << 1;
 unsigned long VAR_8 = 0;

 if (VAR_6 < VAR_0)
  VAR_8 = VAR_0 - VAR_6;

 if (VAR_3) {
  if (VAR_5 + VAR_6 > VAR_0)
   FUNC_4(&VAR_2->scale_cookie,
       VAR_0);
  else if (VAR_8 > VAR_4)
   FUNC_2(&VAR_2->scale_cookie);
  else
   FUNC_0(VAR_5, &VAR_2->scale_cookie);
 } else {






  if (VAR_8 > VAR_4) {
   if (VAR_8 < VAR_7)
    FUNC_1(&VAR_2->scale_cookie);
  } else {
   FUNC_5(VAR_5, &VAR_2->scale_cookie);
  }
 }
}
