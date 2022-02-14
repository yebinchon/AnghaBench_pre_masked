
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {int lbr_nr; TYPE_1__ intel_cap; scalar_t__ lbr_to; scalar_t__ lbr_from; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2.lbr_nr; VAR_3++) {
  FUNC_0(VAR_2.lbr_from + VAR_3, 0);
  FUNC_0(VAR_2.lbr_to + VAR_3, 0);
  if (VAR_2.intel_cap.lbr_format == VAR_0)
   FUNC_0(VAR_1 + VAR_3, 0);
 }
}
