
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int fpsr; int vregs; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(u64 VAR_1)
{
 return VAR_1 >= FUNC_0(VAR_0.vregs) &&
  VAR_1 < FUNC_0(VAR_0.fpsr);
}
