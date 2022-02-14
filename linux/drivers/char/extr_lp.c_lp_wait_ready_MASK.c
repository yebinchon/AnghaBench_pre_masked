
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6)
{
 int VAR_7 = 0;


 if (VAR_4[VAR_5].current_mode != VAR_1) {
  return 0;
 }

 do {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 && (VAR_6 || (FUNC_0(VAR_5) & VAR_2)))
   break;
  if (FUNC_2(VAR_3)) {
   VAR_7 = -VAR_0;
   break;
  }
 } while (VAR_7);
 return VAR_7;
}
