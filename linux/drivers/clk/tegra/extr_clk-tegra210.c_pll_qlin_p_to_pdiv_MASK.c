
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ pdiv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_3, u32 *VAR_4)
{
 int VAR_5;

 if (VAR_3) {
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
   if (VAR_3 <= VAR_2[VAR_5].pdiv) {
    if (VAR_4)
     *VAR_4 = VAR_5;
    return VAR_2[VAR_5].pdiv;
   }
  }
 }

 return -VAR_0;
}
