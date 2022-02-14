
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mm_segment_t ;
struct TYPE_6__ {unsigned long kernel_asce; unsigned long user_asce; } ;
struct TYPE_4__ {int mm_segment; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int,int) ;
 int FUNC_1 (unsigned long,int,int) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

mm_segment_t FUNC_4(void)
{
 mm_segment_t VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_5 = VAR_4->thread.mm_segment;
 if (VAR_5 & 1)
  return VAR_5;
 VAR_4->thread.mm_segment |= 1;
 VAR_6 = VAR_2.kernel_asce;
 if (FUNC_2(VAR_5 == VAR_3)) {
  FUNC_1(VAR_7, 1, 1);
  if (VAR_7 != VAR_2.kernel_asce) {
   FUNC_0(VAR_2.kernel_asce, 1, 1);
   FUNC_3(VAR_0);
  }
  VAR_6 = VAR_2.user_asce;
 }
 FUNC_1(VAR_7, 7, 7);
 if (VAR_7 != VAR_6) {
  FUNC_0(VAR_6, 7, 7);
  FUNC_3(VAR_1);
 }
 return VAR_5;
}
