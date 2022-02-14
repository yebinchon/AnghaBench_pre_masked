
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t type; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (size_t) ;

__attribute__((used)) static int FUNC_1(u32 VAR_2, u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 1) {
  *VAR_3 = VAR_1[VAR_2].type;
  return 0;
 }

 return VAR_4 == 0 ? -VAR_0 : VAR_4;
}
