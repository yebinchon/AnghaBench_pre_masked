
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int attr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(u64 VAR_2, u64 *VAR_3)
{
 int VAR_4;

 if (VAR_1.attr & VAR_0)
  return FUNC_1(
   VAR_2, VAR_3);

 VAR_4 = FUNC_0(VAR_2, 0);
 if (VAR_4)
  return VAR_4;
 *VAR_3 = 0;

 return 0;
}
