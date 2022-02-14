
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mm_segment_t ;
struct TYPE_6__ {int kernel_asce; int user_asce; } ;
struct TYPE_4__ {int mm_segment; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int ) ;

void FUNC_3(mm_segment_t VAR_6)
{
 VAR_5->thread.mm_segment = VAR_6;
 if (VAR_6 == VAR_3) {
  FUNC_0(VAR_2.user_asce, 1, 1);
  FUNC_1(VAR_0);
 } else {
  FUNC_0(VAR_2.kernel_asce, 1, 1);
  FUNC_2(VAR_0);
 }
 if (VAR_6 & 1) {
  if (VAR_6 == VAR_4)
   FUNC_0(VAR_2.user_asce, 7, 7);
  else
   FUNC_0(VAR_2.kernel_asce, 7, 7);
  FUNC_2(VAR_1);
 }
}
