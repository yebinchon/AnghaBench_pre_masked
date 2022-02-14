
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_mode; char c_char; int c_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 VAR_8 = VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_5[VAR_9].c_mode != VAR_8) {
   VAR_10++;
   FUNC_7(VAR_5[VAR_9].c_mode);
   VAR_8 = VAR_5[VAR_9].c_mode;
  }
  if (VAR_5[VAR_9].c_char == '\0') {
   if (VAR_7)
    FUNC_0(VAR_0);
   else
    FUNC_4(' ', 1);
  } else
   FUNC_4(VAR_5[VAR_9].c_char, VAR_5[VAR_9].c_width);
  if (VAR_5[VAR_9].c_width > 1)
   VAR_9 += VAR_5[VAR_9].c_width - 1;
 }
 if (VAR_8 != VAR_1) {
  FUNC_7(0);
 }
 if (VAR_4 && VAR_10)
  FUNC_5();
 FUNC_6('\n');
 if (VAR_2 && VAR_10)
  FUNC_2();
 (void)FUNC_1(VAR_6);
 if (VAR_7)
  VAR_7--;
 FUNC_3();
}
