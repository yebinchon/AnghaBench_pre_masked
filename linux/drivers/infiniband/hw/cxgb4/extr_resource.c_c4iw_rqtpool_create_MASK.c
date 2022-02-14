
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* vr; } ;
struct c4iw_rdev {int rqt_pool; TYPE_4__ lldi; } ;
struct TYPE_6__ {int start; int size; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_7__ {TYPE_2__ rq; TYPE_1__ srq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,unsigned int,unsigned int,int) ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;

int FUNC_5(struct c4iw_rdev *VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_3->rqt_pool = FUNC_1(VAR_1, -1);
 if (!VAR_3->rqt_pool)
  return -VAR_0;





 if (VAR_3->lldi.vr->srq.size)
  VAR_7 = VAR_2;

 VAR_4 = VAR_3->lldi.vr->rq.start + VAR_7;
 VAR_5 = VAR_3->lldi.vr->rq.size - VAR_7;
 VAR_6 = VAR_4 + VAR_5;

 while (VAR_4 < VAR_6) {
  VAR_5 = FUNC_2(VAR_6 - VAR_4 + 1, VAR_5);
  if (FUNC_0(VAR_3->rqt_pool, VAR_4, VAR_5, -1)) {
   FUNC_3("failed to add RQT chunk (%x/%x)\n",
     VAR_4, VAR_5);
   if (VAR_5 <= 1024 << VAR_1) {
    FUNC_4("Failed to add all RQT chunks (%x/%x)\n",
     VAR_4, VAR_6 - VAR_4);
    return 0;
   }
   VAR_5 >>= 1;
  } else {
   FUNC_3("added RQT chunk (%x/%x)\n",
     VAR_4, VAR_5);
   VAR_4 += VAR_5;
  }
 }
 return 0;
}
