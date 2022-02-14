
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(off_t VAR_2,
        int *VAR_3, int *VAR_4,
        enum object_type VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2, VAR_5);
 int VAR_7 = VAR_6;
 int VAR_8 = VAR_0 - 1;

 if (VAR_6 < 0) {
  *VAR_3 = 0;
  *VAR_4 = -1;
  return;
 }
 while (VAR_6 > 0 && VAR_1[VAR_6 - 1].offset == VAR_2)
  --VAR_6;
 while (VAR_7 < VAR_8 && VAR_1[VAR_7 + 1].offset == VAR_2)
  ++VAR_7;
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
}
