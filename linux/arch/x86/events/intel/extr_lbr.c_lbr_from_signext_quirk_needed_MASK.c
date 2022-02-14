
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lbr_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int* VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 int VAR_5 = VAR_4.intel_cap.lbr_format;
 bool VAR_6 = FUNC_0(VAR_1) ||
      FUNC_0(VAR_2);

 return !VAR_6 && (VAR_3[VAR_5] & VAR_0);
}
