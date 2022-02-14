
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* vr; } ;
struct c4iw_rdev {int ocqp_pool; TYPE_3__ lldi; } ;
struct TYPE_4__ {unsigned int start; unsigned int size; } ;
struct TYPE_5__ {TYPE_1__ ocq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int,unsigned int,int) ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;

int FUNC_5(struct c4iw_rdev *VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 VAR_2->ocqp_pool = FUNC_1(VAR_1, -1);
 if (!VAR_2->ocqp_pool)
  return -VAR_0;

 VAR_3 = VAR_2->lldi.vr->ocq.start;
 VAR_4 = VAR_2->lldi.vr->ocq.size;
 VAR_5 = VAR_3 + VAR_4;

 while (VAR_3 < VAR_5) {
  VAR_4 = FUNC_2(VAR_5 - VAR_3 + 1, VAR_4);
  if (FUNC_0(VAR_2->ocqp_pool, VAR_3, VAR_4, -1)) {
   FUNC_3("failed to add OCQP chunk (%x/%x)\n",
     VAR_3, VAR_4);
   if (VAR_4 <= 1024 << VAR_1) {
    FUNC_4("Failed to add all OCQP chunks (%x/%x)\n",
     VAR_3, VAR_5 - VAR_3);
    return 0;
   }
   VAR_4 >>= 1;
  } else {
   FUNC_3("added OCQP chunk (%x/%x)\n",
     VAR_3, VAR_4);
   VAR_3 += VAR_4;
  }
 }
 return 0;
}
