
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int orig_x; int orig_y; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_3(const char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char VAR_10;

 if (VAR_2) {
  const char *VAR_11 = VAR_6;
  while (*VAR_11) {
   if (*VAR_11 == '\n')
    FUNC_2('\r');
   FUNC_2(*VAR_11++);
  }
 }

 if (VAR_3 == 0 || VAR_1 == 0)
  return;

 VAR_7 = VAR_0->screen_info.orig_x;
 VAR_8 = VAR_0->screen_info.orig_y;

 while ((VAR_10 = *VAR_6++) != '\0') {
  if (VAR_10 == '\n') {
   VAR_7 = 0;
   if (++VAR_8 >= VAR_3) {
    FUNC_1();
    VAR_8--;
   }
  } else {
   VAR_4[(VAR_7 + VAR_1 * VAR_8) * 2] = VAR_10;
   if (++VAR_7 >= VAR_1) {
    VAR_7 = 0;
    if (++VAR_8 >= VAR_3) {
     FUNC_1();
     VAR_8--;
    }
   }
  }
 }

 VAR_0->screen_info.orig_x = VAR_7;
 VAR_0->screen_info.orig_y = VAR_8;

 VAR_9 = (VAR_7 + VAR_1 * VAR_8) * 2;
 FUNC_0(14, VAR_5);
 FUNC_0(0xff & (VAR_9 >> 9), VAR_5+1);
 FUNC_0(15, VAR_5);
 FUNC_0(0xff & (VAR_9 >> 1), VAR_5+1);
}
