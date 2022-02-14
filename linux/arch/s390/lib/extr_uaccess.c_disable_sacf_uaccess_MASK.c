
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mm_segment_t ;
struct TYPE_6__ {int user_asce; } ;
struct TYPE_4__ {scalar_t__ mm_segment; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(mm_segment_t VAR_4)
{
 VAR_3->thread.mm_segment = VAR_4;
 if (VAR_4 == VAR_2 && FUNC_2(27)) {
  FUNC_0(VAR_1.user_asce, 1, 1);
  FUNC_1(VAR_0);
 }
}
