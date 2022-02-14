
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; } ;
struct TYPE_3__ {int size; } ;
struct optimized_kprobe {TYPE_2__ kp; TYPE_1__ optinsn; } ;
struct kprobe {int dummy; } ;


 int VAR_0 ;
 struct kprobe* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kprobe*) ;

int FUNC_2(struct optimized_kprobe *VAR_1)
{
 int VAR_2;
 struct kprobe *VAR_3;

 for (VAR_2 = 1; VAR_2 < VAR_1->optinsn.size; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1->kp.addr + VAR_2);
  if (VAR_3 && !FUNC_1(VAR_3))
   return -VAR_0;
 }

 return 0;
}
